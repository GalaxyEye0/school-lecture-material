#include <stdio.h>
#include <string.h>

#define a 3
#define b 3
#define c 3
#define SIZE 5

// 1번
/*
int main(void){
  char ch = 'A';
  char* ptr = &ch;
  char** ptr2 = &ptr;

  printf("ch : %c\n", ch);
  printf("ptr : %p\n", ptr);
  printf("ptr2 : %p\n\n", ptr2);

  printf("ch 주소 : %p\n", &ch);
  printf("ptr 주소 : %p\n", ptr);
  printf("ptr2 주소 : %p\n\n", ptr2);

  printf("ch 참조값 : %c\n", ch);
  printf("ptr 참조값 : %c\n", *ptr);
  printf("ptr2 이중 참조값 : %c\n\n", **ptr2);
  return 0;
}
*/

// 2번
/*
void swap(int **p1, int **p2){
  int temp = 0;
  temp = **p1;
  **p1 = **p2;
  **p2 = temp;
}

int main(void){
  int **p1, **p2;
  int *ptr1, *ptr2;

  int num1 = 10;
  int num2 = 20;

  ptr1 = &num1;
  ptr2 = &num2;

  p1 = &ptr1;
  p2 = &ptr2;
  printf("바꾸기 전 *ptr1, *ptr2 : %d %d\n", *ptr1, *ptr2);
  swap(p1, p2);
  printf("바꾼 후 *ptr1, *ptr2 : %d %d\n", *ptr1, *ptr2);
}
*/

// 3번
/*
int main(void) {
  int A[a][b];
  int B[b][c];
  int C[a][c] = {{0, 0, 0}, {0, 0, 0}, {0, 0, 0}};

  printf("[ 행렬 A 입력 ]\n");
  for (int i = 0; i < 3; i++) {
    scanf("%d %d %d", &A[i][0], &A[i][1], &A[i][2]);
  }

  printf("[ 행렬 B 입력 ]\n");
  for (int i = 0; i < 3; i++) {
    scanf("%d %d %d", &B[i][0], &B[i][1], &B[i][2]);
  }

  int (*Aptr)[3][3];
  int (*Bptr)[3][3];
  int (*Cptr)[3][3];

  Aptr = &A;
  Bptr = &B;
  Cptr = &C;

  printf("[ 행렬 A 출력 ]\n");
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      printf("\t%d", (*Aptr)[i][j]);
    }
    printf("\n");
  }


  printf("[ 행렬 B 출력 ]\n");
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      printf("\t%d", (*Bptr)[i][j]);
    }
    printf("\n");
  }

  for (int i = 0; i < a; i++)
    for (int j = 0; j < b; j++) {
      for (int k = 0; k < c; k++)
        (*Cptr)[i][j] += (*Aptr)[i][k] * (*Bptr)[k][j];
    }

  printf("[ 행렬 곱 결과 ]\n");
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < c; j++)
      printf("\t%d", (*Cptr)[i][j]);
    printf("\n");
  }
}
*/
// 4. 과일 이중포인터
/*
int main(void){
  char *fruits[] = { "apple", "blueberry", "orange", "melon" };

  char **p = &fruits[0];
  int n = sizeof(fruits) / sizeof(fruits[0]);

  for(int i = 0; i < n; i++){
    printf("%s \n", fruits[i]);
  }

  return 0;
}
*/

// 5. 특정 문자열 찾아주는 예제
/*
void findStr(char** str, int size){
  char finding[100];
  int check = 0;
  for(int i = 0; i < size; i++){
    printf("%s\n", str[i]);
  }

  printf("찾는 향수 : ");
  scanf("%s", finding);

  for(int i = 0; i < size; i++){
    if(strcmp(finding, str[i]) == 0)
      check++;
  }

  if(check == 0){
    printf("해당 브랜드가 없습니다.");
  }
  else
    printf("해당 브랜드가 있습니다.");
}

int main(void){
  char *brand[SIZE] = {"diptyque", "lerabo", "creed", "byredo", "rush"};

  int size = sizeof(brand) / sizeof(brand[0]);

  findStr(brand, size);
}
*/