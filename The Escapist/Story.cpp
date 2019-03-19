#include "stdafx.h"

void Story()
{
	int choice;
	int ichoice = 0;
	char MAP;
	int Hexa;
	int pos = 0;
	int _rand;

	setcolor(1);
	printf("The Escapist\n");
	setcolor(7);
	printf("콘솔 창을 전체화면으로 키워주세요.\n");
	getch();
	printf("콘솔 창에서 C:\\WINDOWS\\system32\\cmd.exe라고 쓰여진 곳에 오른쪽 클릭을 하고 속성으로 들어가 글꼴크기를 8로 해주세요.\n");
	getch();
	printf("모든 설정을 맞추시고 플레이할 준비가 되셨다면 아무 키나 눌러주세요.\n");
	getch();
	system("cls");
	printf("......\n");
	getch();
	printf("으음..여긴 어디지..?\n");
	getch();
	printf("일단 여기가 어딘지 알아봐야겠어.\n");
	getch();
	printf("주변을 보니 아쿠아리움의 매표소인것 같은데..\n");
	getch();
	system("cls");
	setcolor(3);
	while (1)
	{
		printf("\n\t입구 문을 열어볼까?\n");
		printf("\t1. 연다       2. 열지 않고 아쿠아리움 내부로 들어간다\n\t");
		scanf("%d", &choice);
		if (choice == 1)
		{
			printf("\t문이 열리지 않는다.\n");
			getch();
			system("cls");
		}
		else if (choice == 2) {
			printf("\t아쿠아리움 내부로 들어갔다.\n");
			break;
		}
		else if (choice == 3) {
			printf("\t어..열렸다!!    이스터에그 1  [빠른 귀가]\n");
			getch();
			exit(0);
		}
	}
	setcolor(7);
	getch();
	system("cls");
	printf("내부로 들어가니 작은 수족관들이 보인다.\n");
	getch();
	printf("바로 앞의 수족관에는 열대어들이 있다.\n");
	getch();
	printf("오른쪽의 수족관에는 해파리와 달파리가 있다.\n");
	getch();
	setcolor(6);
	printf("| 굉장히 밝게 빛난다.\n");
	getch();
	setcolor(7);
	printf("안쪽에는 화장실이 있다.\n");
	getch();
	setcolor(13);
	printf("| 불이 꺼져있어 약간 으스스한 느낌이 난다..\n");
	getch();
	setcolor(7);
	printf("앞에 화장실이 있다.\n");
	getch();
	printf("들어가보자.\n");
	getch();
	printf("화장실의 바닥에서 한 팜플렛을 발견했다.\n");
	getch();
	printf("어디보자...팜플렛의 겉표지를 보니 이 곳의 팜플렛이란 것을 알 수 있었다.\n");
	getch();
	printf("이 아쿠아리움의 이름은 딥 블루이고...\n");
	getch();
	printf("뒷면을 보니 아쿠아리움의 지도가 있다.\n");
	getch();
	setcolor(10);
	pos = 1;
	printf("이제부터 당신은 지도를 볼 수 있습니다.\n");
	getch();
	printf("지도를 보시려면 언제든 'M'을 눌러주세요.\n");
	system("cls");
	setcolor(7);
	Pass(pos);
	printf("팜플렛을 얻은 뒤 화장실에서 나와 아쿠아리움 내부로 들어갔다.\n");
	Pass(pos);
	setcolor(12);
	printf("갑자기 철컥 소리가 나더니 머리 위에서 무언가가 떨어졌다.\n");
	Pass(pos);
	printf("그 순간 나는 무언가를 밟고 넘어졌다.\n");
	Pass(pos);
	printf("일어나 보니 다행히 넘어진 덕분에 위에서 떨어진 것을 피할 수 있었다.\n");
	Pass(pos);
	printf("머리 위에서 떨어졌던 것은 정육면체 모양의 큰 대리석이었다.\n");
	Pass(pos);
	printf("이게 무엇인지는 잘 몰라도 아마 함정인 것 같다.\n");
	Pass(pos);
	printf("앞으로 조심해야 겠다.\n");
	Pass(pos);
	system("cls");
	setcolor(7);
	printf("그리고 대리석 옆에는 철로 만들어진 작은 육각기둥이 있다.\n");
	Pass(pos);
	printf("이 육각기둥이 날 구해주기도 했으니 일단 챙겨보자.\n");
	Hexa = 1;
	Pass(pos);
	system("cls");
	printf("다시 걸어가기 시작하였다.\n");
	Pass(pos);
	pos = 2;
	printf("복도의 오른쪽에는 5개의 작은 수족관들이 있다.\n");
	Pass(pos);
	printf("각 수족관에는 거미게가 한 마리씩 있었는데 거미게들의 등껍질 위에는 발광물질로 선명하게 숫자가 새겨져 있다.\n");
	Pass(pos);
	printf("맨 왼쪽에서부터  ");
	setcolor(13);
	printf("3  5  1  8  9");
	setcolor(7);
	printf("의 숫자가 쓰여져 있다.\n");
	Pass(pos);
	printf("중요해 보이니 기억해두자.\n");
	Pass(pos);
	system("cls");
	printf("숫자를 기억하고 다시 출발했다.\n");
	Pass(pos);
	printf("이번에는 양 옆면이 수조로 덮인 복도로 갔다.\n");
	pos = 3;
	Pass(pos);
	printf("양 옆의 수족관에는 피라니아와 콜로소마 파쿠가 있다.\n");
	Pass(pos);
	printf("저번에 인터넷에서 본 기억으론 아마 저 두 어종은 식인물고기였던 것 같다.\n");
	Pass(pos);
	printf("수족관의 끝에는 한 레버가 보인다.\n");
	Pass(pos);
	printf("뭔가 저 물고기들이 나를 쳐다보는 것 같다.\n");
	Pass(pos);
	printf("수족관의 끝에는 한 레버가 보인다.\n");
	Pass(pos);
	printf("빨리 자나가자.\n");
	Pass(pos);
	printf("그런데 복도 중간쯤에 한 레버가 있다.\n");
	Pass(pos);
	printf("나무로 된 레버이다.\n");
	Pass(pos);
	system("cls");
	setcolor(3);

	printf("\n\t레버를 당겨볼까?\n");
	printf("\t1. 레버를 당긴다.      2. 그냥 복도에서 나간다.\n");
	scanf("%d", &choice);
	switch (choice)
	{
	case 1:
		printf("어라...아무 일도 일어나지 않는다.\n");
		Pass(pos);
		printf("아무 일도 안 일어난게 다행인건가...\n");
		Pass(pos);
		break;
	case 2:
		setcolor(12);
		printf("갑자기 복도의 입, 출구가 어떤 벽으로 막혔다.\n");
		Pass(pos);
		printf("점점 물소리가 커진다.\n");
		Pass(pos);
		printf("수족관의 유리가 위로 올라가기 시작했다.\n");
		Pass(pos);
		printf("빨리 여기서 나갈 방법을 찾지 못하면 물고기밥이 될 것이다.\n");
		Pass(pos);
		system("cls");
		printf("전선, 파이프, 비상용 망치가 보인다.\n");
		Pass(pos);
		setcolor(3);
		system("cls");
		printf("\n\t어떻게 할까?\n");
		while (1)
		{
			static int posshammer = 0;
			static int posspipe = 0;
			static int posswire = 0;
			
			static int end = 0;

			printf("\t1. 비상용 망치를 사용한다     2. 전선을 잡아당긴다     3. 파이프를 잡아당긴다     4. 아무것도 하지 않는다\n\t");
			scanf("%d", &choice);
			switch (choice)
			{
			case 1:
				printf("비상용 망치를 집어 들었다.\n");
				posshammer = 1;
				Pass(pos);
				system("cls");
				printf("\n\t비상용 망치로 무엇을 할까?\n");
				if (posspipe == 1 && posswire == 1)
				{
					printf("\t1. 수족관 유리를 강타한다    2. 막힌 벽을 때린다    3. 아무것도 하지 않는다    4. 수족관 유리를 깨고 파이프에 매달린다    5. 수족관 유리를 깨고 전선을 물에 담근다    6. 물에 전선을 담근다    7. 수족관 유리를 깨고 파이프에 매달린 후 전선을 물에 떨어뜨린다\n\t");
				}
				else if (posspipe == 1)
				{
					printf("\t1. 수족관 유리를 강타한다    2. 막힌 벽을 때린다    3. 아무것도 하지 않는다    4. 수족관 유리를 깨고 파이프에 매달린다\n\t");
				}
				else if (posswire == 1)
				{
					printf("\t1. 수족관 유리를 강타한다    2. 막힌 벽을 때린다    3. 아무것도 하지 않는다    6. 물에 전선을 담근다\n\t");
				}
				else printf("\t1. 수족관 유리를 강타한다    2. 막힌 벽을 때린다    3. 아무것도 하지 않는다\n\t");

				scanf("%d", &choice);

				switch (choice)
				{
				case 1:
					printf("수족관의 유리가 깨지고 순식간에 물이 들어왔다.\n");
					Pass(pos);
					printf("물고기 밥이 되었다.\n");
					Pass(pos);
					exit(0);
				case 2:
					printf("벽에 금이 갔지만 아무 일도 일어나지 않았다.\n");
					Pass(pos);
					printf("\n");
					break;
				case 3:
					printf("아무것도 하지 않았다.\n");
					Pass(pos);
					printf("\n");
					break;
				case 4:
					if (posspipe == 1)
					{
						printf("수족관의 유리가 깨지고 물이 들어오기 시작했다.\n");
						Pass(pos);
						printf("재빨리 파이프에 매달려 물을 피했다.\n");
						Pass(pos);
						setcolor(12);
						printf("점점 팔에 힘이 빠진다.\n");
						Pass(pos);
						printf("결국 파이프를 놓치고 물로 떨어졌다.\n");
						Pass(pos);
						printf("물고기 밥이 되었다.\n");
						Pass(pos);
						setcolor(3);
						exit(0);
					}
					else
					{
						printf("꼼수 부리지 마세요.\n");
						Pass(pos);
					}
				case  5:
					if (posswire == 1)
					{
						printf("비상용 망치로 수족관의 유리를 깨고 전선을 물에 담구었다.\n");
						Pass(pos);
						setcolor(12);
						printf("지지직\n");
						Pass(pos);
						printf("전기에 지져졌다.\n");
						setcolor(3);
						Pass(pos);
						exit(0);
					}
					else {
						printf("꼼수 부리지 마세요.\n");
						Pass(pos);
					}
				case 6:
					if (posswire == 1)
					{
						printf("흘러들어오는 물에 전선을 담구었다.\n");
						Pass(pos);
						setcolor(12);
						printf("지직\n");
						Pass(pos);
						printf("감전되었지만 다행히 죽지는 않았다.\n");
						setcolor(3);
						Pass(pos);
						printf("조심해야겠다.\n");
						Pass(pos);
						printf("어? 몇 물고기들이 감전에 의해 죽었다.\n");
						Pass(pos);
						printf("이걸 활용할 수 있을 것 같다.\n");
						Pass(pos);
						printf("\n");
					}
					else {
						printf("꼼수 부리지 마세요.\n");
						Pass(pos);
					}
					break;
				case 7:
					if (posswire == 1 && posspipe == 1)
					{
						printf("수족관 유리를 깨니 물고기들이 밀려 들어왔다.\n");
						Pass(pos);
						printf("재빨리 파이프에 매달려 물고기들을 피했다.\n");
						Pass(pos);
						printf("그리고 누설된 전선을 떨어뜨렸다.\n");
						Pass(pos);
						setcolor(12);
						printf("지지직지인직\n");
						setcolor(3);
						Pass(pos);
						printf("모든 물고기들이 감전되어 죽었다.\n");
						Pass(pos);
						setcolor(12);
						printf("점점 팔에 힘이 빠진다.\n");
						Pass(pos);
						printf("결국 물로 떨어졌다.\n");
						Pass(pos);
						setcolor(3);
						Sleep(2000);
						printf("어..전선에 전력이 끊긴 듯 하다.\n");
						Pass(pos);
						printf("비상용 망치로 남은 수족관의 유리를 깨고 뒤에 있는 레버를 당겼다.\n");
						Pass(pos);
						printf("레버를 당기니 막혀있던 입, 출구가 열렸다.\n");
						Pass(pos);
						printf("빨리 이곳에서 빠져나가자.\n");
						end = 1;
						Pass(pos);
					}
					else {
						printf("꼼수 부리지 마세요.\n");
						Pass(pos);
					}
						break;
					
				default:
					printf("잘못 입력했습니다\n");
					Pass(pos);
					printf("\n");
				}
				break;
			case 2:
				printf("전선을 잡아당겼더니 전선이 뽑혔다.\n");
				posswire = 1;
				Pass(pos);
				printf("전선은 누설되어 있다.\n");
				Pass(pos);
				printf("아직 전선에 전기가 통하는 것 같다.\n");
				Pass(pos);
				printf("물도 있으니 조심해야겠다.\n");
				Pass(pos);
				printf("\n");
				break;
			case 3:
				printf("파이프를 잡아당겼다.\n");
				Pass(pos);
				printf("파이프가 빠지진 않았지만 어느 정도 내려왔다.\n");
				Pass(pos);
				printf("점프하면 충분히 잡을 수 있을 것 같다.\n");
				Pass(pos);
				printf("튼튼하게 박혀있어 매달려도 괜찮을 것 같다.\n");
				Pass(pos);
				posspipe = 1;
				printf("\n");
				break;
			case 4:
				printf("아무것도 하지 않았다.\n");
				Pass(pos);
				printf("\n");
				break;
			default:
				printf("잘못 입력하셨습니다.\n");
				Pass(pos);
				printf("\n");
			} // end switch
			if (end == 1) break;
		} 
	}
	system("cls");
	setcolor(7);
	printf("그 복도에서 나오니 또 다른 수족관들이 보인다.\n");
	Pass(pos);
	printf("도대체 얼마나 더 가야 이곳에서 탈출할 수 있을까...\n");
	Pass(pos);
	printf("앞으로 가니 왼쪽에 오징어들이 있는 수족관이 있다.\n");
	pos = 4;
	Pass(pos);
	printf("오징어 수족관 옆에는 비상용 손전등이 있다.\n");
	Pass(pos);
	printf("혹시 모르니 챙겨두자.\n");
	Pass(pos);
	system("cls");
	printf("더 가보니 관중석과 천장이 없는 한 수족관이 보인다\n");
	pos = 5;
	Pass(pos);
	printf("수족관 안에는 몇 마리의 돌고래들이 보인다.\n");
	Pass(pos);
	printf("돌고래들은 비치볼을 가지고 놀고 있다.\n");
	Pass(pos);
	printf("수족관에 천장이 없는 걸 보니 사람이 들어가 돌고래와 묘기를 부리는 곳이었던 것 같다.\n");
	Pass(pos);
	printf("수족관의 사다리를 타고 올라가 돌고래들을 자세히 보았다.\n");
	Pass(pos);
	printf("돌고래들이 비치볼을 칠 때마다 텅 소리가 나고 그 후에 비치볼 안에서 무언가가 튕기는 소리가 났다.\n");
	Pass(pos);
	printf("비치볼이 전등에 밝혀질 때마다 육각기둥 모양의 그림자가 생겼다.\n");
	Pass(pos);
	printf("아마 저 육각기둥은 내가 가진 육각기둥과 같은 것인거 같다.\n");
	Pass(pos);
	printf("저 육각기둥을 얻을 방법을 찾아보자.\n");
	Pass(pos);
	printf("수족관 위에서 물까지의 거리는 약 2미터 정도 되 보인다.\n");
	Pass(pos);
	printf("주변에 뭔가 있을까?\n");
	Pass(pos);
	printf("사다리에서 내려와 수족관 뒤 쪽으로 가보니 밧줄, 그물, 긴 철 막대가 있다.\n");
	Pass(pos);
	printf("일단 다 가져가 보자.\n");
	Pass(pos);
	system("cls");
	printf("돌고래들은 오징어를 즐겨 먹는다고 들었다.\n");
	Pass(pos);
	while (1)
	{
		pos = 6;
		system("cls");
		static int posscuttlefish = 0;
		static int useditem = 0;
		static int possrope = 1;
		static int possnet = 1;
		static int possstick = 1;

		static int end = 0;
		system("cls");
		printf("\n\t어떻게 할까?\n");
		if (posscuttlefish == 1)
		{
			switch (useditem)
			{
			case 1:
				if (possnet == 0 && possstick == 0) printf("\t1. 돌고래 수족관에 들어간다    3. 오징어 수족관으로 간다    5. 비상용 망치로 돌고래 수족관의 유리를 깬다    6. 오징어가 묶인 줄을 돌고래 수족관에 내린다\n");
				else if (possnet == 0) printf("\t1. 돌고래 수족관에 들어간다    3. 오징어 수족관으로 간다    4. 철 막대로 돌고래를 공격한다    5. 비상용 망치로 돌고래 수족관의 유리를 깬다    6. 오징어가 묶인 줄을 돌고래 수족관에 내린다\n");
				else if (possstick == 0) printf("\t1. 돌고래 수족관에 들어간다    2. 그물로 돌고래를 낚는다    3. 오징어 수족관으로 간다    5. 비상용 망치로 돌고래 수족관의 유리를 깬다    6. 오징어가 묶인 줄을 돌고래 수족관에 내린다\n");
				else printf("\t1. 돌고래 수족관에 들어간다    2. 그물로 돌고래를 낚는다    3. 오징어 수족관으로 간다    4. 철 막대로 돌고래를 공격한다    5. 비상용 망치로 돌고래 수족관의 유리를 깬다    6. 오징어가 묶인 줄을 돌고래 수족관에 내린다\n");
				break;
			case 2:
				if (possrope == 0 && possstick == 0) printf("\t1. 돌고래 수족관에 들어간다    3. 오징어 수족관으로 간다    5. 비상용 망치로 돌고래 수족관의 유리를 깬다     7. 오징어가 들어있는 그물을 돌고래 수족관에 내린다\n");
				else if (possrope == 0) printf("\t1. 돌고래 수족관에 들어간다    3. 오징어 수족관으로 간다    4. 철 막대로 돌고래를 공격한다    5. 비상용 망치로 돌고래 수족관의 유리를 깬다     7. 오징어가 들어있는 그물을 돌고래 수족관에 내린다\n");
				else if (possstick == 0) printf("\t1. 돌고래 수족관에 들어간다    3. 오징어 수족관으로 간다    5. 비상용 망치로 돌고래 수족관의 유리를 깬다     7. 오징어가 들어있는 그물을 돌고래 수족관에 내린다\n");
				else printf("\t1. 돌고래 수족관에 들어간다    2. 그물로 돌고래를 낚는다    3. 오징어 수족관으로 간다    4. 철 막대로 돌고래를 공격한다    5. 비상용 망치로 돌고래 수족관의 유리를 깬다    7. 오징어가 들어있는 그물을 돌고래 수족관에 내린다\n");
				break;
			case 3:
				if (possrope == 0 && possnet == 0) printf("\t1. 돌고래 수족관에 들어간다    3. 오징어 수족관으로 간다    5. 비상용 망치로 돌고래 수족관의 유리를 깬다    8. 오징어가 끼워져있는 철 막대를 돌고래 수족관에 내린다\n");
				else if (possrope == 0) printf("\t1. 돌고래 수족관에 들어간다    2. 그물로 돌고래를 낚는다    3. 오징어 수족관으로 간다    5. 비상용 망치로 돌고래 수족관의 유리를 깬다    8. 오징어가 끼워져있는 철 막대를 돌고래 수족관에 내린다\n");
				else if (possnet == 0) printf("\t1. 돌고래 수족관에 들어간다    3. 오징어 수족관으로 간다    5. 비상용 망치로 돌고래 수족관의 유리를 깬다    8. 오징어가 끼워져있는 철 막대를 돌고래 수족관에 내린다\n");
				else printf("\t1. 돌고래 수족관에 들어간다    2. 그물로 돌고래를 낚는다    3. 오징어 수족관으로 간다    5. 비상용 망치로 돌고래 수족관의 유리를 깬다    8. 오징어가 끼워져있는 철 막대를 돌고래 수족관에 내린다\n");
				break;
				//printf("\t1. 돌고래 수족관에 들어간다    2. 그물로 돌고래를 낚는다    3. 오징어 수족관으로 간다    5. 비상용 망치로 돌고래 수족관의 유리를 깬다    8. 오징어가 끼워져있는 철 막대를 돌고래 수족관에 내린다\n");
			}
		}
		else printf("\t1. 돌고래 수족관에 들어간다    2. 그물로 돌고래를 낚는다    3. 오징어 수족관으로 간다    4.철 막대로 돌고래를 공격한다    5. 비상용 망치로 돌고래 수족관의 유리를 깬다\n");
		scanf("%d", &choice);
		switch (choice)
		{
		case 1:
			printf("돌고래 수족관에 들어갔다.\n");
			Pass(pos);
			printf("돌고래들은 계속 공을 튀기며 놀았다.\n");
			Pass(pos);
			printf("수영으로 공을 잡으려 해도 돌고래들이 너무 빨리 움직여서 잡을 수 없다.\n");
			Pass(pos);
			printf("그냥 수족관에서 나오려고 했다.\n");
			Pass(pos);
			setcolor(12);
			printf("잠시만...수족관에서 나가는 사다리가 없다.\n");
			Pass(pos);
			printf("물과 수족관 유리의 높이 차 때문에 수족관 윗 유리에 손이 닿지도 않는다.\n");
			Pass(pos);
			printf("조졌다.\n");
			Pass(pos);
			exit(0);
		case 2:
			if (useditem != 2 && possnet == 1)
			{
				printf("그물을 수족관에 던졌다.\n");
				Pass(pos);
				printf("돌고래들이 그물 쪽으로 오지 않는다.\n");
				Pass(pos);
				printf("다시 그물을 걷어올렸다.\n");
				Pass(pos);
			}
			else {
				printf("꼼수 부리지 마세요.\n");
				Pass(pos);
			}
			break;
		case 3:
			if (posscuttlefish == 0)
			{
				printf("오징어 수족관으로 갔다.\n");
				pos = 4;
				Pass(pos);
				system("cls");
				printf("\n\t무엇을 할까?\n");
				printf("\t1. 비상용 망치로 오징어 수족관 유리를 깬다    2. 철 막대로 오징어 수족관을 강타한다    3. 돌고래 수족관으로 돌아간다\n");
				scanf("%d", &choice);
				switch (choice)
				{
				case 1:
					printf("쩅그랑\n");
					Pass(pos);
					setcolor(12);
					printf("유리 파편이 튀어 손에 상처를 입었다.\n");
					Pass(pos);
					setcolor(7);
					printf("그렇게 큰 상처는 아니지만 피가 난다.\n");
					Pass(pos);
					printf("오징어 수족관 유리가 깨졌다.\n");
					Pass(pos);
					printf("오징어 수족관에서 물이 빠졌다.\n");
					Pass(pos);
					printf("몇 오징어들도 물과 같이 나왔다.\n");
					Pass(pos);
					system("cls");
					printf("\n\t무엇을 할까?\n");
					if (possrope == 1 && possnet == 1 && possstick) printf("\t1. 밧줄로 오징어를 묶는다    2. 그물에 오징어를 넣는다    3. 철 막대에 오징어를 끼운다\n");
					else if (possrope == 1 && possnet == 1) printf("\t1. 밧줄로 오징어를 묶는다    2. 그물에 오징어를 넣는다\n");
					else if (possrope == 1 && possstick == 1) printf("\t1. 밧줄로 오징어를 묶는다    3. 철 막대에 오징어를 끼운다\n");
					else if (possnet == 1 && possstick == 1) printf("\t2. 그물에 오징어를 넣는다    3. 철 막대에 오징어를 끼운다\n");
					else if (possrope == 1) printf("\t1. 밧줄로 오징어를 묶는다.\n");
					else if (possnet == 1) printf("\t2. 그물에 오징어를 넣는다.\n");
					else if (possstick == 1) printf("\t2. 철 막대에 오징어를 끼운다.\n");
					else
					{
						printf("\t잘못 입력하셨거나 오징어를 가져갈 수단이 없습니다.\n");
						break;
					}
					scanf("%d", &choice);
					switch (choice)
					{
					case 1:
						if (useditem != 1 && possrope == 1)
						{
							printf("밧줄에 몇 오징어를 묶었다.\n");
							posscuttlefish = 1;
							useditem = 1;
							Pass(pos);
							printf("돌고래 수족관으로 돌아가자.\n");
							Pass(pos);
						}
						else {
							printf("꼼수 부리지 마세요.\n");
							Pass(pos);
						}
						break;
					case 2:
						if (useditem != 2 && possnet == 1)
						{
							printf("그물에 몇 오징어를 넣었다.\n");
							posscuttlefish = 1;
							useditem = 2;
							Pass(pos);
							printf("돌고래 수족관으로 돌아가자.\n");
							Pass(pos);
						}
						else {
							printf("꼼수 부리지 마세요.\n");
							Pass(pos);
						}
						break;
					case 3:
						if (useditem != 3 && possstick == 1)
						{
							printf("철 막대에 몇 오징어를 끼워넣었다.\n");
							posscuttlefish = 1;
							useditem = 3;
							Pass(pos);
							printf("돌고래 수족관으로 돌아가자.\n");
							Pass(pos);
						}
						else {
							printf("꼼수 부리지 마세요.\n");
							Pass(pos);
						}
						break;
					default:
						printf("잘못 입력하셨습니다\n");
					}
					break;
				case 2:
					if (useditem != 3 && possstick == 1)
					{
						printf("쩅그랑\n");
						Pass(pos);
						setcolor(12);
						printf("유리 파편이 튀어 손에 상처를 입었다.\n");
						Pass(pos);
						setcolor(7);
						printf("그렇게 큰 상처는 아니지만 피가 난다.\n");
						Pass(pos);
						printf("오징어 수족관 유리가 깨졌다.\n");
						Pass(pos);
						printf("오징어 수족관에서 물이 빠졌다.\n");
						Pass(pos);
						printf("몇 오징어들도 물과 같이 나왔다.\n");
						Pass(pos);
						system("cls");
						printf("\n\t무엇을 할까?\n");
						if (possrope == 1 && possnet == 1 && possstick) printf("\t1. 밧줄로 오징어를 묶는다    2. 그물에 오징어를 넣는다    3. 철 막대에 오징어를 끼운다\n");
						else if (possrope == 1 && possnet == 1) printf("\t1. 밧줄로 오징어를 묶는다    2. 그물에 오징어를 넣는다\n");
						else if (possrope == 1 && possstick == 1) printf("\t1. 밧줄로 오징어를 묶는다    3. 철 막대에 오징어를 끼운다\n");
						else if (possnet == 1 && possstick == 1) printf("\t2. 그물에 오징어를 넣는다    3. 철 막대에 오징어를 끼운다\n");
						else if (possrope == 1) printf("\t1. 밧줄로 오징어를 묶는다.\n");
						else if (possnet == 1) printf("\t2. 그물에 오징어를 넣는다.\n");
						else if (possstick == 1) printf("\t2. 철 막대에 오징어를 끼운다.\n");
						else
						{
							printf("\t잘못 입력하셨거나 오징어를 가져갈 수단이 없습니다.\n");
							break;
						}
						scanf("%d", &choice);
						switch (choice)
						{
						case 1:
							if (useditem != 1 && possrope == 1)
							{
								printf("밧줄에 몇 오징어를 묶었다.\n");
								posscuttlefish = 1;
								useditem = 1;
								Pass(pos);
								printf("돌고래 수족관으로 돌아가자.\n");
								Pass(pos);
							}
							else {
								printf("꼼수 부리지 마세요.\n");
								Pass(pos);
							}
							break;
						case 2:
							if (useditem != 2 && possnet == 1)
							{
								printf("그물에 몇 오징어를 넣었다.\n");
								posscuttlefish = 1;
								useditem = 2;
								Pass(pos);
								printf("돌고래 수족관으로 돌아가자.\n");
								Pass(pos);
							}
							else {
								printf("꼼수 부리지 마세요.\n");
								Pass(pos);
							}
							break;
						case 3:
							if (useditem != 3 && possstick == 1)
							{
								printf("철 막대에 몇 오징어를 끼워넣었다.\n");
								posscuttlefish = 1;
								useditem = 3;
								Pass(pos);
								printf("돌고래 수족관으로 돌아가자.\n");
								Pass(pos);
							}
							else {
								printf("꼼수 부리지 마세요.\n");
								Pass(pos);
							}
							break;
						default:
							printf("잘못 입력하셨습니다\n");
						}
					}
					else {
						printf("꼼수 부리지 마세요.\n");
						Pass(pos);
					}
					break;
				}
			}
			else {
				printf("꼼수 부리지 마세요.\n");
				Pass(pos);
			}
			break;
		case 4:
			if (useditem != 3 && possstick == 1)
			{
				printf("철 막대로 돌고래를 공격했다.\n");
				Pass(pos);
				printf("돌고래는 철 막대에 찔려 상처를 입고 피를 흘렸다.\n");
				Pass(pos);
				printf("돌고래들의 눈빛이 변했다.\n");
				Pass(pos);
				printf("돌고래들은 공을 수족관 바닥 구석으로 가져가서 교대로 공을 눌러 공이 위로 올라오지 않게 했다.\n");
				Pass(pos);
				setcolor(12);
				printf("조졌다.\n");
				Pass(pos);
				exit(0);
			}
			else {
				printf("꼼수 부리지 마세요.\n");
				Pass(pos);
			}
			break;
		case 5:
			printf("비상용 망치로 수족관 유리를 강타했다.\n");
			Pass(pos);
			printf("수족관의 유리에서는 쾅 소리만 날 뿐 금도 가지 않았다.\n");
			Pass(pos);
			setcolor(12);
			printf("돌고래들의 눈빛이 변했다.\n");
			Pass(pos);
			printf("돌고래들은 공을 수족관 바닥 구석으로 가져가서 교대로 공을 눌러 공이 위로 올라오지 않게 했다.\n");
			Pass(pos);
			printf("조졌다.\n");
			Pass(pos);
			exit(0);
		case 6:
			if (useditem == 1)
			{
				printf("오징어들이 묶인 줄을 돌고래 수족관에 내렸다.\n");
				Pass(pos);
				printf("돌고래들이 오징어에 관심을 보였다.\n");
				Pass(pos);
				printf("돌고래들이 비치볼을 튕기면서 오징어가 묶인 줄 쪽으로 왔다.\n");
				Pass(pos);
				printf("돌고래들은 줄 쪽으로 온 뒤 비치볼을 옆에 두고 오징어를 먹기 시작했다.\n");
				Pass(pos);
				system("cls");
				printf("\n\t어떻게 할까?\n");
				if (possnet == 1 && possstick == 1) printf("\t1. 그물로 돌고래를 낚는다    2. 철 막대로 비치볼을 물에서 끌어낸다    3. 철 막대에 그물을 묶는다    4. 그물로 비치볼을 낚는다\n");
				else if (possnet == 1) printf("\t1. 그물로 돌고래를 낚는다    4. 그물로 비치볼을 낚는다\n");
				else if (possstick == 1) printf("\t2. 철 막대로 비치볼을 물에서 끌어낸다    3. 철 막대에 그물을 묶는다\n");
				else printf("\t5. 물 속으로 들어가 비치볼을 가지고 온다\n");
				scanf("%d", &choice);
				switch (choice)
				{
				case 1:
					printf("한 돌고래가 그물에 들어갔다.\n");
					Pass(pos);
					printf("그 돌고래가 그물에 갇히자 다른 돌고래들이 그물을 찢어 그 돌고래가 그물에서 나오게 했다.\n");
					Pass(pos);
					printf("그물은 찢겨 더는 못 사용할 것 같다.\n");
					possnet = 0;
					Pass(pos);
					break;
				case 2:
					printf("철 막대로 비치볼을 물에서 끌어내리려 했지만 손이 미끄러져 철 막대를 떨어뜨리고 말았다.\n");
					possstick = 0;
					Pass(pos);
					break;
				case 3:
					printf("철 막대에 그물을 묶었다.\n");
					Pass(pos);
					printf("이거라면 멀리 있는 것도 낚을 수 있을 것 같다.\n");
					Pass(pos);
					system("cls");
					printf("\n\t어떻게 할까?\n");
					printf("\t1. 철 막대기에 묶인 그물로 돌고래를 낚는다    2. 철 막대기에 묶인 그물로 비치볼을 낚는다\n");
					scanf("%d", &choice);
					switch (choice)
					{
					case 1:
						printf("그물 안에 돌고래가 들어갔다.\n");
						Pass(pos);
						setcolor(12);
						printf("돌고래가 난동피우기를 시전했다.\n");
						Pass(pos);
						printf("돌고래는 이리저리 움직이며 그물을 당겼다.\n");
						Pass(pos);
						printf("그물이 당겨지자 그물을 잡고있던 나는 물 속으로 빠져버렸다.\n");
						Pass(pos);
						printf("난 너무 놀라 당장 수족관에서 나오려고 했다.\n");
						Pass(pos);
						printf("그런데 수족관에서 나가는 사다리가 없었다.\n");
						Pass(pos);
						printf("조졌다.\n");
						Pass(pos);
						exit(0);
					case 2:
						printf("철 막대기에 묶은 그물로 비치볼을 낚았다.\n");
						Pass(pos);
						printf("다행히 돌고래들은 여전히 오징어를 먹고 있었다.\n");
						Pass(pos);
						printf("비치볼을 끌어올리고 수족관 사다리에서 내려왔다.\n");
						end = 1;
						Pass(pos);
						break;
					default:
						printf("잘못 입력하셨습니다.\n");
						Pass(pos);
					}
					break;
				case 4:
					printf("그물로 비치볼을 낚으려 했지만 비치볼이 너무 멀리 있어 닿지 않았다.\n");
					Pass(pos);
					break;
				case 5:
					printf("풍덩\n");
					Pass(pos);
					printf("물 속으로 들어갔다.\n");
					Pass(pos);
					printf("수영을 해서 비치볼을 잡았다.\n");
					Pass(pos);
					setcolor(12);
					printf("다시 올라가려 했지만 위로 올라가는 사다리가 없다.\n");
					Pass(pos);
					printf("조졌다.\n");
					Pass(pos);
					exit(0);
				default:
					printf("잘못 입력하셨습니다.\n");
					Pass(pos);
				}
			}
			else {
				printf("꼼수 부리지 마세요.\n");
				Pass(pos);
			}
			Pass(pos);
			break;
		case 7:
			if (useditem == 2)
			{
				printf("오징어들이 들어간 그물을 돌고래 수족관에 내렸다.\n");
				Pass(pos);
				printf("돌고래들이 오징어에 관심을 보였다.\n");
				Pass(pos);
				printf("돌고래들은 비치볼을 튀기면서 온 다음 비치볼을 옆에 두고 오징어를 먹기 시작했다.\n");
				Pass(pos);
				system("cls");
				printf("\n\t어떻게 할까?\n");
				printf("\t1. 물에 들어가 비치볼을 가지고 온다    2. 돌고래가 그물에 갇힐 때까지 기다린다\n");
				scanf("%d", &choice);
				switch (choice)
				{
				case 1:
					printf("물에 들어가자마자 한 돌고래가 내가 물 속으로 들어온 것을 알아차리고 공을 저 멀리로 가져갔다.\n");
					Pass(pos);
					printf("돌고래를 따라갈 수는 없어 물 밖으로 나가려 했다.\n");
					Pass(pos);
					setcolor(12);
					printf("그런데 갑자기 다리에 쥐가 나면서 다리가 움직여지지 않았다.\n");
					Pass(pos);
					printf("조졌다.\n");
					Pass(pos);
					exit(0);
				case 2:
					printf("돌고래가 그물에 갇힐 때까지 기다렸다.\n");
					Pass(pos);
					printf("돌고래가 그물에 갇히자 튀어오르기를 시전했다.\n");
					Pass(pos);
					printf("그 반동으로 그물을 잡고 있던 나는 물 속으로 빠져버렸다.\n");
					Pass(pos);
					printf("순식간에 일어난 일이라 반응할 수 없었다.\n");
					Pass(pos);
					printf("물에 빠진 나는 물에서 나가려고 하였다.\n");
					Pass(pos);
					printf("그런데 위로 올라가는 사다리가 없다.\n");
					Pass(pos);
					printf("수족관 위까지는 2미터 쯤 되어 전혀 손이 닿지 않는다.\n");
					Pass(pos);
					printf("조졌다.\n");
					Pass(pos);
					exit(0);
				}
			}
			else {
				printf("꼼수 부리지 마세요.\n");
				Pass(pos);
			}
			break;
		case 8:
			if (useditem == 3)
			{
				printf("오징어들이 끼워진 철 막대를 돌고래 수족관에 내렸다.\n");
				Pass(pos);
				printf("돌고래들이 오징어에 관심을 보였다.\n");
				Pass(pos);
				printf("갑자기 돌고래들이 철 막대로 오더니 철 막대를 물고 가버렸다.\n");
				Pass(pos);
				printf("다행히 나는 철 막대를 놓아 물에 빠지지는 않았다.\n");
				Pass(pos);
			}
			else {
				printf("꼼수 부리지 마세요.\n");
				Pass(pos);
			}
			break;
		default:
			printf("잘못 입력하셨습니다\n");
			Pass(pos);
		}
		if (end == 1) break;
	}
	setcolor(7);
		printf("수족관 사다리에서 내려왔다.\n");
		Pass(pos);
		printf("하아...지친다..빨리 이곳에서 나가고 싶다.\n");
		Pass(pos);
		printf("비치볼을 터트려보니 내가 가지고 있던 육각기둥과 같지만 색갈만 다른 육각기둥이 있었다.\n");
		Pass(pos);
		printf("육각기둥을 챙기고 다시 나아갔다.\n");
		Pass(pos);
		printf("앞으로 가니 꽤 큰 수족관 2개가 연달아 나왔다.\n");
		pos = 6;
		Pass(pos);
		system("cls");
		setcolor(2);
		printf("\n\t어느 수족관을 먼저 갈까?\n");
		printf("\t1. 앞에 있는 수족관을 먼저 가자    2. 뒤에 있는 수족관을 먼저 가자\n");
		scanf("%d", &choice);
		printf("그냥 앞에 있는 수족관을 먼저 가자.\n");
		system("cls");
		setcolor(7);
		Pass(pos);
		printf("앞에 있는 수족관으로 가서 안을 보았다.\n");
		Pass(pos);
		printf("수족관 바닥에 금고 비슷한 것이 있었다.\n");
		Pass(pos);
		printf("너무 멀리 있어서 정확히 무엇인지는 볼 수 없다.\n");
		Pass(pos);
		setcolor(2);
		system("cls");
		printf("\n\t어떻게 할까?\n");
		printf("\t1. 수족관 안으로 들어가 무엇인지 본다    2. 또 뭐 함정이나 있겠지, 가지 말자\n");
		scanf("%d", &choice);
		switch (choice)
		{
		case 1:
			printf("한번 가보자.\n");
			Pass(pos);
			break;
		case 2:
			printf("그냥 뒤에 있는 수족관이나 가보자.\n");
			Pass(pos);
			printf("뻥이다. 앞에 있는 수족관의 안에 있는게 뭔지 너무 궁금하다.\n");
			Pass(pos);
			printf("한번 가보자.\n");
			Pass(pos);
			break;
		default:
			printf("잘못 입력하셨습니다.\n");
			Pass(pos);
		}
		system("cls");
		printf("수족관의 사다리로 올라가 보니 여기에는 수족관에서 위로 올라오는 사다리가 있다.\n");
		Pass(pos);
		printf("들어가보자.\n");
		Pass(pos);
		printf("수족관이 꽤나 깊다.\n");
		Pass(pos);
		printf("수족관의 바닥까지 가보니 금고와 암호판이 있다.\n");
		Pass(pos);
		printf("암호판에는 □ + □ / □ - □ x □ = 12 라고 적혀있다\n");   //  3  5  1  8  9    // 5 8 1 9 3  = 12
		Pass(pos);
		printf("5개의 숫자라..내가 아까 본 숫자들을 생각해보자.\n");
		Pass(pos);
		printf("숨이 막힌다.\n");
		Pass(pos);
		printf("빨리 이 암호를 맞추고 올라가자.\n");
		Pass(pos);
		setcolor(10);
		while (1)
		{
			static int opportunity = 3;
			printf("\n\n\t\t□ + □ / □ - □ x □ = 12 \n");
			printf("\t\t12345 형태로 입력\n");
			printf("\t\t남은 기회 %d번\n\t\t", opportunity);
			scanf("%d", &choice);
			if (choice == 58193)
			{
				break;
			}
			else printf("틀렸다.");
			opportunity--;
			if (opportunity == 0)
			{
				setcolor(12);
				printf("\t\t\t\t\t익사\n");
				Pass(pos);
				exit(0);
			}
		}
		setcolor(7);
		system("cls");
		printf("암호를 맞췄다.\n");
		Pass(pos);
		printf("금고 안에는 나침밤이 있다.\n");
		Pass(pos);
		printf("신기하게 생긴 나침반이다. 파란색 보석들로 장식이 되어있다.\n");
		Pass(pos);
		printf("빨리 물 위로 올라가자.\n");
		Pass(pos);
		printf("나침반을 가지고 수족관에서 나왔다.\n");
		Pass(pos);
		printf("조금만 쉬다 가자..\n");
		Sleep(3000);
		printf("자다가 일어났다.\n");
		Pass(pos);
		printf("다시 출발하자.\n");
		Pass(pos);
		printf("집가고 싶다.\n");
		Pass(pos);
		system("cls");
		printf("뒤에 있던 수족관으로 갔다.\n");
		pos = 7;
		Pass(pos);
		printf("이 수족관에는 상어들이 있었다.\n");
		Pass(pos);
		printf("한 두 마리도 아니고 여섯 마리 쯤 되는 듯하다.\n");
		Pass(pos);
		printf("상어 수족관 옆의 길은 어떤 벽으로 막혀있다.\n");
		Pass(pos);
		printf("상어 수족관에서 뭔가를 해서 옆으로 가는 길을 열어야 할 것 같다.\n");
		Pass(pos);
		system("cls");
		printf("일단 상어 수족관을 살펴보자.\n");
		Pass(pos);
		printf("레버는 수족관 바닥이 아닌 내 기준에서 반대쪽 유리창 중간 부분이 달려 있다.\n");
		Pass(pos);
		printf("상어들은 2 ~ 3미터는 되어 보인다.\n");
		Pass(pos);
		printf("내가 수족관에 들어간다면 날 공격할 것 같다.\n");
		Pass(pos);
		printf("수족관 앞에는 카누 한 대, 보트 한 대, 죽창 한 개, 엽총 한 개가 있다.\n");
		Pass(pos);
		printf("배 하나와 무기를 각각 하나 씩 가져갈 수 있다.\n");
		Pass(pos);
		system("cls");
		setcolor(2);
		system("cls");
		printf("\n\t어떻게 할까?\n");
		printf("\t1. 보트와 죽창을 가져간다   2. 보트와 엽총을 가져간다   3. 카누와 죽창을 가져간다   4. 카누와 엽총을 가져간다\n");
		_rand = rand() % 100 + 1;
		scanf("%d", &choice);
		switch(choice)
		{
		case 1:
			printf("보트와 죽창을 가져왔다.\n");
			ichoice = 1;
			Pass(pos);
			break;
		case 2:
			printf("보트와 엽총을 가져왔다.\n");
			ichoice = 2;
			Pass(pos);
			break;
		case 3:
			printf("카누와 죽창을 가져왔다.\n");
			ichoice = 3;
			Pass(pos);
			break;
		case 4:
			printf("카누와 엽총을 가져왔다.\n");
			ichoice = 4;
			Pass(pos);
			break;
		default:
			printf("잘못 입력하셨습니다.\n");
			Pass(pos);
		}
		setcolor(3);

		switch (ichoice)
		{
		case 1:
			printf("상어 수족관에 보트를 뛰우고 죽창을 들고 올라갔다.\n");
			Pass(pos);
			printf("보트의 모터를 키고 달리기 시작하니 상어들이 보트 쪽으로 오기 시작했다.\n");
			Pass(pos);
			setcolor(12);
			printf("한 상어가 달려들어 나를 물려고 하였다.\n");
			Pass(pos);
			printf("그 상어를 죽창으로 찍었더니 그 상어는 상처를 입고 도망갔다.\n");
			Pass(pos);
			printf("물 속으로 상어의 피가 퍼지니 멀리 있던 상어들까지 보트로 오기 시작했다\n");
			Pass(pos);
			printf("갑자기 5미터 쯤 되보이는 큰 상어가 보트의 모터 부분을 씹어먹고 갔다.\n");
			setcolor(3);
			Pass(pos);
			printf("다행히 배는 가라앉지 않았지만 더 이상 앞으로 움직이지 못한다.\n");
			Pass(pos);
			printf("그리고 여전히 주변에는 많은 상어들이 보인다.\n");
			Pass(pos);
			system("cls");
			printf("\n\t어떻게 할까?\n");
			printf("\t1. 배에서 내려 헤엄쳐 간다   2. 보트 안을 수색한다   3. 일단 기다린다\n");
			scanf("%d", &choice);
			switch (choice)
			{
			case 1:
				printf("배에서 내리고 물로 들어갔다.\n");
				Pass(pos);
				printf("다행히 상어들은 나보다는 보트에 관심을 가진다.\n");
				Pass(pos);
				setcolor(12);
				printf("뭐지..오른손이 쓰라리다.\n");
				Pass(pos);
				printf("오른손에는 피가 흐르고 있었다.\n");
				Pass(pos);
				printf("오징어 수족관의 유리를 깼을 때 생긴 상처였다.\n");
				Pass(pos);
				printf("상어들이 순식간에 나에게 왔다.\n");
				Pass(pos);
				printf("조졌다.\n");
				Pass(pos);
				exit(0);
			case 2:
				printf("보트 안을 수색했더니 포탈건을 발견했다.\n");
				Pass(pos);
				printf("보트 바닥에 파란색 포탈을 쏘았다.\n");
				Pass(pos);
				printf("레버에 주황색 포탈을 쏘았다.\n");
				Pass(pos);
				printf("포탈에 손을 넣어 레버를 당겼다.\n");
				Pass(pos);
				printf("뒤의 막혀있던 벽이 열렸다.\n");
				Pass(pos);
				printf("포탈건으로 열린 벽 앞에 주황색 포탈을 쏘고 파란색 포탈로 들어가서 수족관에서 나왔다.\n");
				Pass(pos);
				printf("포탈건에 물이 약간 들어갔는지 지지지인직 거린다.\n");
				Pass(pos);
				printf("다시 사용할 수는 없는 것 같다.\n");
				Pass(pos);
				break;
			case 3:
				printf("일단은 기다리면서 어떻게 할지 생각하고 있었다.\n");
				Pass(pos);
				setcolor(12);
				printf("갑자기 아까 보트의 모터 부분을 씹어먹었던 그 상어가 배의 중심부분을 물었다.\n");
				Pass(pos);
				printf("보트는 바로 부서져 버리고 나는 물에 빠졌다.\n");
				Pass(pos);
				printf("다행히 상어들은 나보다는 보트에 관심을 가진다.\n");
				Pass(pos);
				printf("뭐지..오른손이 쓰라리다.\n");
				Pass(pos);
				printf("오른손에는 피가 흐르고 있었다.\n");
				Pass(pos);
				printf("오징어 수족관의 유리를 깼을 때 생긴 상처였다.\n");
				Pass(pos);
				printf("상어들이 순식간에 나에게 왔다.\n");
				Pass(pos);
				printf("조졌다.\n");
				Pass(pos);
				exit(0);
			case 4:
				printf("잘못 입력하셨습니다.\n");
				Pass(pos);
			}
			Pass(pos);
			break;
		case 2:
			printf("\n\t보트를 타고 가기 전에 엽총으로 레버를 쏴볼까?\n");
			printf("\t1. 쏜다    2. 안 쏜다\n");
			scanf("%d", &choice);
			printf("펑\n");
			Pass(pos);
			if (choice == 1)
			{
				if (_rand + 1 <= 20)
				{
					printf("총에 의해 레버가 당겨졌다\n");
					Pass(pos);
					printf("막혀있던 벽이 열렸다.\n");
					Pass(pos);
				}
				else if (_rand >= 30 && _rand <= 50)
				{
					setcolor(12);
					printf("레버가 총에 맞고 망가졌다.\n");
					Pass(pos);
					printf("조졌다.\n");
					Pass(pos);
					exit(0);
				}
				else {
					printf("총알이 빗나갔다.\n");
					Pass(pos);
				}
			}
			system("cls");
			printf("그냥 가자.\n");
			Pass(pos);
			printf("상어 수족관에 보트를 뛰우고 엽총을 들고 올라갔다.\n");
			Pass(pos);
			printf("상어들이 보트 주변으로 모여들었다.\n");
			Pass(pos);
			printf("엽총으로 물 주변에 총을 쏘니 상어들이 소음에 놀라 도망갔다.\n");
			Pass(pos);
			printf("순조롭게 이루어지나 했더니 보트의 연료가 다 달았다.\n");
			Pass(pos);
			printf("수족관의 중간 쯤에서 멈춘 것이라 앞으로 갈수도 뒤로 돌아갈 수도 없다.\n");
			Pass(pos);
			printf("상어들은 또 보트에 점점 다가오고 있다.\n");
			Pass(pos);
			printf("총알도 6발 밖에 남지 않아 막 사용할 순 없다.\n");
			Pass(pos);
			system("cls");
			printf("\n\t어떻게 할까?\n");
			printf("\t1. 남은 총알 6발을 전부 레버에 쏜다    2. 남은 총알로 상어들을 잡는다\n");
			scanf("%d", &choice);
			switch (choice)
			{
			case 1:
				for (int i = 0; i < 6; i++)
				{
					printf("%d번째 총알", i);
					if (_rand <= 20)
					{
						printf("총에 의해 레버가 당겨졌다\n");
						Pass(pos);
						printf("막혀있던 벽이 열렸다.\n");
						Pass(pos);
					}
					else if (_rand >= 30 && _rand <= 55)
					{
						setcolor(12);
						printf("레버가 총에 맞고 망가졌다.\n");
						Pass(pos);
						printf("조졌다.\n");
						Pass(pos);
						exit(0);
					}
					else {
						printf("총알이 빗나갔다.\n");
						Pass(pos);
					}
				}
				break;
			case 2:
				printf("상어들이 보트를 물으려 달려들 떄마다 총을 쐈다.\n");
				Pass(pos);
				printf("하지만 잡은 상어는 오직 1마리이다.\n");
				Pass(pos);
				printf("총알을 다 사용했다.\n");
				Pass(pos);
				printf("상어들이 달려들어 보트를 물었다.\n");
				Pass(pos);
				printf("결국 보트는 부서지고 나는 물에 빠지게 됬다.\n");
				Pass(pos);
				printf("뭐지..오른손이 쓰라리다.\n");
				Pass(pos);
				printf("오른손에는 피가 흐르고 있었다.\n");
				Pass(pos);
				printf("오징어 수족관의 유리를 깼을 때 생긴 상처였다.\n");
				Pass(pos);
				printf("상어들이 순식간에 나에게 왔다.\n");
				Pass(pos);
				printf("조졌다.\n");
				Pass(pos);
				exit(0);
			default:
				printf("잘못 입력하셨습니다.\n");
				Pass(pos);
			}
			break;
		case 3:
			printf("상어 수족관에 카누를 뛰우고 죽창을 들고 올라갔다.\n");
			Pass(pos);
			printf("카누에 타자마자 두 노로 빠르게 노를 저어 순식간에 레버가 있는 지점에 도착했다.\n");
			Pass(pos);
			printf("내가 레버를 당기고 있을 때 상어가 카누의 노 하나를 물어갔다.\n");
			Pass(pos);
			printf("노 하나로 노를 젓고 있는데 한 노로만 하니 배가 제자리에서 돈다.\n");
			Pass(pos);
			system("cls");
			printf("\n\t어떻게 할까?\n");
			printf("\t1. 상어는 자기보다 큰 것을 공격하지 않는다고 했다, 옷을 벗고 물에 들어가서 옷을 흔들어댄다    2. 죽창으로 상어들을 참교육한다\n\t");
			scanf("%d", &choice);
			switch (choice)
			{
			case 1:
				printf("옷을 벗고 물에 들어가서 옷을 흔들어댔다.\n");
				Pass(pos);
				printf("상어가 나에게 오지 않는듯 했다.\n");
				Pass(pos);
				printf("갑자기 5미터 쯤 되는 큰 상어가 헤엄쳐왔다.\n");
				Pass(pos);
				setcolor(12);
				printf("조졌다.\n");
				Pass(pos);
				exit(0);
			case 2:
				printf("헤엄처오는 상어들을 죽창으로 찔렀다.\n");
				Pass(pos);
				printf("2마리의 상어를 잡았다.\n");
				Pass(pos);
				printf("상어들이 다른 전략을 쓰기 사용했다.\n");
				Pass(pos);
				printf("상어들이 카누 주변을 돌면서 한 마리씩 배의 밑을 밀쳤다.\n");
				Pass(pos);
				printf("배가 계속 흔들렸다. 곧 뒤집어질 것 같다.\n");
				Pass(pos);
				printf("결국 배가 뒤집어지고 물에 빠졌다.\n");
				Pass(pos);
				printf("아둥바둥 배 위로 겨우 올라왔다. 다시 뒤집힐 것 같다.\n");
				Pass(pos);
				printf("배 속에 있던 배터리가 방전되면서 상어들이 감전되었다.\n");
				Pass(pos);
				setcolor(14);
				printf("지인직지직\n");
				setcolor(3);
				Pass(pos);
				printf("모든 상어들이 죽었다.\n");
				Pass(pos);
				printf("레버로 헤엄쳐가서 당기고 물에서 나왔다.\n");
				Pass(pos);
				printf("막혀있던 벽이 열렸다.\n");
				Pass(pos);
				break;
			}
			break;
		case 4:
			printf("상어 수족관에 카누를 뛰우고 엽총을 들고 올라갔다.\n");
			Pass(pos);
			printf("카누로 가고 있는데 갑자기 상어가 튀어나왔다.\n");
			Pass(pos);
			printf("깜짝 놀라서 엽총을 쐈는데 카누 바닥에 쏴 버렸다.\n");
			Pass(pos);
			printf("카누 바닥에서 물이 들어온다.\n");
			Pass(pos);
			setcolor(12);
			printf("조진것 같다.\n");
			Pass(pos);
			system("cls");
			printf("\n\t어떻게 할까?\n");
			printf("\t1. 손으로 배에 난 구멍을 막는다    2. 엽총으로 배에 난 구멍을 막는다    3. 기도한다\n");
			scanf("%d", &choice);
			switch (choice)
			{
			case 1:
				printf("배에난 구멍을 손으로 막았다.\n");
				Pass(pos);
				printf("상어들은 배에 구멍이 났다는 걸 알아차린 것 같다.\n");
				Pass(pos);
				printf("상어들이 배의 바닥을 쳐 구멍을 내었다.\n");
				Pass(pos);
				printf("더 많은 물이 배로 들어오기 시작했다.\n");
				Pass(pos);
				printf("결국 배가 가라앉았다.\n");
				Pass(pos);
				printf("상어들이 온다.\n");
				Pass(pos);
				printf("조졌다.\n");
				Pass(pos);
				exit(0);
			case 2:
				printf("엽총의 총구를 구멍에 끼웠다.\n");
				Pass(pos);
				printf("더 이상 물이 새지 않는다.\n");
				Pass(pos);
				printf("엽총을 구멍에 끼워넣은 상태에서는 총을 쏠 수 없다.\n");
				Pass(pos);
				printf("상어들은 배를 계속 공격헀다.\n");
				Pass(pos);
				system("cls");
				printf("\n\t어떻게 할까?\n");
				Pass(pos);
				printf("\t1. 엽총을 구멍에서 빼 상어들을 쏜다    2. 뻐긴다\n");
				scanf("%d", &choice);
				switch (choice)
				{
				case 1:
					printf("엽총을 구멍에서 빼 상어들을 쐈다.\n");
					Pass(pos);
					printf("상어들이 여러 방향에서 와서 이리저리 총을 쏘다 또 배에 쏴 버렸다.\n");
					Pass(pos);
					printf("더 많은 물이 샌다.\n");
					Pass(pos);
					printf("결국 배가 가라앉고 물에 빠졌다.\n");
					Pass(pos);
					printf("그들이 온다.\n");
					Pass(pos);
					printf("조졌다.\n");
					Pass(pos);
					exit(0);
				case 2:
					printf("엽총을 계속 구멍에 끼워놓은 체 뻐겼다.\n");
					Pass(pos);
					printf("갑자기 어떤 상어가 배에 돌진했다.\n");
					Pass(pos);
					printf("배가 뒤집어지고 물에 빠졌다.\n");
					Pass(pos);
					printf("상어들이 온다.\n");
					Pass(pos);
					printf("조졌다\n");
					Pass(pos);
					exit(0);
				}
			case 3:
				printf("상어들을 무시하고 기도를 했다.\n");
				Pass(pos);
				printf("상어들이 보트를 공격하는 걸 멈췄다.\n");
				Pass(pos);
				printf("나는 재빨리 노를 저어 레버를 당겼다.\n");
				Pass(pos);
				printf("레버를 당기고 다시 돌아가는 중에 갑자기 상어들이 돌진해왔다.\n");
				Pass(pos);
				printf("순식간에 배가 부서지고 물에 빠졌다.\n");
				Pass(pos);
				printf("그들이 온다.\n");
				Pass(pos);
				printf("조졌다.\n");
				Pass(pos);
				exit(0);
			}
			Pass(pos);
			default:
			printf("잘못 입력하셨습니다.\n");
			Pass(pos);
		}
		setcolor(7);
		system("cls");
		printf("열린 벽을 통해 넘어갔다.\n");
		pos = 8;
		Pass(pos);
		printf("이곳에는 붙어있는 작은 수족관 4개와 따로 떨어진 수족관 한 개가 있다.\n");
		Pass(pos);
		printf("따로 떨어진 수족관에는 올라갈 수 있는 사다리가 있고 뒤쪽 내벽에는 철문이 보인다.\n");
		Pass(pos);
		printf("작은 수족관 4개에는 각각 다른 종류의 조개들이 있다.\n");
		Pass(pos);
		printf("각 수족관에는 숫자가 적혀있는데 1 수족관에는 가리비가 있고, 2 수족관에는 키조개, 3 수족관에는 홍합, 4 수족관에는 맛조개가 있다.\n");
		Pass(pos);
		printf("이 4개의 수족관 뒤 쪽에는 1부터 4까지의 숫자가 적힌 버튼 4개가 있다.\n");
		Pass(pos);
		printf("버튼 위에는 ");
		Pass(pos);
		setcolor(13);
		printf("껍질을 벌린 조개의 수가 가장 많은 것은? ");
		Pass(pos);
		setcolor(7);
		printf("이라고 쓰여져 있다.\n");
		Pass(pos);
		setcolor(2);
		printf("\n\t어떤 버튼을 눌를까?\n");
		printf("\t1. 1 버튼을 누른다    2. 2 버튼을 누른다    3. 3 버튼을 누른다    4. 4 버튼을 누른다\n");
		srand((unsigned int)time(NULL));
		int cor = 0;
		_rand = rand() % 100 + 1;
		if (_rand <= 0 && _rand <= 30) cor = 1;
		else if (_rand <= 31 && _rand <= 45) cor = 2;
		else if (_rand <= 46 && _rand <= 70) cor = 3;
		else if (_rand <= 71 && _rand <= 100) cor = 4;

		scanf("%d", &choice);
		
		if (cor == choice)
		{
			printf("삐빅\n");
			Pass(pos);
			printf("정답이다.\n");
			Pass(pos);
			printf("떨어져 있는 수족관의 내벽의 철문의 문이 열렸다.\n");
			Pass(pos);
			printf("가보자.\n");
			Pass(pos);
		}
		else {
			printf("삐비빅앙빅\n");
			Pass(pos);
			printf("Your father was....\n");
			Pass(pos);
			setcolor(12);
			printf("갑자기 버튼에 빨간 불이 들어오고 옆에서 화살이 날라왔다.\n");
			Pass(pos);
			printf("푹\n");
			Pass(pos);
			exit(0);
		}
		system("cls");
		setcolor(7);
		printf("사다리를 타고 올라가 떨어져 있던 수족관에 들어갔다.\n");
		pos = 9;
		Pass(pos);
		printf("철문 너머에는 엄청나게 큰 수족관이 보인다.\n");
		Pass(pos);
		printf("나침반은 철문의 너머를 가리키고 있다.\n");
		Pass(pos);
		printf("수족관 아래에는 유리로 창고가 있다.\n");
		Pass(pos);
		printf("유리 창고에는 잠수 장비와 폴 스피어가 보인다.\n");
		setcolor(14);
		printf("폴 스피어란 물고기를 잡을 때 사용하는 창으로 창 손잡이 부분에 큰 고무줄이 부착되어 있어 고무줄을 잡았다가 놓으면 창이 앞으로 나간다.\n");
		setcolor(7);
		Pass(pos);
		printf("유리 창고에서 잠수 장비를 꺼내 착용하고 폴 스피어를 들고 철문을 넘어갔다.\n");
		pos = 10;
		Pass(pos);
		printf("이 수족관은 굉장히 크고 철문 반대편은 멀어서 보이지 않는다.\n");
		Pass(pos);
		printf("수심은 굉장히 깊어 보인다.\n");
		Pass(pos);
		printf("나침반은 1시 방향 쪽을 가리키고 있지만 계속 바뀐다.\n");
		Pass(pos);
		setcolor(2);
		system("cls");
		printf("\n\t어떻게 할까?\n");
		printf("\t1.헤엄쳐서 철문 반대편으로 간다     2. 헤엄쳐서 수족관 아래로 내려간다\n");
		int whale = 0;
		int cramp = rand() % 4000;
		int enemy = rand() % 4;
		int seedoor = 0;
		whale = rand() % 5;
		scanf("%d", &choice);
		switch (choice)
		{
		case 1:
			system("cls");
			setcolor(11);
			printf("첨벙첨벙..\n");
			Pass(pos);
			Sleep(2000);
			switch (whale)
			{
			case 0:   // 고래 없음
				NOwhale:
				printf("계속 헤엄쳐 갔다..\n");
				Pass(pos);
				printf("갑자기 다리에 쥐가 났다.\n");
				Pass(pos);
				printf("다리를 마사지해보자.\n");
				Pass(pos);
				Sleep(cramp);
				printf("쥐가 풀리고 다시 헤엄치기를 시작하였다.\n");
				Pass(pos);
				printf("어느 정도 갔을 때 수족관 끝을 보았다.\n");
				Pass(pos);
				Sleep(1000);
				printf("수족관 끝에는 어떤 큰 원 모양의 문이 있었다.\n");
				seedoor = 1;
				Pass(pos);
				printf("그 문에는 육각기둥을 끼울 수 있는 홈이 3개가 있다.\n");
				Pass(pos);
				printf("육각기둥 한 개가 부족하다.\n");
				Pass(pos);
				printf("물 아래로 내려가야 할 것 같다.\n");
				Pass(pos);
				printf("나침반이 가르키는 곳으로 헤엄쳐서 갔다.\n");
				Pass(pos);
				printf("헤엄쳐 가고 있는데 뭔가 주변에 해파리가 점점 더 많아졌다.\n");
				Pass(pos);
				printf("잘은 모르겠지만 위험해 보인다.\n");
				Pass(pos);
				system("cls");
				setcolor(10);
				printf("\n\t어떻게 할까?\n");
				printf("\t1. 폴 스피어로 해파리들을 잡는다    2. 해파리들을 피하면서 나침반이 가르키는 곳으로 계속 간다\n");
				scanf("%d", &choice);
				switch (choice)
				{
				case 1:
					system("cls");
					printf("해파리들을 하나 하나 씩 잡았다.\n");
					Pass(pos);
					printf("그런데 해파리들은 흐물흐물해서 창에 꽂힌 체 빠지지 않았다.\n");
					Pass(pos);
					printf("해파리들이 거의 손잡이 부분까지 내려왔다.\n");
					Pass(pos);
					printf("폴 스피어를 흔들어도 해파리들은 빠지지 않는다.\n");
					Pass(pos);
					setcolor(14);
					printf("\n\t어떻게 할까?\n");
					printf("\t1. 폴 스피어를 버린다    2. 손으로 폴 스피어에 꽂힌 해파리들을 걷어낸다\n");
					scanf("%d", &choice);
					switch (choice)
					{
					case 1:
						printf("폴 스피어를 버리고 해파리들을 피해서 다시 출발했다.\n");
						Pass(pos);
						break;
					case 2:
						printf("손으로 해파리를 잡아 때려고 하였다.\n");
						Pass(pos);
						setcolor(12);
						printf("해파리를 손으로 잡자마자 해파리의 촉수가 손에 닿았다.\n");
						Pass(pos);
						printf("통증이 손에서부터 온몸으로 퍼지면서 호흡곤란이 왔다.\n");
						Pass(pos);
						printf("심장이 계속 쿵쾅쿵쾅 뛰었고 어지러워졌다.\n");
						Pass(pos);						
						printf("조졌다.\n");
						Pass(pos);
						exit(0); 
					}
				case 2:
					system("cls");
					printf("해파리를 피해서 나침반이 가리키는 곳으로 출발했다.\n");
					Pass(pos);
					printf("헤엄쳐 가던 도중 갑자기 바다 뱀이 나타났다.\n");
					Pass(pos);
					setcolor(13);
					printf("\n\t어떻게 할까?\n");
					printf("\t1. 폴 스피어로 바다 뱀의 머리를 찌른다    2. 폴 스피어로 뱀의 몸통을 찌른다\n");
					scanf("%d", &choice);
					switch (choice)
					{
					case 1:
						printf("바다 뱀이 폴 스피어를 피했다.\n");
						Pass(pos);
						printf("바다 뱀은 순식간에 내 손을 물었다.\n");
						Pass(pos);
						printf("통증이 퍼졌다.\n");
						Pass(pos);
						printf("난 경련을 일으키기 시작했고 점점 정신을 잃어갔다.\n");
						Pass(pos);
						setcolor(12);
						printf("조졌다.\n");
						Pass(pos);
						exit(0);
					case 2:
						printf("폴 스피어가 뱀의 몸통에 맞았다.\n");
						Pass(pos);
						printf("뱀은 쉬이익 소리를 내며 축 쳐졌다.\n");
						Pass(pos);
					}
					
				}
				break;
			case 1:  // 향유고래
				system("cls");
				printf("헤엄치고 있던 도중 옆에서 한 향유고래가 나타났다.\n");
				Pass(pos);
				printf("상처가 굉장히 많은 고래다. 몸집도 굉장히 크다.\n");
				Pass(pos);
				printf("날 공격하지는 않는다.\n");
				Pass(pos);
				printf("무섭게 보이지만 뭔가 친숙하다.\n");
				Pass(pos);
				printf("뭔가 향유고래가 자기를 따라오라고 하는 듯하다.\n");
				Pass(pos);
				printf("향유고래는 물 밑으로 들어갔다.\n");
				Pass(pos);
				setcolor(11);
				printf("\n\t어떻게 할까?\n");
				Pass(pos);
				printf("\t1. 항유고래를 따라 물 아래로 내려간다     2. 항유고래를 무시하고 계속 수면 위로 헤엄쳐 간다\n");
				scanf("%d", &choice);
				switch (choice)
				{
				case 1:
					printf("향유고래와 함께 물 아래로 내려갔다.\n");
					Pass(pos);
					printf("항유고래와 동행하자 다른 물고기들이 나를 피해갔다.\n");
					Pass(pos);
					printf("그렇게 계속 내려가던 도중..갑자기 무언가가 내 몸을 움겨잡았다.\n");
					Pass(pos);
					printf("빨판이 있는 큰 촉수였다.\n");
					Pass(pos);
					setcolor(12);
					printf("대왕오징어였다.\n");
					setcolor(11);
					Pass(pos);
					printf("대왕오징어는 나를 수족관 아래로 끌고 내려가려 하였다.\n");
					Pass(pos);
					printf("항유고래는 내가 대왕오징어에게 공격받고 있는 것을 보고 대왕오징어에게 돌진했다.\n");
					Pass(pos);
					printf("항유고래는 이빨로 대왕오징어의 촉수들을 잘랐다.\n");
					Pass(pos);
					printf("나를 잡고 있던 촉수도 잘렸다.\n");
					Pass(pos);
					printf("향유고래는 대왕오징어를 먹어치웠다.\n");
					Pass(pos);
					printf("그리고 묵묵히 다시 내려가기 시작했다.\n");
					Pass(pos);
					printf("항유고래는 나를 수족관 바닥까지 내려보내주고 어딘가로 사라졌다.\n");
					Pass(pos);
					break;
				case 2:
					printf("헤엄쳐 가던 도중 무언가가 내 발을 물었다.\n");
					Pass(pos);
					printf("발이 으스러지는 느낌이었다. 굉장히 아팠다.\n");
					Pass(pos);
					printf("내 발을 보니 곰치가 내 발을 물고 있었다.\n");
					Pass(pos);
					printf("곰치는 한 마리가 아니었다.\n");
					Pass(pos);
					printf("그 곰치는 내 발을 계속 물고 있었고 다른 세 마리의 곰치들은 나에게 달려들었다.\n");
					Pass(pos);
					setcolor(12);
					printf("물고기 밥이 되었다.\n");
					Pass(pos);
					exit(0);
				}
				break;
			case 2:  // 범고래
				system("cls");
				printf("헤엄치고 있던 도중 내 팔에 무언가 큰게 닿았다.\n");
				Pass(pos);
				printf("옆을 보니 범고래가 있었다.\n");
				Pass(pos);
				printf("나는 깜짝 놀랐다.\n");
				Pass(pos);
				printf("범고래가 사람을 공격한다는 말을 들은 적 있다.\n");
				Pass(pos);
				setcolor(11);
				printf("\n\t어떻게 할까?\n");
				printf("\t1. 범고래를 공격한다     2. 범고래를 공격하지 않는다\n");
				scanf("%d", &choice);
				switch (choice)
				{
				case 1:
					printf("범고래를 폴 스피어로 공격했다.\n");
					Pass(pos);
					printf("범고래는 폴 스피어에 찔려 피를 흘리며 도망갔다.\n");
					Pass(pos);
					printf("범고래가 도망간 줄 알았지만 범고래는 나에게 돌진해왔다.\n");
					Pass(pos);
					setcolor(12);
					printf("범고래에게 찢겼다.\n");
					Pass(pos);
					exit(0);
				case 2:
					printf("범고래는 나를 보는 듯 하더니 물 아래로 내려갔다.\n");
					Pass(pos);
					printf("이 범고래를 따라가 보자.\n");
					Pass(pos);
					printf("범고래와 같이 물 아래로 내려가던 도중 저 멀리서 전기뱀장어가 나타났다.\n");
					Pass(pos);
					printf("전기뱀장어는 점점 우리 쪽으로 왔다.\n");
					Pass(pos);
					printf("범고래는 전기뱀장어에게 달려들더니 한 입에 전기뱀장어를 삼켜버렸다.\n");
					Pass(pos);
					setcolor(14);
					printf("지지직\n");
					Pass(pos);
					setcolor(11);
					printf("감전되는 소리가 나면서 범고래의 입 쪽에서 빛이 났다.\n");
					Pass(pos);
					printf("소리가 멈추더니 범고래는 천천히 물로 가라앉았다.\n");
					Pass(pos);
					printf("나는 범고래의 희생에 애도를 표하고 홀로 물 아래로 내려갔다...\n");
					Pass(pos);
				}
				break;
			case 3:  // 귀신고래
				printf("헤엄치고 있던 도중 저 멀리서 수면 위로 물줄기가 솟아올았다.\n");
				Pass(pos);
				printf("물줄기가 솟아오른 곳으로 가보니 한 귀신고래가 있었다.\n");
				Pass(pos);
				printf("귀신고레는 물줄기를 몇 번 더 쏘더니 물 아래로 내려가기 시작했다.\n");
				Pass(pos);
				printf("이 귀신고래를 따라가 보자.\n");
				Pass(pos);
				printf("귀신고래는 수족관의 아래로 내려가서 새우들을 먹었다.\n");
				Pass(pos);
				printf("귀신고래는 또 숨을 쉬러 올라가릴레 나는 더 아래로 내려갔다.\n");
				Pass(pos);
				break;
			case 4:  // 밍크고래
				printf("헤엄쳐 가고 있던 도중 앞에 밍크고래가 보였다.\n");
				Pass(pos);
				setcolor(11);
				printf("\n\t어떻게 할까?\n");
				printf("\t1. 밍크고래의 위에 탄다    2. 밍크고래를 따라간다    3. 밍크고래를 무시하고 계속 위로 헤엄쳐 간다\n");
				scanf("%d", &choice);
				switch (choice)
				{
				case 1:
					printf("밍크고래의 위에 탔다.\n");
					Pass(pos);
					printf("밍크고래는 저항하지 않았다.\n");
					Pass(pos);
					printf("나를 태운 밍크고래는 수족관 아래로 가기 시작했다.\n");
					Pass(pos);
					printf("그렇게 내려가던 도중 귀상어를 만났다.\n");
					Pass(pos);
					printf("귀상어는 나를 보고 밍크고래를 보더니 그냥 가버렸다.\n");
					Pass(pos);
					printf("아마 귀상어는 밍크고래를 이길 수 없어 그냥 간 것 같다.\n");
					Pass(pos);
					break;
				case 2:
					printf("밍크고래의 뒤를 따라가면서 수족관 아래로 내려갔다.\n");
					Pass(pos);
					setcolor(12);
					printf("갑자기 귀상어가 나타나서 나를 물고 밍크고래로부터 멀리 떨어뜨려놓았다.\n");
					Pass(pos);
					printf("몇 마리의 상어가 더 왔다.\n");
					Pass(pos);
					printf("조졌다.\n");
					Pass(pos);
					exit(0);
				case 3:
					goto NOwhale;
				}
			}
			break;
		case 2:
			printf("수족관 아래로 내려가던 도중 한 바다 거북을 만났다.\n");
			Pass(pos);
			printf("꽤 큰 바다 거북인데 등딱지에는 파란색으로 가오리가 그려져 있었다.\n");
			Pass(pos);
			setcolor(11);
			printf("\n\t어떻게 할까?\n");
			printf("\t1. 바다 거북을 따라간다     2. 바다 거북을 무시하고 그냥 내려간다\n");
			scanf("%d", &choice);
			switch (choice)
			{
			case 1:
				system("cls");
				switch (enemy)
				{
				case 0:  // 적 없음
					printf("바다 거북을 따라 계속 내려갔다.\n");
					Pass(pos);
					break;
				case 1:  // 문어
					printf("바다 거북을 따라 게속 내려가던 도중 문어가 나타나 바다 거북을 촉수로 붙잡았다.\n");
					Pass(pos);
					setcolor(13);
					printf("\n\t어떻게 할까?\n");
					printf("\t1. 바다 거북을 버리고 도망간다    2. 문어와 대적한다\n");
					scanf("%d", &choice);
					switch (choice)
					{
					case 1:
						printf("도망쳤다.\n");
						Pass(pos);
						printf("바다 거북이 없으니 어디로 가야할지 모르겠다.\n");
						Pass(pos);
						printf("어..갑자기 숨이 안 쉬어진다.\n");
						Pass(pos);
						printf("산소통의 산소가 다 달았다.\n");
						Pass(pos);
						printf("점점 숨이 막혀온다.\n");
						Pass(pos);
						setcolor(12);
						printf("조졌다.\n");
						Pass(pos);
						exit(0);
					case 2:
						printf("문어를 폴 스피어로 찔렀다.\n");
						Pass(pos);
						printf("문어에게 적중했지만 큰 피해를 주지는 못한 것 같다.\n");
						Pass(pos);
						printf("문어가 나를 촉수로 잡았다.\n");
						Pass(pos);
						setcolor(11);
						printf("\n\t어떻게 할까?\n");
						printf("\t1. 문어의 두 눈 중간 부분을 이빨로 물어뜯는다     2. 비상용 망치로 문어를 공격한다\n");
						scanf("%d", &choice);
						switch (choice)
						{
						case 1:
							printf("이빨로 문어의 두 눈 중간 부분을 이빨로 물어뜯자 문어의 촉수에 힘이 풀리면서 문어가 죽었다.\n");
							Pass(pos);
							printf("나에게 붙어있던 촉수와 거북이에게 붙어있던 촉수를 땠다.\n");
							Pass(pos);
							printf("바다 거북이 고마운 듯 쳐다본다.\n");
							Pass(pos);
							printf("나와 바다 거북은 다시 수족관 밑으로 내려가기 시작했다.\n");
							Pass(pos);
							break;
						case 2:
							printf("비상용 망치를 꺼내들어 문어를 공격하려고 했지만 문어의 촉수에 의해 손을 움직일 수 없었다.\n");
							Pass(pos);
							setcolor(12);
							printf("나와 바다 거북은 문어의 촉수에 잡힌 체 천천히 익사했다.\n");
							Pass(pos);
							exit(0);
						}
					}
					printf("\n");
					Pass(pos);
				case 2:  // 해조류
					printf("난 바다 거북과 함께 수족관 아래로 내려가던 중 해조류에 걸렸다.\n");
					Pass(pos);
					printf("잠수 장비들이 해조류에 걸려 빠져나올수 없다.\n");
					Pass(pos);
					printf("바다 거북은 내가 해조류에 걸린 걸 알아차리고 나에게 왔다.\n");
					Pass(pos);
					printf("바다 거북은 입으로 나에게 걸린 해조류들을 하나 하나 잘라주었다.\n");
					Pass(pos);
					printf("해초류들을 모두 자르고 다시 내려가기 시작했다.\n");
					break;
				case 3:  // 밧줄
					printf("바다 거북과 내려가고 있는데 갑자기 바다 거북이 움직이는 걸 멈췄다.\n");
					Pass(pos);
					printf("무슨 일인가 하고 바다 거북에게 가보니 거북이의 목에 밧줄이 걸려있었다.\n");
					Pass(pos);
					setcolor(11);
					printf("\n\t어떻게 할까?\n");
					printf("\t1. 주머니칼로 밧줄을 자른다     2. 거북이를 버리고 간다\n");
					scanf("%d", &choice);
					switch (choice)
					{
					case 1:
						printf("주머니칼로 조심스레 거북이의 목에 걸려있는 밧줄을 잘랐다.\n");
						Pass(pos);
						printf("많이 아파보였다.\n");
						Pass(pos);
						printf("주머니칼이 있어 다행이었다.\n");
						Pass(pos);
						printf("다시 출발하였다.\n");
						Pass(pos);
						break;
					case 2:
						printf("거북이가 없으니 길을 찾기가 어렵다.\n");
						Pass(pos);
						printf("길을 찾는 중....\n");
						Pass(pos);
						Sleep(30000);
						printf("길을 찾았다.\n");
						Pass(pos);
					}
				}
			}
		}
		system("cls");
		setcolor(7);
		Pass(pos);
		printf("수족관의 거의 바닥까지 오자 한 가오리가 보였다.\n");
		Pass(pos);
		printf("나침반은 그 가오리를 가리키고 있다.\n");
		Pass(pos);
		printf("가오리는 수족관 바닥을 계속 맴돈다.\n");
		Pass(pos);
		printf("가오리 쪽으로 좀 더 가까이 가보니 가오리가 수족관 바닥에서 원을 그리면서 돌고 있다는 걸 알 수 있었다.\n");
		Pass(pos);
		printf("그 원의 중심으로 가서 수족관 바닥의 모래를 걷어내 보니 한 통로가 있다.\n");
		Pass(pos);
		printf("이 통로로 들어가니 어떤 큰 공간이 나왔는데 나는 엄청나게 놀랐다.\n");
		Pass(pos);
		printf("그곳에는 암모나이트, 듀공 그리고 아노말로카리스 등 멸종된 해양생물들이 있었다.\n");
		Pass(pos);
		printf("그리고 그 가운데에는 내가 찾던 육각기둥이 꽂혀져 있었다.\n");
		Pass(pos);
		printf("육각기둥을 가지고 그 공간에서 나왔다.\n");
		Pass(pos);
		if (seedoor == 0)
		{
			printf("육각기둥을 얻었으니 위로 올라가보자.\n");
			Pass(pos);
			printf("수족관 위의 끝에는 어떤 큰 원 모양의 문이 있었다.\n");
			Pass(pos);
			printf("이 원 문에는 육각기둥을 끼울 수 있는 홈이 3개가 있다.\n");
			Pass(pos);
		}
		else {
			printf("원 문으로 가서 육각기둥을 끼워 넣자.\n");
			Pass(pos);
			printf("위로 올라와서 원 문으로 갔다.\n");
			Pass(pos);
		}

		printf("원 문의 육각기둥 모양의 홈에 내가 가진 육각기둥을 끼워넣었다.\n");
		Pass(pos);
		system("cls");
		setcolor(14);
		printf("문이 열렸다.\n");
		Pass(pos);
		printf("문 너머에는 한 지하주차장이 있었다.\n");
		Pass(pos);
		printf("내가 문을 넘어가자마자 철컥 철컥 소리가 나면서 지하주차장의 다른 벽과 같이 변했다.\n");
		Pass(pos);
		printf("계단을 통해 지하주차장에서 나갔다.\n");
		Pass(pos);
		printf("이곳은 한 아파트의 지하주차장이었다.\n");
		Pass(pos);
		printf("이 아파트에서 나가니 눈이 부셨다.\n");
		Pass(pos);
		printf("너무 오랜만에 보는 햇빛이었다.\n");
		Pass(pos);
		printf("아파트 밖은 그냥 평범한 동네였다.\n");
		Pass(pos);
		printf("빨리 집이나 가자.\n");
		Pass(pos);
		setcolor(11);
		printf("CLEAR\n");
		Pass(pos);
		printf("당신도 저도 수고하셨습니다.\n");
		Pass(pos);
		exit(0);
}

void Pass(int pos)
{
	int a = getch();
	if (a == 'm' || a == 'M')
	{
		system("cls");
		ShowMap(pos);
		getch();
		system("cls");
	}
}