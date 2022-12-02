#define size 100
#define SIZE 5

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

// 1. 포인터의 선언과 사용법

/*
void SwapNumptr(int*num, int*num2){
  int temp = 0;
  temp = *num;
  *num = *num2;
  *num2 = temp;
}

int main(void) {
  int num = 1;
  int num2 = 128;
  int* ptr = &num;

  printf("바뀌기 전 num 값 : %d\n", *ptr);
  SwapNumptr(&num, &num2);
  printf("바뀌고 난 후 num 값 : %d", *ptr);
}
*/

// 2. 문자열 포인터

/*
int main(void){
  char string[size] = "Basic-C";
  char *p = string;

  printf("&string[3] : %s", string+3);
  printf("\n");
  printf("p+3 : %s", p+3);
  printf("\n");
  printf("&string[3] : %c", *(string+3));
  printf("\n");
  printf("p+3 : %c", *(p+3));
}
*/

// 3. Call by reference

/*
void SwapNumptr(int*num1, int*num2){
  int temp = 0;
  temp = *num1;
  *num1 = *num2;
  *num2 = temp;
}

void SwapNum(int num3, int num4){
  int temp = 0;
  temp = num3;
  num3 = num4;
  num4 = temp;
}

int main(void){
  int num1, num2 = 0;
  int num3, num4 = 0;
  scanf("%d %d", &num1, &num2);

  num3 = num1;
  num4 = num2;

  SwapNumptr(&num1, &num2);
  printf("참조에 의한 호출 변경 결과 : %d %d\n", num1, num2);
  SwapNum(num3, num4);
  printf("값에 의한 호출 변경 결과 : %d %d", num3, num4);
}
*/

// 4. 문자열 거꾸로 출력

/*
int main(void){
  char string[size];
  char *ptr;
  int len = 0;

  printf("문자열을 입력하세요 : ");
  gets(string, size);

  ptr = string;

  len = strlen(string);

  printf("반대 출력 결과 : ");
  for(int i = len-1; i > -1; i--){
    printf("%c", ptr[i]);
  }
}
*/

// 5. 홀수 짝수 판별

/*
void odd(int *p, int n) {
  printf("홀수 출력 결과 \n");
  for (int i = 0; i < n; i++) {
    if (p[i] % 2 == 1)
      printf("%d \n", p[i]);
  }
  printf("\n");
}

void even(int *p, int n) {
  printf("짝수 출력 결과 \n");
  for (int i = 0; i < n; i++) {
    if (p[i] % 2 == 0)
      printf("%d \n", p[i]);
  }
  printf("\n");
}

int main(void) {
  int num[10];
  int n = 10;
  int *p;

  for (int i = 0; i < 10; i++) {
    printf("%d 번째 숫자 : ", i + 1);
    scanf("%d", &num[i]);
  }

  p = num;

  odd(p, n);
  even(p, n);
}
*/

// 6. 소수 찾기
/*
void findNum(int *num1, int *num2){
  int key = 0;
  for(int i = *num1; i < *num2; i++){
    for(int j = 2; j < i; j++){
      if(i % j == 0){
        key = 1;
        break;
      }
    }

    if(!key)
      printf("%d\n", i);

    key = 0;
    }
}

int main(void) {
  int num1, num2 = 0;
  printf("숫자 입력 : ");
  scanf("%d %d", &num1, &num2);

  findNum(&num1, &num2);
}
*/

// 7. 픽셀 다루기
/*
void print_img(int image[SIZE][SIZE]) {
  for (int i = 0; i < SIZE; i++) {
    for (int j = 0; j < SIZE; j++) {
      image[i][j] = rand() % 900 + 1;
      printf("%d ", image[i][j]);
    }
    printf("\n");
  }
  printf("\n");
}

void brighten_img(int image[SIZE][SIZE]) {
  for (int i = 0; i < SIZE; i++) {
    for (int j = 0; j < SIZE; j++) {
      image[i][j] += 10;
      printf("%d ", image[i][j]);
    }
    printf("\n");
  }
  printf("\n");
}

int main(void) {
  int a[SIZE][SIZE];
  int *ptr = NULL;

  ptr = a;

  srand((unsigned)time(NULL));

  print_img(ptr);
  brighten_img(ptr);
}
*/
