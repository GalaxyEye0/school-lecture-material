#include <stdio.h>

void main() {
    int a = 0, b = 0;
	printf("2개의 정수를 입력하시오: ");
	scanf_s(" %d %d", &a, &b);
	printf("몫: %d 나머지: %d", a / b, a%b);
}
//Programming_1: 정수를 입력 받아 몫과 나머지를 계산하는 예제

void main() {
	double a=0.0, b=0.0;
	printf("실수를 2개 입력하시오: ");
	scanf_s("%lf %lf", &a, &b);

	printf("%lf %lf %lf %lf", a+b, a-b, a*b, a/b);
}
//Programming_2: 2개의 더블형 실수를 읽어 사칙연산하는 예제

void main1() { // IF문을 활용한 예제
	int a = 0, b = 0, c = 0;

	printf("3개의 정수를 입력하시오: ");
	scanf_s("%d %d %d", &a, &b, &c);

	if (a > b && a > c) // 조건문 활용
		printf("최대값: %d", a);

	else if (b > a && b > c)
		printf("최대값: %d", b);

	else if (c > a && c > a)
		printf("최대값: &d", c);
}

void main2(){ 
    int a, b, c, max_a, max_b;

	printf("3개의 정수를 입력하시오: ");
	scanf_s("%d %d %d", &a, &b, &c);

	max_a = (a > b) ? a : b; // 연산자 활용
	max_b = (max_a > c) ? max_a : c;
	printf("최대값: %d", max_b);
}
//Programming_3: 3개의 정수 값을 입력 받아서 최대 값을 출력하는 예제

void main() {
    int cm = 0, feet;

	printf("키를 입력하시오(cm): ");
	scanf_s("%d", &cm);
	feet = cm / 30.48;
	double inch = cm / 2.54;
	inch = inch - feet * 12;
	printf("%d cm는 %d피트 %lf인치입니다", cm, feet, inch);
}
//Programming_4: cm를 피트와 인치로 변환하는 예제

void main() {
	int a=0;
	printf("정수를 입력하시오: ");
	scanf_s("%d", &a);
	printf("십의 자리: %d \n일의 자리: %d ", a / 10, a % 10);
}
//Programming_5: 100보다 작은 정수 십의 자리와 일의 자리로 분해하는 예제

void main() {
	int a = 0;
	printf("정수를 입력하시오: ");
	scanf_s("%d", &a);

	printf("2의 보수: %d", ~a + 1);

}
//Programming_6: 2의 보수를 출력하는 예제

void main() {
	int a = 0, b =0;
	printf("정수를 입력하시오: ");
	scanf_s("%d", &a);
	
	printf("%d를 곱하고 싶은 횟수: ", a);
	scanf_s("%d", &b);

	printf("%d<<%d의 값: %d", a, b, a << b);
}
//Programming_7: 비트연산자 << 활용해 2를 여러 번 곱한 수 출력하는 예제

#define pi 3.141592
void main() {
	float r, s, v;
	printf("구의 반지름을 입력하시오: ");
	scanf_s("%f", &r);
	
	s = 4 * pi * r * r;
	v = 4.0 / 3.0 * pi * r * r * r ;
	printf("구의 표면적은 %f입니다. \n", s);
	printf("구의 체적은 %f입니다.", v);
}
//Programming_8: 구의 표면적과 체적을 계산하는 예제


void main() {
	float stick_h, shadow_h, piramid_L, piramid_h;
	printf("지팡이의 높이를 입력하시오: "); 
	scanf_s("%f", &stick_h);
	printf("지팡이 그림자의 길이를 입력하시오: ");
	scanf_s("%f", &shadow_h);
	printf("피라미드까지의 거리를 입력하시오: ");
	scanf_s("%f", &piramid_L);
	piramid_h = (stick_h * piramid_L) / shadow_h;
	printf("피라미드의 높이는 %f입니다. ", piramid_h);
}
//Programming_9: 닮음을 이용해 피라미드 높이 구하는 예제

void main() {
    int x = 0, y = 0, S_1 = 0, S_2 = 0, S_3 = 0, S_4 = 0;
	printf("X좌표를 입력하시오: ");
	scanf_s("%d", &x);
	printf("Y좌표를 입력하시오: ");
	scanf_s("%d", &y);

	S_1 = (x > 0 && y > 0) ? printf("1사분면") : S_2;
	S_2 = (x < 0 && y > 0) ? printf("2사분면") : S_3;
	S_3 = (x < 0 && y < 0) ? printf("3사분면") : S_4;
	S_4 = (x > 0 && y < 0) ? printf("4사분면") : S_1;

	return 0;
}
//Programming_10: 정수를 입력받아 사분면을 출력하는 예제