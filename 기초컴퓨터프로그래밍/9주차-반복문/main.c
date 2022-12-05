#include <stdio.h>

void main(){
    int a;
	scanf_s("%d", &a);
	for (a; a >= 0; a--) {
		printf("%d ", a);
		if (a == 0){
			printf("\a");
		}
	}
} 
//Programming_1: 변수의 값이 0이 될때까지 감소시키고 끝나면 벨소리를 내는 예제

void main() {
	int i;
	int sum = 0;
	for (i = 1; i <= 100; i++) {
		if( i % 3 == 0 )
			sum = sum + i;
	}
	printf("%d", sum);
} 
//Programming_2: 1부터 100사이의 모든 3의 배수의 합을 계산하는 예제

void main() {
	int a;
	scanf_s("%d", &a);
	printf("약수: ");
	for (int i = 1; i <= a ; i++) {
		if (a % i == 0) {
			printf("%d ", i);
		}
	}
} 
//Programming_3: 입력한 수의 모든 약수를 출력하는 프로그램


void main() {
	int space, n;
	scanf_s("%d", &n);

	for (int i = 0; i < n; i++) {
		for (space = 1; n - space -i > 0; space++)
			printf(" ");

		for (int j = 0; j < i+1 ;j++) {
			printf("*");
		} 
        printf("\n");
	}
} 
//Programming_4: 오른쪽으로 치우친 직각삼각형 출력하는 프로그램

void main() {
	int n;
	scanf_s("%d", &n);
	for (int i = 2; i < n+2; i++) {
		for (int j = 1; j < i; j++) {
			printf("%d ", j);
		}
        printf("\n");
	}
} 
//Programming_5:  숫자 쌓는 직각삼각형 출력하기

void main() {
	char ch = NULL;
	int a, b;
	do {
		printf("****************\n");
		printf("A--- Add\n");
		printf("S--- Subtract\n");
		printf("M--- Multiply\n");
		printf("D--- Divide\n");
		printf("Q--- Quit\n");
		printf("****************\n");
		printf("연산을 선택하세요: ");
		scanf_s("%c", &ch);
		
		if (ch == 'A') {
			printf("두 수를 공백으로 분리하여 입력하시오: ");
			scanf_s("%d %d", &a, &b);
			printf("값: %d", a + b);
			return 0;
		}

		else if (ch == 'S') {
			printf("두 수를 공백으로 분리하여 입력하시오: ");
			scanf_s("%d %d", &a, &b);
			printf("값: %d", a - b);
			return 0;
		}

		else if (ch == 'M') {
			printf("두 수를 공백으로 분리하여 입력하시오: ");
			scanf_s("%d %d", &a, &b);
			printf("값: %d", a * b);
			return 0;
		}

		else if (ch == 'D') {
			printf("두 수를 공백으로 분리하여 입력하시오: ");
			scanf_s("%d %d", &a, &b);
			printf("값: %d", a / b);
			return 0;
		}

		else if (ch == 'Q') {
			printf("프로그램을 종료합니다.");
			return 0;
		}

		else {
			printf("지원되지 않는 연산자 입니다. \n");
			main();
		}

	} while (1);

	return 0;
} 
//Programming_6: 정수 계산기 예제

void main() {
    long counter = 0;
    long num;

	printf("구하고자 하는 소수의 범위 최대 값을 입력하시오: ");
	scanf_s("%d", &num);

	for (long n = 2; n <= num; n++) { //2부터 100까지 1씩 늘려가면서 실행 
		for (long i = 1; i <= n; i++) {
			if ((n % i) == 0) 
				counter++;
		}
		if (n % 2 == 1) {
			if (counter == 2)
				printf("%d ", n);
		}
		
		counter = 0;
	}
	return 0;
} 
//Programming_7: 소수 구하기 에제 (매우 중요!!)

void main(void) {
    int sum = 0;
	
	for(int i = 1; ; i++) {
		sum += i;
		if (sum >= 10000) {
			printf("1부터 %d까지의 합은 %d입니다.", i - 1, sum - i);
			break;
		}
	}
} 
//Programming_8: 10000이 넘지 않는 수와 그 때의 합 구하기

int main_while(void) {
    int single, getNum;
	printf("정수를 입력하시오: ");
	scanf_s("%d", &getNum);
	do {
		single = getNum % 10; // 나머지, 즉 첫번째 자리수 먼저 구하기
		getNum = getNum / 10; // 두번째 자리 수를 구하기 위해 미리 10을 나누기
		printf("%d", single); // getNum % 10 의 값을 차례대로 출력
	} while (getNum != 0);
	
	return 0;
}

int main_for(void) {
	int a = 0;
	scanf_s("%d", &a);
	for (int i = 1; i < 10; i++) {
		printf("%d", a % (10));
		a /= 10;
	}
	return 0;
} 
//Programming_9: 숫자 거꾸로 출력하기