// 빈 std::map 안에 자기 자신을 가리키는 포인터가 있는가.
// 있으면 센티넬(end() 자리의 노드)이 맵 객체 안에 있다는 뜻이고,
// 그런 맵은 바이트째 옮기면 옛 자리를 가리키게 된다.

#include <cstdio>
#include <cstring>
#include <map>

using Map = std::map<int, int>;

static void print_env()
{
#if defined(_LIBCPP_VERSION)
    printf("libc++ %d", _LIBCPP_VERSION);
#elif defined(__GLIBCXX__)
    printf("libstdc++ %d", __GLIBCXX__);
#elif defined(_MSVC_STL_VERSION)
    printf("MSVC STL %d", _MSVC_STL_VERSION);
#else
    printf("unknown");
#endif
    printf(", sizeof(std::map<int,int>) = %zu\n", sizeof(Map));
}

// 8바이트씩 뛰며 그 값이 range 가 가리키는 맵의 범위 안인지 본다
static void walk(void* obj, void* range, size_t size)
{
    char* base = (char*)range;
    void** word = (void**)obj;

    for (size_t i = 0; i < size / sizeof(void*); ++i)
    {
        char* value = (char*)word[i];

        printf("  +%zu  %p", i * sizeof(void*), word[i]);
        if (value >= base && value < base + size)
        {
            printf("  <- into the map at %p (+%d)", range, (int)(value - base));
        }
        printf("\n");
    }
}

int main()
{
    Map* m = new Map;
    Map* copy = new Map;

    print_env();
    printf("map at %p, copy at %p\n", (void*)m, (void*)copy);

    printf("map:\n");
    walk(m, m, sizeof(Map));

    memcpy(copy, m, sizeof(Map));   // 컴파일러가 경고한다. 일부러 안 껐다

    printf("copy (bytes moved, the map above still alive):\n");
    walk(copy, m, sizeof(Map));

    printf("copy: size() = %zu, empty() = %s, begin() == end() is %s\n",
           copy->size(),
           copy->empty() ? "true" : "false",
           copy->begin() == copy->end() ? "yes" : "no");

    // 둘이 같은 곳을 가리키게 됐으므로 지우지 않는다
}
