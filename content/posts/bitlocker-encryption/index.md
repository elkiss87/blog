---
title: "BitLocker 는 문을 잠그는 줄 알았습니다"
date: 2026-10-27T23:42:00+09:00
description: "출장 준비를 하다가 BitLocker 를 알게 됐습니다. 하드웨어가 문을 잠그는 기능인 줄 알았는데, 그 방식은 따로 있었고 2018년에 깨졌습니다."
draft: true
---

<!-- 초고 3판. 2판이 다른 글들보다 훨씬 짧아서, 논리를 잇는 문장만 되살렸다.
     커버 그림이 아직 없다. 랜섬웨어 두 건은 아직 2차 출처뿐이다 -->

출장 준비로 장비 암호화를 챙기다가 BitLocker 를 알게 됐습니다. 궁금해서 조금 찾아봤습니다.

막연히 **하드웨어 어딘가에 잠금 표시를 적어두고, 비밀번호가 맞을 때만 디스크를 열어주는 기능**이라고
생각했습니다. 현관문에 자물쇠를 다는 것처럼요.

아니었습니다. BitLocker 는 디스크에 적힌 내용을 통째로 다시 적고 있었습니다.
그리고 **제가 떠올린 자물쇠 방식은 실제로 따로 있었고, 2018년에 깨졌습니다.**

## 잠그는 게 아니라 다시 적는 것이었습니다

BitLocker 를 켜면 드라이브 전체를 암호문으로 다시 씁니다. 그다음부터는 읽을 때 풀고
쓸 때 잠가서, **디스크에는 평문이 남지 않습니다.**[^faq]

단위는 드라이브 하나입니다. 폴더나 파일을 골라 잠그는 것은 EFS 라는 다른 기능인데,
처음엔 저도 둘을 섞어 생각했습니다. 그렇다고 디스크 전부가 암호화되는 것도 아닙니다.
부팅에 쓰는 작은 파티션 하나는 평문으로 남습니다. 잠금을 풀기 전에 뭔가는 실행돼야 하니까요.[^faq]

자물쇠라면 열쇠를 잃어버려도 자물쇠를 부수면 그만입니다. 다시 적은 디스크는
열쇠가 없으면 읽을 내용 자체가 없습니다. MS 도 필요한 인증 없이는 복구할 수 없게
만들었다고 적어둡니다.[^faq] 처음 찾아보면서 "이거 거의 랜섬웨어 수준인데" 싶었는데,
끝까지 보니 반만 농담이었습니다.

## 제가 떠올린 자물쇠는 실제로 있었습니다

스스로 암호화하는 SSD 가 있습니다. 안의 전용 회로가 모든 데이터를 디스크 키(DEK) 하나로
늘 암호화해 둡니다. 비밀번호는 원래 **이 DEK 를 꺼내는 열쇠**여야 합니다.
비밀번호에서 열쇠를 만들고, 그 열쇠로 DEK 를 풀어야 합니다.

2018년 네덜란드 연구진이 SSD 펌웨어를 뜯어보니, 어떤 제품은 비밀번호를 해시해서
저장된 값과 **비교만 하고** 잠금을 풀었습니다. 비밀번호가 DEK 와 이어져 있지 않으니
비교만 넘어가면 데이터가 나옵니다. 연구진은 이런 문제가 시장의 약 60% 에 걸려 있다고 봤습니다.[^ssd]

제가 떠올린 그대로입니다. 하드웨어가 비밀번호를 확인하고 문을 열어주는 방식.
논문에 따르면 이 비밀번호 기능이 들어 있는 표준(ATA 보안)은 애초에 목표가 접근 제어였습니다.
기기를 손에 쥔 작정한 공격자를 막으려던 것이 아니었습니다.

BitLocker 도 같이 뚫렸습니다. 그때 BitLocker 는 SSD 가 하드웨어 암호화를 지원한다고 하면
자기 암호화를 하지 않고 그쪽에 맡겼습니다.[^ssd] MS 는 그해 소프트웨어 암호화를 강제하는
방법을 권고로 냈고,[^adv] 지금은 기본값이 소프트웨어 암호화입니다.[^configure]

**자물쇠는 비밀번호를 확인하고, 암호화는 비밀번호가 있어야 계산이 됩니다.**
확인은 건너뛸 수 있지만 계산은 건너뛸 수 없습니다.

## 섹터에는 남는 자리가 없었습니다

그러면 BitLocker 는 무엇으로 다시 적을까요. BitLocker 가 처음 들어간 Windows Vista 를
만들던 2006년, MS 는 그 고민을 논문으로 남겼습니다.[^ferguson]

디스크에는 제약이 둘 있습니다. 섹터마다 따로 암호화해야 합니다. 데이터베이스 같은 프로그램은
섹터 하나를 쓰다 전원이 나가도 옆 섹터는 멀쩡하다는 데 기대기 때문입니다.
그리고 **암호화해도 섹터 크기가 늘면 안 됩니다.** 512바이트 섹터는 암호화해도 512바이트여야 합니다.
그래서 보통 암호화에 붙이는, 위조를 잡아내는 인증 코드를 둘 자리가 없습니다.

위조를 잡아낼 수 없으니 논문은 차선을 고릅니다. **암호문을 건드리면 평문이 쓸모없는
쓰레기가 되게 하는 것**입니다. 실행 파일을 조작해도 결과가 무작위면, 공격자가 원하는
일이 일어나기보다 프로그램이 죽을 가능성이 훨씬 큽니다.
논문은 이것을 가난한 사람의 인증(poor-man's authentication)이라고 부릅니다.

이 기준에서 흔히 쓰는 AES-CBC 는 탈락이었습니다. 암호문 한 블록을 건드리면
**바로 다음 블록의 비트를 골라 뒤집을 수 있습니다.** 함수 바로 앞의 데이터를 망가뜨리는 대신
함수 첫 명령을 원하는 대로 바꿀 수 있다는 뜻이라, 논문은 이 방식을 권하지 않는다고 적었습니다.
그래서 Vista 는 AES-CBC 앞에 디퓨저를 붙였습니다. 한 비트만 바뀌어도 섹터 전체로 번지게 섞는 장치입니다.

논문은 디퓨저가 아직 검증이 덜 된 새 장치라는 약점을 숨기지 않고,
옳은 선택이었는지는 시간이 알려줄 거라고 적었습니다. 시간은 이렇게 흘렀습니다.

| 때 | 방식 |
|---|---|
| 2007 Vista | AES-CBC + 디퓨저 |
| 2012 Windows 8 | AES-CBC |
| 2015 Windows 10 | XTS-AES — 지금 기본값 |

Windows 8 은 디퓨저를 뺐습니다.[^dubai] **2006년 논문이 권하지 않던 그 방식이 기본이 된 것**입니다.
Windows 10 에서 들어온 XTS-AES 는 암호문을 조작해 평문을 예측대로 바꾸는 공격을 더 잘 막고,
미국 정부 암호 표준(FIPS)을 따른다고 MS 가 소개합니다.[^1511]

그래도 XTS 가 섹터 전체를 흔들지는 않습니다. 16바이트 블록마다 따로 돌아서,
공격자는 블록 하나를 골라 흔들 수 있습니다.[^ptacek] **설계 목표만 보면 섹터 전체를
흔들던 처음 것이 더 깐깐했습니다.** 대신 표준이 아니었습니다. 지금 쓰는 것은 표준입니다.

## 열쇠는 디스크 안에 들어 있었습니다

찾아보면서 제일 인상적이었던 대목입니다. 암호화된 볼륨에도 **평문으로 적힌 부분**이 있습니다.

볼륨 맨 앞, 원래라면 파일시스템 이름(`NTFS`)이 적힐 자리에 `-FVE-FS-` 라는 글자가 들어갑니다.
BitLocker 볼륨이라는 표지판입니다. 표지판에는 열쇠 상자가 어디 있는지도 적혀 있습니다.[^libbde]

열쇠는 세 겹입니다. 데이터를 실제로 잠그는 열쇠가 FVEK, 그걸 감싸는 열쇠가 VMK 입니다.[^faq]

| 무엇을 | 무엇으로 감싸나 |
|---|---|
| 데이터 | FVEK |
| FVEK | VMK |
| VMK | TPM, PIN, 복구 비밀번호 — 하나씩 따로 |

감싼 상자들은 전부 디스크 안에, 세 벌씩 들어 있습니다.[^faq] 열쇠를 자물쇠 옆에 두는 꼴 같지만
상자가 잠겨 있어서 괜찮습니다. 맨 바깥 상자를 여는 것은 디스크 밖에 있는 것 — TPM 칩,
사용자가 아는 PIN, 따로 적어둔 복구 비밀번호 — 이고, BitLocker 는 이것들을 보호기라고 부릅니다.
겹겹이 둔 덕에 PIN 을 더해도 디스크를 다시 암호화하지 않습니다. 상자만 바꿔 끼웁니다.

앞의 SSD 도 층은 같았습니다.[^ssd] **다른 것은 맨 바깥 층이었습니다.**
BitLocker 는 바깥 층도 암호로 감쌌고, 깨진 SSD 는 바깥 층이 비교문 하나였습니다.

## 메인보드는 BitLocker 를 모릅니다

처음엔 메인보드가 이 표지판을 알아보고 잠금을 풀어주는 줄 알았습니다. 반은 맞았습니다.

펌웨어는 BitLocker 를 모릅니다. 평문으로 남긴 그 작은 파티션에서 Windows 부트 매니저를 띄울 뿐이고,
표지판을 읽는 것은 부트 매니저입니다.[^faq] 부트 매니저는 TPM 으로 잠근 상자를 TPM 에게 건넵니다.
**TPM 은 메인보드에 붙은 보안 칩입니다.** 요즘은 CPU 안에 들어 있기도 합니다.
메인보드가 풀어준다는 생각이 반쯤 맞았던 것은 이 칩 덕분입니다.

TPM 은 디스크를 보지 않고, **지금 부팅이 상자를 잠글 때와 똑같은지**만 봅니다.
같으면 열쇠를 내주고, 누가 부팅 경로를 바꿨으면 내주지 않습니다. 그때 뜨는 것이 복구 화면입니다.[^countermeasures]
BIOS 를 업데이트할 때 BitLocker 를 「일시 중단」하는 이유도 여기 있습니다. 맨 바깥 상자의 열쇠를
상자 옆에 꽂아두는 셈이라 부팅이 바뀌어도 열리고, 다시 켜면 바뀐 부팅에 맞춰 상자를 새로 잠급니다.[^faq]

그러니까 **문지기는 있습니다.** TPM 만 쓰면 사용자는 아무것도 입력하지 않고,
로그인 화면이 떴을 때 디스크는 이미 열려 있습니다. MS 도 실력 있는 공격자가 오래 손에 쥐면
이 방식은 감당할 만한 비용으로 뚫릴 수 있다며, 그런 상대라면 PIN 을 더하라고 권합니다.[^countermeasures]
PIN 도 열쇠를 만드는 데 쓰이지는 않습니다. TPM 에게 내보이는 증표입니다.[^faq]
복구 비밀번호만은 TPM 을 거치지 않고, 그 숫자에서 만든 열쇠로 직접 풉니다.[^faq]
문지기를 거치지 않는 유일한 길입니다.

다만 지키는 대상이 다릅니다. **깨진 SSD 의 문지기는 문을 지켰습니다.** 넘어가면 데이터가 있었습니다.
**TPM 은 열쇠를 지킵니다.** 넘어가도 남는 것은 암호문이고, 열쇠를 꺼내야 합니다.

## 잠그는 건 맞았습니다. 문이 아니라 열쇠를 잠그고 있었습니다

"거의 랜섬웨어 수준" 이라던 감상은 농담으로 끝나지 않았습니다. 2022년 MS 는 공격 그룹이
침입한 컴퓨터에서 BitLocker 를 켜고 돈을 요구했다고 보고했고,[^dev0270] 2024년 카스퍼스키가 찾은
ShrinkLocker 는 BitLocker 를 켠 뒤 그 열쇠를 공격자에게 보냈습니다.[^shrink]
새로 만든 암호가 아니라 앞에서 본 그 상자 그대로입니다.
**다른 것은 맨 바깥 열쇠를 누가 쥐었느냐 하나입니다.**

처음 떠올린 자물쇠는 문을 잠그는 방식이었고, 확인을 넘어가면 그만이라 깨졌습니다.
BitLocker 는 디스크를 다시 적고, 그 열쇠를 상자에 넣어 잠급니다. 그래서 BitLocker 를 쓸 때
챙길 것도 결국 열쇠입니다. 복구 비밀번호는 디스크 밖, 안전한 곳에 둡니다.[^faq]

[^faq]: Microsoft Learn, [BitLocker FAQ](https://learn.microsoft.com/en-us/windows/security/operating-system-security/data-protection/bitlocker/faq). 열쇠 세 겹과 저장 위치, 일시 중단, PIN 처리, 복구, EFS 와의 차이, 파티션이 둘 필요한 이유가 모두 이 문서에 있습니다. 2026년 10월에 본 문서 기준입니다.

[^ssd]: Carlo Meijer, Bernard van Gastel, [Self-encrypting deception: weaknesses in the encryption of solid state drives](https://www.ieee-security.org/TC/SP2019/papers/310.pdf), IEEE S&P 2019. 2018년 11월에 먼저 공개됐습니다.

[^adv]: MSRC, [ADV180028 — Guidance for configuring BitLocker to enforce software encryption](https://msrc.microsoft.com/update-guide/vulnerability/ADV180028) (2018).

[^configure]: Microsoft Learn, [Configure BitLocker](https://learn.microsoft.com/en-us/windows/security/operating-system-security/data-protection/bitlocker/configure). 하드웨어 암호화 정책을 따로 설정하지 않으면 지원 여부와 상관없이 소프트웨어 암호화를 씁니다. 2026년 10월에 본 문서 기준입니다.

[^ferguson]: Niels Ferguson, *AES-CBC + Elephant diffuser: A Disk Encryption Algorithm for Windows Vista*, Microsoft, 2006년 8월. 링크는 대학 강의 자료로 올라온 [사본](https://cise.ufl.edu/~nemo/cis4360/refs/bitlocker.pdf)입니다. 〔MS 배포본 링크 찾기〕 AES-CBC 만 쓰는 방식을 권하지 않는다는 대목은 3.2절, 디퓨저를 고른 이유와 그 약점은 4절에 있습니다.

[^dubai]: Microsoft 보안팀 블로그 보관본, [Bitlocker: AES-XTS (new encryption type)](https://learn.microsoft.com/en-us/archive/blogs/dubaisec/bitlocker-aes-xts-new-encryption-type) (2016). Windows 8 부터 쓰는 정책 레지스트리 값은 이름부터 `EncryptionMethodNoDiffuser` 입니다.

[^1511]: Microsoft Learn, [What's new in Windows 10, versions 1507 and 1511](https://learn.microsoft.com/en-us/previous-versions/windows/it-pro/windows-10/whats-new/whats-new-windows-10-version-1507-and-1511). XTS-AES 는 2015년 11월의 1511 버전에서 들어왔고, 지금도 기본값입니다 → [Configure BitLocker](https://learn.microsoft.com/en-us/windows/security/operating-system-security/data-protection/bitlocker/configure).

[^ptacek]: Thomas Ptacek, Erin Ptacek, [You Don't Want XTS](https://sockpuppet.org/blog/2014/04/30/you-dont-want-xts/) (2014). XTS 가 16바이트 블록을 따로 돌려 이어 붙인 구조라서, 공격자가 그 단위로 정밀하게 조작할 수 있다고 적습니다.

[^libbde]: Joachim Metz, [BitLocker Drive Encryption (BDE) format](https://github.com/libyal/libbde/blob/main/documentation/BitLocker%20Drive%20Encryption%20(BDE)%20format.asciidoc). MS 가 공개한 명세가 아니라 역분석으로 정리한 문서입니다.

[^countermeasures]: Microsoft Learn, [BitLocker countermeasures](https://learn.microsoft.com/en-us/windows/security/operating-system-security/data-protection/bitlocker/countermeasures). 2026년 10월에 본 문서 기준입니다.

[^dev0270]: Microsoft 보안 블로그, 「Profiling DEV-0270: PHOSPHORUS' ransomware operations」 (2022년 9월). 〔원문 확인 — 지금은 [보도](https://thehackernews.com/2022/09/microsoft-warns-of-ransomware-attacks.html)로만 봤다〕

[^shrink]: Kaspersky, [보도자료](https://www.kaspersky.com/about/press-releases/kaspersky-experts-identify-new-ransomware-using-bitlocker-to-encrypt-corporate-data) (2024년 5월). 〔Securelist 분석 원문 확인 — 열쇠를 보내는 부분은 아직 보도로만 봤다〕
