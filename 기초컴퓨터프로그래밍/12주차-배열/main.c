#include <stdio.h>
#include <stdlib.h>

int main1(void) {
	int days[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

	for (int i = 1; i <= 12; i++) {
		printf("%d월은 %d일까지 있습니다.\n", i, days[i-1]);
	}
}
//Programming_1: 배열 초기화하는 예제

#define SIZE 100
int main2(void) {
	srand((unsigned)time(NULL));
	int minimum;
	int maximum = 0;
	int value[SIZE] = {0};

	for (int i = 0; i < SIZE; i++) {
		value[i] = (rand() % SIZE_MAX);
	}

	maximum = value[0];

	for (int i = 0; i < SIZE; i++) {
		if (value[i] > maximum)
			maximum = value[i];
	}
	printf("최댓값은 %d\n", maximum);

	minimum = value[0];

	for (int i = 0; i < SIZE; i++) {
		if (value[i] < minimum)
			minimum = value[i];
	}
	printf("최소값은 %d", minimum);

}
//Programming_2: 최댓값, 최솟값 찾는 예제

#define SIZE 10
int a[SIZE] = { 1,2,3,0,0,0,0,0,0,0 };
int b[SIZE] = { 1,2,3,0,0,0,0,0,0,0 };

void array_equal(int a[], int b[]) {
	for (int i = 0; i < SIZE; i++) {
		if ( a[i] == b[i]) {
			return 1;
		}
		else
			return 0;
	}

}

int main3(void) {
		array_equal(a[SIZE],  b[SIZE]);
		if (array_equal == 1)
			printf("2개의 배열은 같음");
		else if (array_equal == 0)
			printf("2개의 배열은 다름");
}
//Programming_3: 2개의 배열을 받고 비교하는 예제

#define size 10

int a[size] = { 1,2,3,4,5,6,7,8,9,0 };
int b[size] = { 0,0,0,0,0,0,0,0,0,0 };

void array_copy() {
	for (int i = 0; i < size; i++) {
		b[i] = a[i];
	}
}

int main4(void) {
	array_copy();
	
	for (int i = 0; i < size; i++) {
		printf("%d ", a[i]);
	}
	printf("\n");

	for (int i = 0; i < size; i++) {
		printf("%d ", b[i]);
	}

}
//Programming_4: 배열 복사 후 확인 예제

int main5(void) {
	srand((unsigned)time(NULL));
	int array[3][5] = {
	{12, 56, 32, 16, 98},
	{99,56,34,41,3},
	{65,3,87,78,21}
	};
	int sum = 0;

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 5; j++)
			sum += array[i][j];
		printf("%d행의 합계 = %d\n", i, sum);
		sum = 0;
	}
	printf("\n----------\n");

	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 3; j++)
			sum += array[j][i];
		printf("%d열의 합계 = %d\n", i, sum);
		sum = 0;
	}
}
//Programming_5: 2차원 배열 행열 합 구하기 예제

#define size 10
int sum = 0;
double average = 0.0;
int array[size];
int num = 0;
int sum_1 = 0;
double vywnsvusck = 0.0;

void cal_average() {
	for (int i = 0; i < 10; i++) {
		sum += array[i];
	}

	average = sum / size;
}

void vuwnsvusck() {
	for (int i = 0; i < 10; i++) {
		sum_1 += (array[i] - average)*(array[i] - average); //각 표준의 제곱값들을 모두 더한다
	}
	num = sum_1 / size; // 표준편차 구하는 공식
	vywnsvusck = sqrt(num);
} // 표준편차 구하는 함수

int main6(void) {
	int value;
	
	for (int i = 0; i < 10; i++) {
		printf("데이터를 입력하시오: ");
		scanf_s("%d", &value);
		array[i] = value;
	}

	cal_average();
	vuwnsvusck();
	
	printf("평균값은 %lf\n", average);
	printf("표준편차는 %lf\n", vywnsvusck);

}
//Programming_6: 평균 표준편차 구하는 예제


int main7(void){
  int num = 0;
  int arr[10] = {2,3,4,5,1,2,3,4,5,1};
  printf("상품 번호를 입력하시요:");
  scanf("%d", &num);

  printf("상품 번호 %d의 위치는 %d입니다.", num, arr[num-1]);
}
//Programming_7: 1차원 배열을 이용한 상품 번호 마다의 위치 출력