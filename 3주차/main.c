#include <stdio.h>

void main()
{
	float a, b, c;
	float sum, average;

	printf("실수를 입력하시오: ");
	scanf_s("%f", &a);
	printf("실수를 입력하시오: ");
	scanf_s("%f", &b);
	printf("실수를 입력하시오: ");
	scanf_s("%f", &c);
	
	sum = a + b + c, average = sum / 3;
	
	printf("합은 %f이고 평균은 %f입니다.", sum, average);
}
//programming_1: 실수 입력값들의 합과 평균 구하는 프로그램

void main()
{
	float mile;
	float meter;
	printf("마일을 입력하시오: ");
	scanf_s("%f", &mile);
	meter = mile * 1609;
	printf("%f마일은 %f미터입니다. ", mile, meter);
}
//Programming_2: 마일을 미터로 변환하는 프로그램

void main() 
{
	double r, h, s;
	printf("삼각형의 밑변: ");
	scanf_s("%lf", &r);
	printf("삼각형의 높이: ");
	scanf_s("%lf", &h);

	s = r * h / 2;

	printf("삼각형의 넓이: %lf", s);
}
//Programming_3: 삼각형 넓이 계산하는 프로그램

void main()
{
	double F, C;
	printf("화씨값을 입력하세요: ");
	scanf_s("%lf", &F);
	
	C = (5.0 / 9.0) * (F - 32.0);
	printf("섭씨값은 %lf도입니다.", C);
}
//Programming_4: 화씨값을 섭씨값으로 계산하는 프로그램


void main() {

	double x;
	double y;
	printf("실수를 입력하세요: ");
	scanf_s8("%lf", &x);

	y = (3 * x*x) + 7 * x + 11;

	printf("다항식의 값은 %lf", y);

}
//Programming_5: 실수형 변수 받아 계산하는 다항식 예제


void main()
{
	float weight;
	printf("몸무게를 입력하세요(단위: kg): ");
	scanf_s("%f", &weight);

	float moonweight = weight * 0.17;
	printf("달에서의 몸무게는 %fkg입니다.", moonweight);

}
//Programming_6: 실수형 변수 받아 달에서의 몸무게 계산하는 예제
