# blog

게임 서버 개발과 만든 것들에 대해 쓰는 개인 기술 블로그입니다.

읽는 사람은 대개 모바일이라 **모바일 화면을 우선**으로 만듭니다.

## 상태

시작 단계입니다. 아직 글도 스택도 없습니다.

- [x] 저장소 만들기
- [ ] 스택 정하기
- [ ] GitHub Pages 배포
- [ ] `blog.elkiss.me` 연결
- [ ] 첫 글

## 스택

**아직 정하지 않았습니다.**

프로필 페이지([profile-site](https://github.com/elkiss87/profile-site))는 빌드 도구 없이
HTML 파일 하나로 만들었지만, 블로그는 같은 방식으로 가기 어렵습니다.
글이 늘어날 때마다 목록·날짜·이전글 링크를 손으로 고쳐야 하기 때문입니다.

갈림길은 **빌드를 어디서 하느냐**입니다. 로컬에서 빌드하고 결과물을 올리는 방식과,
소스만 올리고 GitHub 쪽에서 빌드하게 하는 방식이 있습니다.
정하고 나면 근거를 `docs/STACK.md` 에 남깁니다.

## 관련

| | |
|---|---|
| 프로필 페이지 | [elkiss.me](https://elkiss.me) · [profile-site](https://github.com/elkiss87/profile-site) |
| 이 블로그 (예정) | `blog.elkiss.me` |

도메인 하나를 서브도메인으로 나눠 씁니다. 배포와 DNS 절차는
`profile-site` 저장소의 `docs/DEPLOY.md`, `docs/DOMAIN.md` 에 정리해두었습니다.

## 라이선스

글은 별도 표기가 없는 한 저작권을 유지합니다. 코드는 정해지면 추가합니다.
