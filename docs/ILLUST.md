# 삽화

작성 시작: 2026-08-17

글에 넣는 그림의 캐릭터·색·프롬프트를 적어둔다.
**캐릭터 일관성은 적어두지 않으면 다음 글에서 어긋난다.**
그림은 매번 새로 생성되는 물건이라, 기준이 문서에 없으면 같은 캐릭터가 안 나온다.

---

## 1. 캐릭터는 둘이다

**아테나가 묻고, 지휘관이 판단해서 적는다.** 이 블로그가 실제로 굴러가는 방식이 그대로 역할이 됐다.

| | 아테나 | 지휘관 |
|---|---|---|
| 하는 일 | 궁금해한다 | 판단하고 기록한다 |
| 모티프 | **무기를 도구로 바꾼** 지혜의 여신 | 성직자 |
| 지물 | 돋보기 · 접이 자 · 연필 | 혼천의 지팡이 |
| 기본 자세 | 올려다보며 갸웃 | 정면으로 서서 편하게 웃음 |
| 색 | 금 | 주홍 |

**대비는 성격이 아니라 역할이다.** 한쪽을 날카롭게 그려서 대비를 만들려다 실패했다 →
아래 §7. 둘 다 밝아도 "묻는다 / 답한다" 로 충분히 갈린다.

**지물이 두 캐릭터를 한 세계에 묶는다.** 돋보기·자·혼천의가 전부 재는 도구다.
그래서 성직자와 그리스 여신이 같은 그림에 서도 따로 놀지 않는다.

---

## 2. 색 — 캐릭터마다 하나

> **아테나는 금, 지휘관은 주홍. 그 외 전부 회색조.**

| | 값 | |
|---|---|---|
| 아테나 | `#c9a227` | 금 |
| 지휘관 | `#b8412e` | 주홍 — 테라코타 쪽으로 내린 붉은색 |

**"스팟 컬러는 하나" 가 아니라 "캐릭터마다 하나" 다.** 캐릭터가 하나일 때 색이 둘이면
산만한 것이지만, 색이 캐릭터를 가리키면 그건 규칙이다.

**근거가 하나 더 있다.** 중세 필사본의 채색이 정확히 금과 주홍 두 색이다 —
금박 장식(illumination)과 붉은 글씨(rubric). 첫 글이 활자와 조판의 역사를 다루는 글이라
우연이 아니라 어울리는 짝이 된다.

**순수한 빨강은 쓰지 않는다.** 미색 배경(`#faf9f7`)에서 튀고 따뜻한 검정(`#141412`)에서
탁해진다. 배경이 중성 검정이 아니라 붉은 기가 도는 검정이라 색끼리 먹는다.
흙 기가 도는 주홍으로 내리면 금색과 나란히 놔도 싸우지 않는다.

**이 사이트에는 유채색이 하나도 없었다.** 삽화의 포인트 색이 사이트의 첫 색이다.
나중에 링크 색이나 문법 강조 색을 정할 때 이 값이 기준이 된다 → [PLAN.md](PLAN.md) §3.

**포인트는 캐릭터당 세 곳까지.** 넘어가면 스팟 컬러가 아니라 그냥 채색이다.

**예외 — 지휘관의 안경은 설정상 금테지만 회색조로 그린다.** 금색은 아테나의 식별색이라,
둘이 한 컷에 서면 색이 인물을 못 가리키게 된다. 설정 시트가 기록하는 사실과
채색 규칙은 다른 층이다. 스케치에서 둥근 얇은 테는 색 없이도 안경으로 읽힌다.

---

## 3. 그림체

> **흑백 연필 선화 + 캐릭터별 스팟 컬러 하나.**

- 얇고 확신 있는 윤곽선, 그림자는 가벼운 해칭으로만
- **포인트 색이 그 컷에서 봐야 할 것을 가리킨다.** 장식이 아니라 시선 유도다
- **머리를 색으로 칠하지 않는다.** 면적이 커서 부분 채색이 아니라 그냥 채색이 된다

**그림 안에 글자를 넣지 않는다.** 이미지 모델은 한글을 거의 못 쓰고 라틴도 자주 뭉갠다.
글자가 있어야 할 자리는 물결선으로 두고, 진짜 글자가 필요하면 나중에 SVG 로 얹는다.

---

## 4. 배경은 투명으로 받는다

**프롬프트에서 투명 배경을 요청하면 그대로 나온다** (2026-08-19 확인).
받아서 흰색을 빼는 후처리가 필요 없었다.

흰 배경 그림을 그대로 쓰면 다크 화면에서 판이 번쩍인다 → [PLAN.md](PLAN.md) §6.
투명이면 라이트에서는 미색 위에, 다크에서는 검정 위에 그림만 남는다.

- **바닥 그림자를 넣지 말라고 명시한다.** 모델이 요청 없이도 자주 그린다
- 투명이 안 되면 순백으로 받아서 흰색을 뺀다. 배경에 회색 기가 돌면
  테두리에 얼룩이 남으니 **순백인지 확인한다**
- **파일은 `assets/images/` 에 둔다.** `static/` 에 두면 Hugo 가 손을 못 대서
  원본이 그대로 나간다. 파일명은 글 주소와 같은 규칙 — 영문 소문자와 하이픈
- 용량은 **빌드가 줄인다.** 렌더 훅이 `1440x webp q85` 로 변환한다.
  손으로 줄일 일이 없다 → `layouts/_markup/render-image.html`

**다크모드 걱정은 해소됐다.** 첫 그림을 재보니 그림 영역의 62%가 투명이고
밝은 픽셀은 화면의 17%뿐이었다. 선을 반전시키거나 테두리를 두를 필요가 없다.
**흰 옷이 넓은 그림이 들어오면 그때 다시 잰다.**

---

## 5. 프롬프트는 블록으로 나눈다

**고정할 것과 갈아 끼울 것을 분리한다.** 캐릭터 일관성이 여기서 나온다.

| 블록 | 바뀌는가 | 내용 |
|---|---|---|
| A. 캐릭터 | **불변** | 등신 · 얼굴 · 체형 · 머리 · 눈매 |
| B. 의상 | 거의 불변 | 옷 · 장식 |
| C. 지물 | 거의 불변 | 손에 든 것, 동행 |
| D. 자세·표정 | **컷마다** | 무엇을 하고 있는가 |
| E. 구도 | **컷마다** | 비율 · 시선 · 여백 |
| F. 그림체 | 전체 공통 | 스케치 + 스팟 컬러 |

**순서를 지킨다.** 대부분의 모델이 앞에 온 것에 가중치를 더 준다.
A→B→C→D→E→F 여야 캐릭터가 안 흔들린다.

**블록마다 짧게.** 프롬프트가 길어지면 모델이 뒷부분을 흘린다. D·E 는 두세 문장을 넘기지 않는다.

---

## 6. 아테나

| | |
|---|---|
| 등신 | 2.5등신 SD |
| 머리 | 어깨 길이 웨이브 |
| 투구 | 작은 코린트식 투구를 모자처럼 뒤로 젖혀 쓴다. **얼굴을 가리지 않는다** |
| 옷 | 짧은 민소매 키톤, 어깨 브로치, 허리끈 |
| 지물 | 돋보기 · 접이 자 · 연필. **창과 검은 없다** |
| 동행 | 주먹만 한 둥근 올빼미 (어깨 위) |
| 표정 | 눈 크게, 고개 갸웃, 입은 작은 `ㅇ` |
| 포인트 | 투구 · 어깨 브로치 · 컷마다 하나 |

**올빼미가 리액션 담당이다.** 컷마다 올빼미 표정만 바꿔도 시리즈가 산다.
아테나가 갸웃하면 같이 갸웃하고, 놀라면 같이 놀라고, 마무리에서는 끄덕인다.

**4등신을 검토했다가 2.5등신으로 되돌렸다.** 4등신이 소녀로 읽히기는 하지만,
이 시리즈에서 원한 것은 정확한 나이대가 아니라 귀여움이었다.

### A·B·C 블록

```text
A cute 2.5-head-tall SD chibi girl named Athena: shoulder-length wavy hair, a
small Corinthian helmet worn like a hat, tilted back so her whole face is
visible. Large round curious eyes.

She wears a short sleeveless Greek chiton dress with a shoulder brooch and a
waist cord, and simple sandals.

A palm-sized round owl companion is perched on her shoulder. She carries only
simple measuring tools — a magnifying glass, a folding ruler, a pencil — and
never any weapon.
```

### 컷 목록 — 「시안에 넣은 문장들이 궁금했습니다」

절이 여덟 개라 전부 넣으면 과하다. **★ 둘을 먼저 뽑는다** → §10.

| | 파일명 | 들어갈 자리 |
|---|---|---|
| ★ | `athena-question` | 도입 |
| | `athena-box-and-tag` | 하나는 분류, 하나는 이름 |
| | `athena-lens-and-fog` | 방법은 반대인데 하는 일은 같다 |
| | `athena-cut-word` | Lorem은 단어가 아니었다 |
| ★ | `athena-sieve` | 한글에서는 팬그램이 성립하지 않는다 |
| | `athena-published` | 시안에 넣은 글이 그대로 발행돼 있었다 |
| | `athena-new-ruler` | 그래서 자를 바꿨다 |

`athena-question` 은 **`og:image` 후보**다. 얼굴이 정면에 가깝고 표정이 또렷한 것으로
고른다 — 미리보기에서 작게 떠도 살아남아야 한다.

`athena-sieve` 가 **유일하게 정보를 나르는 컷**이다. 체 구멍으로 모음이 새는 그림은
글보다 빠르게 이해된다. 나머지는 본문을 그림으로 다시 말하는 것이라 성격이 다르다.

### D 블록 — 컷별

**`athena-question`** — 포인트: `the floating question mark`

```text
She holds three sheets of paper fanned out in one hand, looking up at them
with wide curious eyes and a slightly tilted head. The writing on the papers
is drawn as wavy squiggle lines, not readable letters. The owl tilts its head
in the same direction as hers. A small floating question mark above her head.
```

**`athena-sieve`** — 포인트: `the seven small falling stroke-shaped pieces`

```text
She holds a round kitchen sieve above her head with both hands, tipped
slightly. Seven small simple stroke-shaped pieces are falling through the
holes and scattering below her. She peers up through the sieve with a
puzzled, dismayed expression. The owl on her shoulder watches them fall past.
```

**`athena-lens-and-fog`** — 포인트: `the rim of the magnifying glass`

```text
She stands between two floating sheets of paper. In her right hand a large
magnifying glass held over the right sheet, where the squiggle lines under
the lens are drawn crisp and sharp. In her left hand a frosted pane of glass
held over the left sheet, where the squiggle lines are blurred into a gray
smear. She looks back and forth between them, mouth slightly open.
```

**`athena-published`** — 포인트: `the outline of the sign board`

```text
She stands in front of a plain storefront sign board on a minimal building
facade, drawn with only a few outline strokes. The sign is completely filled
with wavy squiggle lines instead of a name. She stares up at it, both hands
raised near her face, mouth open in surprise. The owl's eyes are wide open.
```

---

## 7. 지휘관

| | |
|---|---|
| 등신 | 2.5등신 — 아테나와 동일해야 한 컷에 설 수 있다 |
| 체형 | **날씬함.** 어깨선 좁고 팔다리 가늘게 |
| 얼굴 | **둥근 얼굴형에 볼살.** 여기만 둥글다 |
| 눈 | **크고 부드러운 눈.** 눈꼬리가 살짝 내려간다. 가늘게 뜨지 않는다 |
| 표정 | 편하게 웃는 얼굴이 기본값 |
| 안경 | **둥근 금테.** 그림에서는 회색조로 → §2 |
| 머리 | 6:4 가르마, 끝이 살짝 뻗침. 귀는 덮고 옷깃엔 안 닿음 |
| 옷 | 몸에 맞는 성직자 로브, 넓은 옷깃, 허리끈, 술 달린 짧은 스톨 |
| 지물 | **혼천의 지팡이** — 키보다 크다 |
| 포인트 | 스톨 테두리 · 술 · 혼천의 중심 구슬 |

**두 번 실패하고 세 번째에 맞췄다.** 남는 교훈이 둘이다.

**하나 — 대비를 성격으로 잡으면 안 된다.** 판단하는 사람을 엄격한 사람으로 옮겼더니
날카로운 심판관이 나왔다. 문서에 남은 말투는 오히려 느슨한 쪽인데도 그랬다.

**둘 — 한 군데가 문제면 한 군데만 고친다.** 날카로웠던 원인은 눈매 하나였는데
체형·옷·지물을 전부 바꿔서 이번엔 반대편 끝으로 갔다. 되돌릴 때 기준이 없으면
고칠 때마다 다른 캐릭터가 된다.

**지팡이는 크게 간다.** SD 에서 몸에 비해 큰 지물은 단점이 아니라 매력이다.
문제는 크기가 아니라 구도라서, 세로 비율로 잡고 살짝 비스듬히 들면 해결된다.

**혼천의를 고른 이유** — 보석이나 십자가를 달면 그냥 판타지 성직자가 된다.
혼천의는 **하늘을 재는 도구**라 아테나의 돋보기·자와 같은 계열에 남으면서,
겹친 고리가 실루엣을 화려하게 만들어 큰 지팡이 머리로 어울린다.
특정 종교 상징이 아니라는 것도 중요하다.

### A·B·C 블록

```text
A cute 2.5-head-tall SD chibi young man called the Commander, clean-shaven
and youthful. He is clearly slim and lightly built, with narrow shoulders and
thin limbs — only his face is round, with soft full cheeks. Short hair parted
6:4 to one side with softly flicked ends, covering the ears but not reaching
the collar. Round thin metal-rimmed glasses, the frame drawn in plain grey
line and left uncolored. Large gentle eyes with slightly downturned outer
corners and an easy warm smile.

He wears a neat fitted cleric robe with a broad collar and a waist cord, and
a short stole with tasseled ends and an embroidered hem border.

He carries a tall ornate wooden staff, noticeably taller than he is, its
shaft carved with fine spiral grooves. Crowning it is an armillary sphere —
several interlocking metal rings nested at angles around a small central orb,
held in an openwork cradle — with a short tasseled cord hanging beneath. The
staff is a plain physical object with no glow or magical effect, and carries
no cross or religious insignia.
```

### D·E 블록 — `commander-standing` (참조용 기본 컷)

```text
He stands facing the viewer, gripping the staff in his outer hand, his free
hand relaxed at his side. Vertical framing, the staff tilted at a slight
diagonal so it does not split the frame down the middle, its head rising past
his shoulder near the top edge.
```

---

## 8. F 블록 — 그림체

포인트 지정(`<ACCENT TARGETS>`)만 캐릭터·컷에 맞춰 갈아 끼운다.

```text
Style: loose pencil sketch, monochrome graphite line art with light hatching.
The entire drawing is grayscale EXCEPT one warm accent color <HEX>, used only
on <ACCENT TARGETS>. Everything else, including the glasses and the hair,
stays grey. Plain flat white background with no scenery and no ground shadow.
Single centered subject with generous empty space around it. No writing or
lettering anywhere in the image.
```

---

## 9. 도구 — GPT

**부정 프롬프트 칸이 없다.** 금지 목록을 본문에 붙이면 오히려 그 단어에 반응해서
그려버릴 수 있다. **금지는 전부 긍정 서술로 바꿔 본문에 녹인다.**

| 금지로 쓰던 것 | 이렇게 바꾼다 |
|---|---|
| `overweight, potbelly` | clearly slim and lightly built |
| `beard, old man` | clean-shaven and youthful |
| `gold rimmed glasses` | the frame drawn in plain grey line, left uncolored |
| `background scenery` | plain flat white background, no ground shadow |
| `magic aura, glowing gem` | a plain physical object with no glow |
| `text, letters` | no writing or lettering anywhere in the image |

**대화로 고칠 수 있는 것이 이 도구의 장점이다.** 프롬프트를 완벽하게 짤 필요가 줄어든다.
일단 뽑고 말로 고친다. 다만 **"나머지는 그대로" 를 반드시 붙인다** —
안 붙이면 전체를 새로 그려서 얼굴이 바뀐다.

```
눈매만 조금 더 부드럽게, 나머지는 그대로 유지해줘
몸을 더 날씬하게. 얼굴만 둥글고 몸은 가늘어야 해. 나머지는 그대로
```

- **마음에 드는 것이 나오면 그 이미지를 첨부해서** 다음 컷을 뽑는다. 일관성은 여기서 나온다
- **비율도 배경도 프롬프트에 말로 적는다.** `Draw a wide landscape illustration
  (about 3:2)` 처럼 첫 줄에 넣으면 된다. 설정에서 고를 필요가 없다
- **투명 배경을 프롬프트에서 요청한다.** `Make the background fully transparent if
  possible; otherwise use a plain flat white background` — 되면 §4 의 후처리가
  없어지고, 안 되면 흰 배경으로 나와서 어차피 손해가 없다

**두 캐릭터를 한 컷에 그릴 때는 참조 이미지를 둘 다 첨부한다.** 프롬프트만으로 두 명을
그리면 모델이 얼굴을 섞는다. 그래서 **단독 컷을 먼저 뽑아두는 것이 순서다.**

---

## 10. 삽화의 양 — 글당 한두 장

**캐릭터는 표지, 본문은 설명.**

| | |
|---|---|
| 도입 한 장 | 캐릭터. 시리즈 얼굴 |
| 본문 | **설명하는 그림만** |
| 나머지 | 뽑지 않는다 |

이유가 둘이다.

**하나 — 유지 비용.** 캐릭터가 한 번 서면 다음 글에서도 기대된다. 글마다 네 장씩
뽑고 고르고 배경을 빼면 그림 만드는 시간이 글 쓰는 시간보다 길어진다.
그러다 한 번 걸러 안 넣으면 첫 글만 화려하고 나머지는 민숭한 시리즈가 남는다.

**둘 — 기술 글에서 그림은 설명해야 제 값을 한다.** 본문에 쓴 것을 그림으로 다시
말하는 컷은 예쁘긴 해도 다른 일을 하는 것이다.

**되돌리기는 싸다.** 파일을 지우고 마크다운 한 줄을 빼면 끝이라, 글 주소처럼
공개되면 못 돌리는 결정이 아니다. 첫 글에 해보고 두 번째 글에서 다시 본다.

**예외는 `og:image` 다.** 슬랙·카톡이 미리보기를 오래 들고 있어서 고쳐도 잘 안 바뀐다
→ [LOG.md](LOG.md) 2026-08-05. **캐릭터를 `og:image` 로 거는 것만 마지막에 정한다.**

---

## 11. AI 로 만든다는 것은 밝힌다

**소개 페이지 끝에 짧은 한 문단으로 적는다** (2026-08-17).
삽화만이 아니라 글과 코드까지 함께 밝힌다 → [PLAN.md](PLAN.md) §5.

그림에만 따로 각주를 달지 않는다. 한 자리에서 한 번 말하는 것이 낫다.

---

## 12. 그린 것 — 기록

| 파일 | 컷 | 생성 |
|---|---|---|
| `assets/images/athena-and-commander.png` | 둘이 나란히 — 소개 페이지용 | 2026-08-19 · GPT |

원본 1536×1024, 투명 PNG, 2.28MB. 빌드가 264KB WebP 로 줄인다.

### `athena-and-commander` 의 D·E 블록

§7 까지의 A·B·C 를 두 캐릭터 몫으로 각각 넣고, 뒤에 이것을 붙인다.

```text
Athena holds up a single sheet of paper toward her companion, looking up at
him with her head tilted, asking something. The writing on the paper is drawn
as wavy squiggle lines, not readable letters. The Commander stands barely
taller than her — their heads at almost the same level — listening with a
warm smile, nodding slightly, his staff in his far hand on the outer edge of
the frame.

Draw it as a wide landscape illustration (about 3:2), both characters shown
full body, standing close together and facing slightly toward each other,
with generous empty space above and around them.
```

**포인트 지정은 둘을 함께 적고, 서로 넘어가지 말라고 분명히 적는다.**

```text
Warm gold (#c9a227) appears ONLY on Athena's helmet and shoulder brooch.
Warm vermilion (#b8412e) appears ONLY on the Commander's stole trim, his
tasseled cord, and the central orb of his staff. Never put gold on the
Commander or vermilion on Athena.
```

### 프롬프트와 결과가 어긋나는 자리

**프롬프트는 `2.5-head-tall` 인데 실제로는 4~5등신으로 나온다.**
그림체도 "성긴 연필 스케치" 라고 적었지만 실제로는 꽤 정교하게 렌더링된다.

**어긋난 문구를 고치지 않는다.** 그 문구가 그 결과를 만들었기 때문이다.
숫자를 실물에 맞춰 `4-head-tall` 로 바꾸면 다른 그림이 나온다.
**프롬프트는 설명이 아니라 손잡이다** — 결과가 좋으면 문구는 그대로 둔다.

십자가는 예외였다. `no cross or religious insignia` 를 적었는데도 나왔고,
이어서 고치기로 뺐다 → §9.

### 갤러리는 만들지 않는다

PLAN §5 가 "페이지는 셋으로 시작한다" 다. 갤러리는 네 번째 페이지고 지금 그림이 한 장이다.

**만드는 조건 — 쓰지 않은 컷까지 열 장이 넘고, 글에서 보여줄 자리가 없을 때.**
그 전까지는 그림이 글 안에 있는 것이 맞다. 캐릭터 페이지 때와 같은 방식으로
조건을 먼저 적어둔다.

---

## 13. 아직 정하지 않은 것

- **다크모드에서 선을 반전시킬 것인가** → §4
- **`og:image` 를 글마다 줄 것인가** → §10
- **이 캐릭터를 다음 글에도 쓸 것인가.** 시리즈로 굳으면 컷이 재활용되지만,
  글마다 캐릭터가 나오는 블로그가 되는 것이기도 하다. 두 번째 글에서 정한다
- **포인트 색을 사이트의 다른 곳에도 쓸 것인가** → §2
