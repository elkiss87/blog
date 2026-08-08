# blog

게임 서버 개발과 만든 것들에 대해 쓰는 개인 기술 블로그입니다.

**모바일과 데스크톱 양쪽에서 깔끔한 것**을 목표로 합니다.

## 상태

시작 단계입니다. 아직 글은 없습니다.

**1차 — 인프라**

- [x] 저장소 만들기
- [x] GitHub Pages 배포
- [x] `blog.elkiss.me` 연결 + HTTPS

**2차 — 글을 쓰는 경로**

- [x] 스택 정하기 — Hugo
- [x] 뼈대 시안 — `/sample/`
- [ ] 시안 다듬기 (좁은 폭·넓은 폭 양쪽에서)
- [ ] 대문을 글 목록으로 교체
- [ ] 첫 글

## 스택

**Hugo** 입니다. 테마를 쓰지 않고 `layouts/` 를 직접 짭니다.

프로필 페이지([profile-site](https://github.com/elkiss87/profile-site))는 빌드 도구 없이
HTML 파일 하나로 만들었지만, 블로그는 같은 방식으로 가기 어렵습니다.
글이 늘어날 때마다 목록·날짜·이전글 링크를 손으로 고쳐야 하기 때문입니다.

Hugo 를 고른 이유는 속도가 아니라 **영구 비용이 없다는 점**입니다.
런타임도 패키지 매니저도 딸려오지 않아서, 몇 달 방치하다 돌아와도 그대로 빌드됩니다.
Astro·Zola 와 견준 근거는 [docs/STACK.md](docs/STACK.md) §7 에 있습니다.

지금은 대문(`index.html`)을 그대로 두고 Hugo 산출물을 `/sample/` 아래에만
올려둔 상태입니다. 시안을 다듬은 뒤에 루트를 넘깁니다.

### 로컬에서 보기

```
winget install Hugo.Hugo.Extended   # 표준 빌드로도 됩니다
hugo server
```

`http://localhost:1313/` 이 열립니다. 저장하면 자동으로 새로고침됩니다.
배포에 쓰는 버전은 `.github/workflows/deploy.yml` 에 고정해두었습니다.

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
