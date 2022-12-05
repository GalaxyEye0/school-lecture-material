#include <stdio.h>

void main()
{
	float a;
	printf("실수를 입력하시오: ");
	scanf_s("%f", &a);
	printf("실수형식으로는 %f입니다.\n", a);
	printf("지수형식으로는 %e입니다.", a);
} 
//Programming_1: 소수점 표기 방법과 지수 표기 방법 예제

void main()
{
	int a;
	printf("16진수 정수를 입력하시오: ");
	scanf_s("%x", &a);
	printf("8진수로는 %#o입니다\n", a);
	printf("10진수로는 %d입니다\n", a);
	printf("16진수로는 %#x입니다", a);
}
//Programming_2: 16진수를 입력받아 8진수, 10진수, 16진수로 변환하는 예제

void main()
{
	int x, y, temp;
	
	x = 10;
	y = 20;
	printf("x=%d y=%d\n", x, y);
	
	temp = x;

	x = y;
	y = temp;
	printf("x=%d y=%d", x, y);
}
//Programming_3: int 형 변수 서로 교환하는 예제

void main()
{
	double A, B, H, V;
	printf("상자의 가로 세로 높이를 한번에 입력: ");
	scanf_s("%lf %lf %lf", &A, &B, &H);
	
	V = A * B * H;

	printf("상자의 부피는 %lf입니다.", V);

}
//Programming_4: 상자의 부피를 구하는 예제

#define c 3.33058

void main()
{
	float a, b;
	printf("평을 입력하세요: ");
	scanf_s("%f", &a);

	b = a * c;
	
	printf("%f평방미터 입니다.", b);
}
//Programming_5: 평을 제곱미터로 변환하는 예제

void main()
{
	float a, b;
	a = 3.32e-3;
	b = 9.76e-8;
	
	printf("%f", a + b);
}
//Programming_6: 지수표기법을 실수형으로 초기화하는 예제

void main()
{
	double m, v, e;
	printf("질량(kg): ");
	scanf_s("%lf", &m);
	printf("속도(m/s): ");
	scanf_s("%lf", &v);
	printf("운동에너지(E): %lf", m*v*v/2.0);
}
//Programming_7: 운동에너지 계산하는 예제

void main()
{
	int input;
	printf("아스키코드를 입력하시오: ");
	scanf_s("%d", &input);
	char code1 = input;
	printf("문자: %c입니다.", code1);
}
//Programming_8: 아스키 코드 입력하여 변환하는 예제

void main()
{
	char beep = '\a';
	printf("화재가 발생하였습니다.%c", beep);
}
//Programming_9: 아스키 코드로 경보음이 울리는 예제

void main()
{
	printf("\"ASCII code\", \'A\', \'B\', \'C\' \n\\t \\a \\n");
}
//Programming_10: 역슬래시를 활용한 다양한 이스케이프 문자
