---
# 이 문서는 글이 아니라 레이아웃을 재는 자다. CSS 를 고칠 때마다 다시 열어본다.
# 그래서 content/posts/ 가 아니라 여기(최상위)에 두고 목록·RSS 에서 뺀다.
# 주소로는 열리므로 /pangram/ 으로 언제든 확인할 수 있다.
title: "키스의 고유 조건은 입술끼리 만나야 하고"
date: 2026-08-08
description: "글꼴과 레이아웃을 눈으로 확인하려고 만든 시안 문서. 팬그램·긴 글·목록·인용·코드 블록·표를 한 장에 모아뒀다."
build:
  list: never
  render: always
sitemap:
  disable: true
---

팬그램(pangram)은 글자를 한 번씩 다 쓰는 문장이다. 글꼴을 확인할 때 쓴다.
이 문서는 읽으라고 쓴 글이 아니라 **레이아웃을 눈으로 재려고** 만든 시안이다.
좁은 화면과 넓은 화면에서 같이 열어보고, 어느 쪽이 깨지는지 보면 된다.

## 팬그램

한글은 자음 14개와 모음 10개를 모두 쓰는 이 문장을 쓴다.

> 키스의 고유 조건은 입술끼리 만나야 하고 특별한 기술은 필요치 않다

`다람쥐 헌 쳇바퀴에 타고파` 를 쓰다가 바꿨다. 그 문장은 자음은 다 나오지만
모음이 ㅑ ㅕ ㅛ ㅜ ㅠ ㅡ ㅣ 일곱 개나 빠진다 — 자로 쓰기에는 구멍이 크다.
→ [시안에 넣은 문장들이 궁금했습니다](/pangram-lorem-ipsum/)

영문은 이것 하나로 정착했다.

> The quick brown fox jumps over the lazy dog

숫자와 문장부호도 같이 본다. 0123456789 그리고 `~!@#$%^&*()-_=+[]{};:'",.<>/?` 이다.
숫자가 섞인 문장에서 자리가 흔들리지 않는지 보려면 이런 줄이 필요하다 —
2026년 8월 8일, 640px, 17px, 1.8줄.

### 여기는 h3 이다

제목 단계가 두 개까지만 있으면 대개 충분하다.
셋째 단계까지 내려가야 한다면 글을 나눌 때가 된 것일 수도 있다.

## 본문 폭이 이 문서의 핵심이다

한글 본문은 한 줄이 너무 길면 눈이 다음 줄의 첫 글자를 놓친다.
데스크톱에서 폭을 묶는 이유가 화면이 남아서가 아니라 **길면 읽기 나쁘기 때문**이다.
지금 값은 640px이고, 17px 글자로 한 줄에 한글 37~38자가 들어간다.
이 문단이 세 줄 이상으로 접히는 화면에서 읽어보면 그 폭이 맞는지 감이 온다.

줄간격은 1.8이다. 목록에서 쓰는 1.7보다 조금 넓다.
오래 붙잡고 읽는 곳이라 같은 값을 쓰면 빽빽하게 느껴진다.
한글은 라틴 문자보다 글자당 밀도가 높아서 같은 수치라도 더 답답하게 보인다.

## 긴 글 — 라틴

팬그램은 글자 하나하나의 생김새를 보는 것이고, 긴 글은 **단락이 덩어리로 보일 때의
회색도**를 보는 것이다. 눈을 가늘게 뜨고 글자를 읽지 말고 문단의 명암만 보면 된다.
너무 검으면 줄간격이 좁은 것이고, 너무 흐리면 글자가 작거나 자간이 넓은 것이다.

Lorem ipsum dolor sit amet, consectetur adipiscing elit, sed do eiusmod tempor
incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam, quis nostrud
exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat. Duis aute irure
dolor in reprehenderit in voluptate velit esse cillum dolore eu fugiat nulla pariatur.

Excepteur sint occaecat cupidatat non proident, sunt in culpa qui officia deserunt
mollit anim id est laborum. Sed ut perspiciatis unde omnis iste natus error sit
voluptatem accusantium doloremque laudantium, totam rem aperiam, eaque ipsa quae ab
illo inventore veritatis et quasi architecto beatae vitae dicta sunt explicabo.

Nemo enim ipsam voluptatem quia voluptas sit aspernatur aut odit aut fugit, sed quia
consequuntur magni dolores eos qui ratione voluptatem sequi nesciunt. Neque porro
quisquam est, qui dolorem ipsum quia dolor sit amet, consectetur, adipisci velit.

## 긴 글 — 한글

**여기가 실제로 중요한 쪽이다.** 이 블로그의 글은 한글로 쓴다.
라틴 로렘 입숨은 회색도를 보여주지만 한글에서만 생기는 것들 —
조사 때문에 줄 끝이 들쭉날쭉해지는 것, 영문 용어가 끼어들 때 생기는 리듬 끊김,
붙여쓴 한자어 덩어리의 밀도 — 은 보여주지 못한다.

아래는 뜻 없이 채운 더미 글이다. 읽지 말고 덩어리로 보면 된다.

서버를 오래 굴리다 보면 처음에 세운 가정이 조용히 어긋나 있는 경우를 자주 만난다.
평소에는 아무 일도 없다가, 어느 날 트래픽이 평소의 세 배쯤 되는 순간에만 드러나는
종류의 어긋남이다. 이런 것은 코드를 아무리 읽어도 안 보이고, 실제로 그 상황이
와야만 보인다. 그래서 재현이 어려운 문제일수록 로그를 미리 남겨두는 쪽이 이긴다.

`timeout` 값 하나를 두고도 이야기가 갈린다. 짧게 잡으면 응답이 느린 구간에서
멀쩡한 요청까지 잘려나가고, 길게 잡으면 이미 죽은 연결을 오래 붙들고 있게 된다.
어느 쪽이 맞는지는 시스템마다 다르고, 대개는 한쪽을 고른 다음 그 선택이 만드는
새 문제를 감당하는 방식으로 정리된다. latency 를 줄이려다 처리량을 잃는 교환이
여기서도 똑같이 나온다.

숫자가 섞인 문장도 같이 본다. 초당 1,200건을 처리하던 구간에서 응답 시간이
평균 18ms 에서 240ms 로 늘었다면, 그 13배라는 숫자 자체보다 **언제부터 늘었는지**가
먼저다. 원인을 짚기 전에 시점을 짚는 편이 거의 항상 빠르다.

## 목록

순서 없는 목록:

- 첫째 항목. 짧은 것
- 둘째 항목은 조금 길게 써본다. 항목 하나가 두 줄로 접혔을 때 둘째 줄이 불릿 아래로 들어가지 않고 첫 줄 글자에 맞춰 정렬되는지 확인하는 용도다
- 셋째 항목
  - 중첩된 항목
  - 또 하나

순서 있는 목록:

1. 하나
2. 둘
3. 셋

## 인용

> 인용문은 본문보다 흐린 색을 쓰고 왼쪽에 선을 둔다.
> 두 줄 이상일 때 선이 끊기지 않는지 본다.
>
> 문단이 둘인 인용도 있다. 마지막 문단 아래 여백이 남지 않아야 한다.

## 코드

문장 안에 섞이는 짧은 코드는 이렇게 보인다 — `std::vector<int>`, `--baseURL`, `layouts/_partials/`.
배경이 옅게 깔리고 크기는 본문보다 조금 작다.

블록은 이렇다. **일부러 긴 줄을 하나 넣었다.**
좁은 화면에서 이 줄 때문에 페이지 전체가 가로로 밀리면 안 되고,
코드 블록 안에서만 스크롤되어야 한다.

```cpp
#include <chrono>
#include <memory>
#include <unordered_map>

namespace net {

// 세션 하나가 들고 있는 상태. 실제 서버라면 여기에 더 붙지만 시안이라 줄였다.
class Session : public std::enable_shared_from_this<Session> {
public:
  using Clock = std::chrono::steady_clock;

  explicit Session(std::uint64_t id) : id_(id), last_seen_(Clock::now()) {}

  // 이 줄은 가로 스크롤을 확인하려고 일부러 길게 뒀다. 접히면 안 되고 상자 안에서만 밀려야 한다.
  bool is_timed_out(Clock::duration limit) const noexcept { return (Clock::now() - last_seen_) > limit; }

  void touch() noexcept { last_seen_ = Clock::now(); }

private:
  std::uint64_t id_;
  Clock::time_point last_seen_;
};

}  // namespace net
```

문법 강조는 Hugo 안에 들어 있는 Chroma 가 **빌드할 때** 처리한다.
자바스크립트를 하나도 싣지 않고, 색은 CSS 클래스로 나오므로 나중에 색만 따로 바꿀 수 있다.

강조 없는 블록도 본다:

```
$ hugo server
Web Server is available at http://localhost:1313/
```

## 표

표는 좁은 화면에서 본문을 밀기 쉬운 또 하나의 자리다. 표만 따로 스크롤된다.

| 항목 | 값 | 비고 |
|---|---|---|
| 본문 폭 | 720px | 한 줄에 한글 40자 (800px 이상) |
| 본문 크기 | 17px | 목록은 15~17px |
| 줄간격 | 1.8 | 목록·UI 는 1.7 |
| 코드 크기 | 14px | 접지 않고 가로 스크롤 |
| 색 | `#faf9f7` / `#141412` | elkiss.me 와 같은 값 |

## 링크와 구분선

본문 안의 [링크는 이렇게](https://elkiss.me) 밑줄을 옅게 깔고, 올리면 진해진다.
파란색을 쓰지 않는 이유는 사이트에 파란 게 하나도 없기 때문이다.

## 각주

찾아본 글은 출처를 남긴다. 그래서 각주가 본문에 섞였을 때 글줄을 끊지 않는지,[^one]
글 끝의 목록이 본문보다 충분히 물러나 보이는지 봐야 한다.[^two]
번호를 눌러 뛰어간 자리가 화면 맨 위에 붙지는 않는지, `↩︎` 로 되돌아와지는지도 여기서 확인한다.

---

구분선 위아래 여백까지 보면 한 장에서 확인할 건 대충 끝난다.

[^one]: 짧은 각주. 본문 속 번호가 작고 흐린지, 링크 밑줄이 딸려오지는 않는지 본다.

[^two]: 조금 긴 각주. 두 줄이 넘어갈 때 줄간격과 들여쓰기가 어떻게 되는지, 그리고 [각주 안의 링크](https://elkiss.me)가 본문 링크와 같은 모양인지 함께 본다.
