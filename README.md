# NBC_Project_9

## 필수 과제
- GameMode 서버 로직 구현
- 난수 생성 로직 구현
- 판정 로직
- 시도 횟수 및 상태 관리
- 승리, 무승부, 게임 리셋
- C++ 라이브러리 작성


GameMode 

- 판정 로직
- 

GameInstance
변수를 담고 있음.

//Replicated 서버에서 수정시 , 클라이언트에서 동기화 되는 변수
UPROPERTY(Replicated, BlueprintReadOnly, Category = "Server")
TArray<int32> BaseBallNumber;

//기회 횟수
int32 CountNumber;

서버에서 설정한 숫자 야구를 가지고 있고
플레이어의 기회 횟수를 가지고 있다.

왜 GameInstance를 사용하는가

GameMode는 호스트에만 존재하고

GameInstnace는 클라이언트에도 존재하기 때문에

### BaseBallNumber는 서버의 값을 클라이언트가 동기화 해서 받게 해서 똑같은 숫자를 가지게 하고

### CountNumber의 경우 클라이언트마다 다르게 설정
