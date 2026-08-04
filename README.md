# blog

게임 서버 개발과 만든 것들에 대해 쓰는 개인 기술 블로그입니다.

**모바일과 데스크톱 양쪽에서 깔끔한 것**을 목표로 합니다.

## 상태

시작 단계입니다. 아직 글도 스택도 없습니다.

**1차 — 인프라**

- [x] 저장소 만들기
- [x] GitHub Pages 배포
- [x] `blog.elkiss.me` 연결 + HTTPS

**2차 — 글을 쓰는 경로**

- [ ] 스택 정하기
- [ ] 사이트 뼈대
- [ ] 첫 글

## 스택

**아직 정하지 않았습니다.**

프로필 페이지([profile-site](https://github.com/elkiss87/profile-site))는 빌드 도구 없이
HTML 파일 하나로 만들었지만, 블로그는 같은 방식으로 가기 어렵습니다.
글이 늘어날 때마다 목록·날짜·이전글 링크를 손으로 고쳐야 하기 때문입니다.

다만 **지금 정하지는 않습니다.** 1차 목표인 배포 경로 검증이 끝날 때까지는
`index.html` 한 장으로 갑니다. 스택을 얹은 채로 사이트가 안 뜨면 원인이
DNS인지 빌드인지 구분되지 않기 때문입니다.

후보 검토와 판단 기준은 [docs/STACK.md](docs/STACK.md) 에 있습니다.

## 문서

| | |
|---|---|
| [docs/PLAN.md](docs/PLAN.md) | 기획 — 목표, 현재 상태, 사이트 규칙 |
| [docs/STACK.md](docs/STACK.md) | 기술 스택 검토 (결정 전) |
| [docs/LOG.md](docs/LOG.md) | 작업 일지 |

## 관련

| | |
|---|---|
| 프로필 페이지 | [elkiss.me](https://elkiss.me) · [profile-site](https://github.com/elkiss87/profile-site) |
| 이 블로그 (예정) | `blog.elkiss.me` |

도메인 하나를 서브도메인으로 나눠 씁니다. 배포와 DNS 절차는
`profile-site` 저장소의 `docs/DEPLOY.md`, `docs/DOMAIN.md` 에 정리해두었습니다.

## 라이선스

글은 별도 표기가 없는 한 저작권을 유지합니다. 코드는 정해지면 추가합니다.
