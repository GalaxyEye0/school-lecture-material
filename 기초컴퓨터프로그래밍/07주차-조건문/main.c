#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main() { 
	char ch;
	printf("문자를 입력하세요: ");
	scanf_s("%c", &ch);

	switch (ch) {
        case 'a':
        case 'e':
	    case 'i':
	    case 'o':
	    case 'u':
		    printf("모음입니다.");
		    break;
	
	    default:
		    printf("모음이 아닙니다.");
            
        break;
	}
}
//Programming_1: 알파벳 모음과 자음을 switch 문으로 구분하는 예제

void main() {
	int input1 = 0, input2 = 0;
	printf("정수를 입력하시오: ");
	scanf_s("%d", &input1);
	printf("정수를 입력하시오: ");
	scanf_s("%d", &input2);

	if (input1 % input2 == 0)
		printf("약수입니다.");
	else
		printf("약수가 아닙니다.");
}
//Programming_2: 2개의 정수를 받아 처음 받은 수의 약수인지 확인하는 예제

void main() {
	int a, b, c;
	printf("3개의 정수를 입력하세요: ");
	scanf_s("%d %d %d", &a, &b, &c);
	
    if (a < b && a < c)
		printf("제일 작은 정수는 %d입니다.", a);
	else  if (b < a && b < c)
		printf("제일 작은 정수는 %d입니다.", b);
	else if (c < a && c < b)
		printf("제일 작은 정수는 %d입니다.", c);
}
//Programming_3: 3개의 정수를 받아 가장 작은 값을 출력하는 예제

void main() {
	int AI_NUM, HU_NUM = 0;

	AI_NUM = rand() % 3 + 1;
	srand((unsigned)time(NULL));

	printf("선택하시오(1. 가위 2. 바위 3. 보)\n");
	printf("입력: ");
	scanf_s("%d", &HU_NUM);

	if (AI_NUM == 1) {
		if (HU_NUM == 1) {
			printf("컴퓨터와 비겼음. ");
			return 0;
		}
        else if (HU_NUM == 2)
			printf("컴퓨터가 졌음.");

		else if (HU_NUM == 3)
			printf("컴퓨터가 이김.");
	}

	else if (AI_NUM == 2) {
		if (HU_NUM == 1) 
			printf("컴퓨터가 이김.");

		else if (HU_NUM == 2) {
			printf("컴퓨터와 비겼음.");
			return 0;
		}
		else if (HU_NUM == 3) {
			printf("컴퓨터가 졌음.");
        }
    }

	else if (AI_NUM == 3) {
		if (HU_NUM == 1) 
			printf("컴퓨터가 짐.");

		else if (HU_NUM == 2) 
			printf("컴퓨터가 이겼음.");

		else if (HU_NUM == 3) {
			printf("컴퓨터와 비겼음.");
			return 0;
		}
	}
}
//Programming_4: 컴퓨터와 가위 바위 보 하는 프로그램

void main() {
    int cm, year;
	printf("키를 입력하시오(cm): ");
	scanf_s("%d", &cm);
	printf("나이를 입력하시오: ");
	scanf_s("%d", &year);

	if (cm >= 140 && year >= 10)
		printf("타도 좋습니다");
	else
		printf("죄송합니다");
}
//Programming_5: 키와 나이를 입력받아 롤러코스터를 탑승 가능 유뮤 출력하는 예제

void main() {
	int month;

	printf("월번호를 입력하시오: ");
	scanf_s("%d", &month);

	switch(month){
	case 1:
		printf("Jan");
        break;
	case 2:
		printf("Feb");
        break;
	case 3:
		printf("Mar");
        break;
	case 4:
		printf("Apr");
        break;
	case 5:
		printf("May");
        break;
	case 6:
		printf("Jun");
        break;
	case 7:
		printf("Jul");
        break;
	case 8:
		printf("Agu");
        break;
	case 9:
		printf("Sep");
        break;
	case 10:
		printf("Oct");
        break;
	case 11:
		printf("Nov");
        break;
	case 12:
		printf("Dec");
        break;

	default:
		return 0;
	break;
	}

}
//Programming_6: 월 숫자를 입력받아 영어단어로 출력하는 예제

void main() {
    int cm, weight;
	int st_weight;

	printf("체중과 키를 입력하시오: ");
	scanf_s("%d %d", &cm, &weight);
	st_weight = (cm - 100) * 0.9;

	if (st_weight > weight)
		printf("저체중입니다.");
	else if (st_weight == weight)
		printf("표준체중입니다");
	else if (st_weight < weight)
		printf("과체중입니다.");

	return 0;
}
//Programming_7: 표준체중 계산하여 과체중, 저체중, 표준체중 출력하는 예제

void main() {
	float x = 0.0;

	printf("x의 값을 입력하시오: ");
	scanf_s("%f", &x);
	
	if (x <= 0)
		printf("f(x)의 값은 %.1f입니다", (x*x*x) - (9*x) + 2);
	else if (x > 0)
		printf("f(x)의 값은 %.1f입니다", (2*x) +3);
}
//Programming_8: x값을 받아 함수 값을 출력하는 예제

void main() {
	int x = 0, y = 0, S_1 = 0, S_2 = 0, S_3 = 0, S_4 = 0;
	printf("X좌표를 입력하시오: ");
	scanf_s("%d", &x);
	printf("Y좌표를 입력하시오: ");
	scanf_s("%d", &y);

	if (x > 0 && y > 0)
		printf("제1사분면");
	else if (x < 0 && y > 0)
		printf("제2사분면");
	else if (x < 0 && y < 0)
		printf("제3사분면");
	else if (x > 0 && y < 0)
		printf("제4사분면");
}
//Programming_9: x y 좌표를 입력받아 속한 사분면 출력하는 예제