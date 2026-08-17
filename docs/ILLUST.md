# 삽화

작성 시작: 2026-08-17

글에 넣는 그림의 캐릭터·색·프롬프트를 적어둔다.
**캐릭터 일관성은 적어두지 않으면 다음 글에서 어긋난다.**
그림은 매번 새로 생성되는 물건이라, 기준이 문서에 없으면 같은 캐릭터가 안 나온다.

---

## 1. 캐릭터 — 아테나

**무기를 도구로 바꾼 아테나.** 창·방패 대신 돋보기와 접이 자를 들고 다닌다.
지혜의 여신이라는 상징과, 이 블로그가 재고 확인하는 곳이라는 성격이 맞물린다.

| | |
|---|---|
| 등신 | **2.5등신 SD** |
| 머리 | 어깨 길이 웨이브 |
| 투구 | 작은 코린트식 투구를 모자처럼 뒤로 젖혀 쓴다. **얼굴을 가리지 않는다** |
| 옷 | 짧은 민소매 키톤, 어깨 브로치, 허리끈 |
| 지물 | 돋보기 · 접이 자 · 연필. **창과 검은 없다** |
| 동행 | 주먹만 한 둥근 올빼미 (어깨 위) |
| 기본 표정 | 눈 크게, 고개 갸웃, 입은 작은 `ㅇ` |

**올빼미가 리액션 담당이다.** 컷마다 올빼미 표정만 바꿔도 시리즈가 산다.
아테나가 갸웃하면 같이 갸웃하고, 놀라면 같이 놀라고, 마무리에서는 끄덕인다.
실루엣이 단순해서 스케치풍에서 안 무너지는 것도 이점이다.

**4등신을 검토했다가 2.5등신으로 되돌렸다** (2026-08-17).
4등신이 소녀로 읽히기는 하지만, 이 시리즈에서 원한 것은 정확한 나이대가 아니라
귀여움이었다. 등신을 올리면 눈 위치·볼살·팔다리 길이를 같이 올려야 하고,
그 끝에 남는 것은 SD 가 아니라 작게 그린 캐릭터다.

---

## 2. 그림체 — 스케치 + 스팟 컬러

> **흑백 연필 선화에 금색 한 가지만 남긴다.**

**이 사이트에는 유채색이 하나도 없다.** 팔레트가 전부 따뜻한 무채색이라,
삽화의 포인트 색이 **사이트의 첫 색**이 된다. 나중에 링크 색이나 문법 강조 색을
정할 때 이 값이 기준이 된다 → [PLAN.md](PLAN.md) §3 "아직 결정하지 않은 것".

| | 값 |
|---|---|
| 포인트 | `#c9a227` (채도를 더 낮추려면 `#b08d3f`) |
| 그 외 전부 | 회색조 |

**왜 금색인가**

- **컨셉이 맞는다.** 아테나의 상징이 금이다. 투구·브로치가 원래 금색인 것이
  자연스러워서, 억지로 얹은 포인트로 보이지 않는다
- **양쪽 배경에서 다 살아남는다.** 미색(`#faf9f7`) 위에서도 보이고 따뜻한
  검정(`#141412`) 위에서도 뜬다. 붉은색은 **다크에서 탁해진다** — 배경이 중성 검정이
  아니라 붉은 기가 도는 검정이라 색끼리 먹는다
- **한 색만 쓰면 시리즈가 한 벌로 묶인다.** 두 색을 넘어가면 스팟 컬러가 아니라
  그냥 채색이다

**포인트는 두 곳까지.** 고정 포인트(투구·브로치) 하나와, 컷마다 달라지는 것 하나다.

이게 이 그림체의 진짜 쓸모다 — **금색이 그 컷에서 봐야 할 것을 가리킨다.**
장식이 아니라 시선 유도다.

**머리를 금색으로 칠하지 않는다.** 면적이 커서 부분 채색이 아니라 그냥 금발이 된다.
하더라도 앞머리 한 갈래나 머리 끝까지다.

**그림 안에 글자를 넣지 않는다.** 이미지 모델은 한글을 거의 못 쓰고 라틴도 자주 뭉갠다.
글자가 있어야 할 자리는 물결선으로 두고, 진짜 글자가 필요하면 나중에 SVG 로 얹는다.

---

## 3. 배경 — 흰색으로 뽑아서 투명으로 뺀다

생성은 순백 배경으로 하고, 받아서 **흰색을 빼 투명 PNG 로 저장한다.**

흰 배경 그림을 그대로 쓰면 다크 화면에서 판이 번쩍인다 → [PLAN.md](PLAN.md) §6.
스케치 선화는 배경이 깔끔하게 떨어져서, 라이트에서는 미색 위에 다크에서는 검정 위에
선만 남는다.

- 배경에 회색 기가 돌면 투명으로 뺄 때 테두리에 얼룩이 남는다. **순백인지 확인한다**
- 다크에서 선을 반전시킬지는 실물을 보고 정한다. 반전하더라도 **포인트 색은 그대로 둔다**
- 파일은 `static/images/` 에. 파일명은 글 주소와 같은 규칙 — 영문 소문자와 하이픈

---

## 4. 컷 목록 — 「시안에 넣은 문장들이 궁금했습니다」

절이 여덟 개라 전부 넣으면 과하다. **★ 넷을 먼저 뽑는다.**

| | 파일명 | 들어갈 자리 | 장면 |
|---|---|---|---|
| ★ | `athena-question` | 도입 | 종이 세 장을 부채처럼 들고 갸웃 |
| | `athena-box-and-tag` | 하나는 분류, 하나는 이름 | 카드가 든 상자 옆에서 이름표 하나를 비교 |
| ★ | `athena-lens-and-fog` | 방법은 반대인데 하는 일은 같다 | 한 손 돋보기는 또렷, 한 손 뿌연 유리는 뭉갬 |
| | `athena-cut-word` | Lorem은 단어가 아니었다 | 잘려나간 단어 조각을 집어 들고 봄 |
| ★ | `athena-sieve` | 한글에서는 팬그램이 성립하지 않는다 | 체 구멍으로 조각 일곱 개가 새어 나감 |
| ★ | `athena-published` | 시안에 넣은 글이 그대로 발행돼 있었다 | 간판이 물결선인 건물 앞에서 놀람 |
| | `athena-new-ruler` | 그래서 자를 바꿨다 | 새 자를 펼쳐 재는 옆모습, 올빼미가 끄덕 |

`athena-sieve` 가 이 그림체와 특히 잘 맞는다. **빠져나가는 것이 금색**이면
"뭐가 새고 있다" 가 설명 없이 읽힌다.

`athena-question` 은 **`og:image` 후보**다. 미리보기에 캐릭터가 서면 시리즈에 얼굴이 생긴다.
그래서 얼굴이 정면에 가깝고 표정이 또렷한 것으로 고른다 — 작게 떠도 살아남아야 한다.

---

## 5. 프롬프트

### 공통 블록

**모든 컷 앞에 그대로 붙인다. 이것이 캐릭터 시트라 한 글자도 바꾸지 않는다.**

```text
A cute 2.5-head-tall SD chibi girl named Athena: shoulder-length wavy hair,
a small Corinthian helmet worn like a hat, tilted back so her whole face is
visible; a short sleeveless Greek chiton dress with a shoulder brooch and a
waist cord; simple sandals. A palm-sized round owl companion perched on her
shoulder.
```

### 스타일 블록

**컷 문단 뒤에 붙인다.** 마지막 줄의 포인트 지정만 컷마다 갈아 끼운다.

```text
Style: loose pencil sketch, monochrome graphite line art with light hatching,
selective spot color — everything is grayscale EXCEPT a single warm gold
accent (#c9a227) used only on her helmet, her shoulder brooch, and
<CUT ACCENT>. Pure white background. Single centered subject, generous
negative space.
```

### 부정 프롬프트

```text
full color, multiple accent colors, red accent, blue accent, colored skin,
colored hair, colored clothing, gradient background, background scenery,
furniture, text, letters, numbers, watermark, signature, weapon, spear,
sword, photorealistic, 3D render, heavy shading, multiple characters,
cropped limbs
```

### 컷별 블록

**`athena-question`** — 포인트: `the floating question mark`

```text
She holds three sheets of paper fanned out in one hand, looking up at them
with wide curious eyes and a slightly tilted head. The writing on the papers
is drawn as wavy squiggle lines, not readable letters. The owl tilts its head
in the same direction as hers. A small floating question mark above her head.
```

**`athena-lens-and-fog`** — 포인트: `the rim of the magnifying glass`

```text
She stands between two floating sheets of paper. In her right hand a large
magnifying glass held over the right sheet, where the squiggle lines under
the lens are drawn crisp and sharp. In her left hand a frosted pane of glass
held over the left sheet, where the squiggle lines are blurred and softened
into a gray smear. She looks back and forth between them, mouth slightly open.
The owl looks at the magnifying glass.
```

**`athena-sieve`** — 포인트: `the seven small falling stroke-shaped pieces`

```text
She holds a round kitchen sieve above her head with both hands, tipped
slightly. Seven small simple stroke-shaped pieces are falling through the
holes and scattering below her. She peers up through the sieve with a
puzzled, dismayed expression. The owl on her shoulder watches the falling
pieces fall past.
```

**`athena-published`** — 포인트: `the outline of the sign board`

```text
She stands in front of a plain simple storefront sign board mounted on a
minimal building facade, drawn with only a few outline strokes. The sign is
completely filled with wavy squiggle lines instead of a name. She stares up
at it, both hands raised near her face, mouth open in surprise. The building
is drawn with minimal lines, no surrounding scenery.
```

---

## 6. 뽑는 순서

1. **`athena-question` 부터.** 여러 장 돌려서 마음에 드는 얼굴 하나를 고른다
2. 그것을 **참조 이미지로 걸고** 나머지를 뽑는다. 안 그러면 컷마다 다른 얼굴이 나온다
3. 크기는 **1:1, 1440px 이상.** 본문 폭이 720px 이라 2배로 잡으면 고해상도 화면에서 안 뭉갠다
4. 흰 배경을 빼고 투명 PNG 로 저장 → `static/images/`

**참조를 바꾸면 시리즈 전체를 다시 뽑아야 한다.** 캐릭터 설정을 고칠 일이 있으면
컷 하나만 고치지 말고 1번부터 다시 간다.

**나오면 볼 것**

- **금색 면적** — 세 곳이 흩어져 보이면 컷 포인트를 빼고 둘로 줄인다
- **투구가 얼굴을 가리는지** — SD 는 머리가 커서 투구가 눈까지 내려오기 쉽다
- **물결선이 글자로 새지 않았는지** — 모델이 자꾸 진짜 글자를 그리려 든다
- **배경이 순백인지** — §3

---

## 7. 아직 정하지 않은 것

- **생성 도구.** 정해지면 도구별 인자(비율·스타일 강도)를 §5 에 함께 적는다
- **다크모드에서 선을 반전시킬 것인가.** 실물을 보고 정한다 → §3
- **`og:image` 를 글마다 줄 것인가.** 후보는 `athena-question` → [PLAN.md](PLAN.md) §6
- **이 캐릭터를 다음 글에도 쓸 것인가.** 시리즈로 굳으면 컷이 재활용되지만,
  글마다 캐릭터가 나오는 블로그가 되는 것이기도 하다. 두 번째 글에서 정한다
- **포인트 색을 사이트의 다른 곳에도 쓸 것인가** → §2
