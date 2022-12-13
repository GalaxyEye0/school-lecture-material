#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void get_sum_diff(int x, int y, int *p_sum, int *p_diff) {
	*p_sum = x + y;
	*p_diff = x - y;

	printf("원소들의 합=%d\n", *p_sum);
	printf("원소들의 차=%d", *p_diff);

}

int main1(void) {
	int x = 100, y = 200;
	int p_sum = 0;
	int p_diff = 0;

	get_sum_diff(x, y, &p_sum, &p_diff);
}
//Programming_1: 포인터 매개변수 활용 기본 예제

#define size 10

int num;
int A[size] = { 0, };

void array_fill() {
	for (int i = 0; i < size; i++) {
		num = rand() % RAND_MAX;
		A[i] = num;
	} // 배열에 각 요소에 랜덤 값 입력

	for (int i = 0; i < size; i++) {
		printf("%d ", A[i]);
	} // 배열 출력
}
int main2(void) {
	srand((unsigned)time(NULL));
	array_fill(A, size);
}
//Programming_2: 정수 배열에 랜덤한 숫자 넣는 예제

int main3(void) {
	double grades[10] = { 0.0, 0.5, 1.0, 1.5, 2.0, 2.5, 3.0, 3.5, 4.0, 4.3 };
	double scores[10] = { 0, };

	for (int i = 0; i < 10; i++) {
		scores[i] = (grades[i] / 4.3) * 100; // 학점 백분위로 변환하기
	}

	for (int i = 0; i < 10; i++) {
		printf("%.1lf -> %.1lf\n", grades[i], scores[i]);
	}
}
//Programming_3: 학점을 백분위 점수로 변환하는 예제

int main4(void) {
  int A[10] = { 52, 30, 156, 41, 97, 129, 84, 159, 174, 143}; // 기본급 배열
  int B[10] = {1, 10, 28, 32, 26, 7, 46, 8, 27, 28}; // 보너스 값 배열
  int C[10] = {0,};

  for(int i = 0; i < 10; i++){
	C[i] = A[i] + B[i];
  }

  printf("A[] =");
  for(int i = 0; i < 10; i++){
	printf("\t%d", A[i]);
  }
  printf("\n");

  printf("B[] = ");
  for(int i = 0; i < 10; i++){
	printf("\t%d", B[i]);
  }
  printf("\n");

  printf("C[] =");
  for(int i = 0; i < 10; i++){
	printf("\t%d", C[i]);
  }
  printf("\n");

}
//Programming_4: 기본급과 보너스 배열을 합치는 예제

int Salary_sum(int *A){
  int sum = 0;
  for(int i = 0; i < 10; i++){
	sum += A[i];
  }

  return sum;
} //배열에 있는 모든 수 합하기

int main5(void) {
  int A[10] = {41, 67, 134, 100, 169, 124, 78, 158, 162, 64};

  printf("A[] = ");
  for(int i = 0; i < 10; i++){
	printf("%d ", A[i]);
  }
  printf("\n");

  int result = Salary_sum(A);
  printf("월급의 합=%d", result);
}

//Programming_5: 배열의 요소들을 합하고 그 값을 반환하는 함수

int Arr_find(int *Arr){
  int fnd_v = 200;
  for(int i = 0; i < 10; i++){
	if(Arr[i] == 200)
	  return i;
	else
	  continue;
  }
  return 0;
} // 특정 조건인 사람의 값을 반환하는 함수

int main(void) {
  int Arr[10] = {41, 67, 134, 100, 200, 124, 78, 158, 162, 64};

  int result = Arr_find(Arr);
  printf("월급이 200만원인 사람의 인덱스=%d", result);
}

//Programming_6: 배열에서 200만원인 사람의 인덱스 반환하는 함수

void Arr_sort(int *C){
  int least = 0;
  int temp = 0;

  for(int i = 0; i < 7; i++) {
		least = i;
		for(int j = i + 1; j < 8; j++){
			if(C[j] < C[least]){
				least = j;
		        temp = C[i];
		        C[i] = C[least];
		        C[least] = temp;
            }
        }
	}
} // 오름차순 정렬

void Arr_fill(int *A, int *B, int *C){
  for(int i = 0; i < 4; i++){
   C[i] = A[i];
  }

  for(int i = 4; i < 8; i++){
	C[i] = B[i-4];
  }
} // 2개의 배열을 하나로 합치는 함수

int main7(void) {
  int A[4] = {13, 35, 55, 74};
  int B[4] = {24, 42, 65, 82};
  int C[8] = {0, };

  Arr_fill(A, B, C);
  Arr_sort(C);

  for(int i = 0;i < 8; i++)
		printf("%d ", C[i]);
}

//Programming_7: 포인터 선택정렬 예제 + 정렬 공부하기