#include <stdio.h>
#include <stdlib.h>
#include <time.h>

double square(double x);

int main1(void) {
	double x;
	
	printf("정수를 입력하시오: ");
	scanf_s("%lf", &x);
	double sqr = square(x);

	printf("주어진 정수 %lf의 제곱은 %lf입니다.", x, sqr);
}

double square(double x) {
	
	return x * x;
}
//Programming_1: 주어진 실수를 제곱하여 반환하는 함수 작성

int check_alpha(char ch);

int main2(void) {
	char ch = '\0';
	int num = 0;

	printf("문자를 입력하시오: ");
	scanf_s("%c", &ch);

	num = check_alpha(ch);

	if (num == 1)
		printf("%c는 알파벳입니다.", ch);
	else
		printf("%c는 알파벳이 아닙니다.", ch);

}

int check_alpha(char ch) {
	if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
		return 1;
	else
		return 0;
}
//Programming_2: 입력한 문자가 알파벳인지 아닌지 판단하는 예제

double pi = 3.141592;
double cal_area(double R);
double R;
double num;

int main3(void) {
	
	printf("원의 반지를 입력하시오: ");
	scanf_s("%lf", &R);

	double num = cal_area(R);
	printf("원의 면적은 %lf입니다. ", pi * num);
}

double cal_area(double R) {
	return R * R;
} 
//Programming_3: 원의 반지름을 입력받아 면적으로 변환하는 함수를 사용하는 예제

int half_up(double x);
int b;
double x;

int main4(void) {
	printf("실수를 입력하시오: ");
	scanf_s("%lf", &x);

	half_up(x);

	printf("반올림한 값은 %d입니다.", b);
} 

 int half_up(double x) {
	 b = x + 0.5;
	 return b;
}
//Programming_4: 입력한 실수를 반올림하는 예제

int even(int x);
int absolute(int x);
int sign(int x);

int x;

int main5(void) {

	printf("정수를 입력하시오: ");
	scanf_s("%d", &x);

	even(x);
	absolute(x);
	sign(x);
}

int even(int x) {

	if (x % 2 == 1) {
		printf("even()의 결과: 홀수\n");
	}

	else {
		printf("even()의 결과: 홀수\n");
	}

	return 0;
}

int absolute(int x) {
	if (x < 0) {
		printf("absolute()의 결과: %d \n", -x);
	}

	else {
		printf("absolute()의 결과: %d \n", x);
	}
	return 0;
}

int sign(int x) {
	if (x < 0) {
		printf("sign()의 결과: 음수 \n");
	}

	else {
		printf("sign()의 결과: 양수 \n");
	}
	return 0;
}
//Programming_5: 입력한 정수를 짝수,홀수 / 절댓값 / 양수, 음수 판별하는 프로그램

void random();

int main6(void) {

	random();
}

void random() {
	srand((unsigned)time(NULL));

	for (int i = 1; i <= 10; i++) {
		int num = rand() % 2;
		printf("%d ", num);
	}
}
//Programming_6: 0~1사이의 숫자를 무작위로 10번 출력하는 함수 만들기 예제

void simulation(int vNum, int iNum, char c){
  while (1) {
		vNum = rand() % 2;
		printf("앞면 또는 뒷면(1 또는 0):");
		scanf("%d", &iNum);
		if (vNum == iNum)
			printf("맞았습니다.\n");
		else if (vNum != iNum) {
			printf("틀렸습니다.\n");
		}
    getchar();
		printf("계속하시겠습니까?(y 또는 n):");
		scanf("%c", &c);

		if (c == 'y')
			continue;
		else if (c == 'n')
			break;
	}
}
int main7(void) {
	int vNum = 0;
	int iNum = 0;
	char c;
	simulation(vNum, iNum, c);
}
//Programming_7: 0~1사이의 숫자를 맞추는 시뮬레이션 

void f_rand(){
  double num = 0.0;
  num = rand()%RAND_MAX;

  printf("%lf ", num/RAND_MAX);
}

int main8() {
	int vNum = 0;
	int iNum = 0;
	char c;
  srand((unsigned)time(NULL));
	for(int i = 0; i < 5; i++){
    f_rand();
  }
  return 0;
}
//Programming_8: 0~1사이의 실수 구하기