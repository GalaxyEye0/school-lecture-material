#include <stdio.h>
#include <stdlib.h>

static int add_counter;
static int minus_counter;
int x, y;
void add();
void minus();

int main1(void) {
	do
	 {
		printf("\n연산을 입력하시오: ");
		scanf_s("%d%d", &x, &y);

		if (y >= 0) {
			add();
		}

		else if (y < 0) {
			minus();
		}

	} while (1);

}

void add() {
	minus_counter = 0;
	add_counter++;
	printf("덧셈은 총 %d번 실행되었습니다.", add_counter);
	printf("연산결과: %d", x + y);
}

void minus() {
	add_counter = 0;
	minus_counter++;
	printf("뺄셈은 총 %d번 실행되었습니다.", minus_counter);
	printf("연산결과: %d", x + y);
}
//Programming_1: 연산 횟수 카운트 해주는 예제(static 활용)

void get_dice_face();

static int num;
static int count_1;
static int count_2;
static int count_3;
static int count_4;
static int count_5;
static int count_6;

int main2(void) {
	
	srand((unsigned)time(NULL));

	for (int i = 0; i < 100; i++) {
		
		get_dice_face();

		if (num == 1)
			count_1++;
		else if (num == 2)
			count_2++;
		else if (num == 3)
			count_3++;
		else if (num == 4)
			count_4++;
		else if (num == 5)
			count_5++;
		else if (num == 6)
			count_6++;
	}

	printf("1->%d \n", count_1);
	printf("2->%d \n", count_2);
	printf("3->%d \n", count_3);
	printf("4->%d \n", count_4);
	printf("5->%d \n", count_5);
	printf("6->%d \n", count_6);


}
	

void get_dice_face() {

	num = rand() % 6 + 1;
}
//Programming_2: 주사위 랜덤 돌린int check();

static int password;
static int num;
static int x;

int main3(void) {
	do
	{
		printf("비밀번호: ");
		scanf("%d", &password);

		int x = check();

		if (x == 0) {
			break;
		}

	} while (1);
}


int check()
{
	if (password == 1234) {
		printf("로그인 성공!!\n");
		return 0;
	}

	else if (password != 1234) {
		printf("로그인 실패!! \n");
		num++;
		if (num >= 3) {
			printf("로그인 시도횟수 초과\n");
			return 0;
		}
	}
}
//Programming_3: 비밀번호 횟수 초과 출력 예제 횟수 카운드 예제

