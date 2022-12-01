#include <math.h>
#include <stdio.h>
#include <stdlib.h>

// 1. 사칙연산 계산기
/*
int calc(int a, int b, char op){
  if(op == '+'){
    return a+b;
  }
  else if(op == '-'){
    return a-b;
  }
  else if(op == '/'){
    return a/b;
  }
  else if(op == '*'){  
   return a*b;
  }

  return 0;
}
int main(void){
  int a, b = 0;
  int result = 0;
  char op;

  printf("두 수를 입력하시오: ");
  scanf("%d %d", &a, &b);
  getchar();
  printf("연산자를 입력하시오(+ - / *) : ");
  scanf("%c", &op);
  printf("계산결과 : %d", calc(a, b, op));
  return 0;
}
*/

// 2. 랜덤숫자 맞추기
/*
int life = 3;

int generator(int random) {
  int ans = 0;
  for (int i = 0; i < life; i++) {
    printf("%d번째 시도\n", i + 1);
    printf("숫자를 입력하세요(1부터 50까지) : ");
    scanf("%d", &ans);

    if (ans == random) {
      printf("숫자를 맞추셨습니다. 축하합니다!\n게임종료");
      break;
    }

    else if (ans != random) {
      if (ans < random)
        printf("업!!\n");
      else if (ans > random)
        printf("다운!!\n");

      printf("\n게임오버");
    }
  }

  return 0;
}

int main(void) {
  srand(time(NULL));
  int random = rand() % 50 + 1;
  generator(random);
  return 0;
}
*/

// 3. 재귀함수 팩토리얼
/*
int factorial(int num)
{
  if (num == 1)
    return 1;

  return num * factorial(num - 1);
}

int main()
{
  int num = 0;
  printf("숫자 입력하기 : ");
  scanf("%d", &num);
  printf("%d 팩토리얼 결과 : %d", num, factorial(num));
  return 0;
}
*/

// 4. 평균 및 중앙값 출력하는 함수
/*
int sortArr(int arr[], int size){
  int temp = 0;
  for(int i=0; i<size  ; i++){
    for(int j=i+1; j<size; j++){
      if(arr[i] > arr[j]) {
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
      }
    }
  }
}

int getCenter(int arr[], int size) {
  sortArr(arr, size);

        int result = 0;
  int position = size - 1;
        if (size % 2 == 1) {
    position = (position + 1) / 2;
                result = arr[position];
                return result;
        }
        else {
                result = (arr[position / 2] + arr[(position / 2) + 1]) / 2;
    return result;
  }

}

int getMean(int arr[], int size) {
        int sum = 0;
        for (int i = 0; i < size; i++)
                sum += arr[i];
        int mean = sum / size;
        return mean;
}

int main(void) {
        int min = 9999;
        int max = -9999;
        int size = 0;
        int arr[9999] = { 0, };

        printf("배열의 크기를 입력하시오 : ");
        scanf("%d", &size);

        for (int i = 0; i < size; i++) {
                printf("%d 번째 숫자 입력 : ", i + 1);
                scanf("%d", &arr[i]);
        }

        printf("\n\n**********연산결과**********\n");
        printf("평균값 : %d\n", getMean(arr, size));
        printf("중앙값 : %d", getCenter(arr, size));
}
*/

// 5. 별찍기 문제
/*
void printStar(int getNum);
void printEnter(int getNum);

void printStar(int getNum){
  if(getNum <=0){
    return;
  }
  printStar(getNum-1);
  printf("*");
}

void printEnter(int getNum){
  if(getNum <=0){
    return;
  }
  printEnter(getNum-1);
  printStar(getNum);
  printf("\n");
}

int main(void){
  int getNum = 0;
  scanf("%d", &getNum);
  printEnter(getNum);
}
*/

// 6. 성적관리 프로그램
/*
void menu();
void printStar();
int getStdScoreFunction(int arr[], int getStd);
void printStdScoreFunction(int arr[], int getStd);
float getStdScoreMean(int arr[], int getStd);
int getStdVandD(int arr[], int getStd, float mean);

int main(void) {
  int menuNum = 0;
  int key = 0;
  int key2 = 0;
  int getStd;
  int arr[99];
  float mean = 0.0;

  while (1) {
    menu();
    printf("\n들어가려는 메뉴를 입력하세요 : ");
    scanf("%d", &menuNum);

    switch (menuNum) {
    case 1:
      printf("\n학생 수를 입력하세요 (최대 99명) : ");
      scanf("%d", &getStd);

      printStar();
      printf("학생 성적 입력하기\n");
      printStar();

      key = getStdScoreFunction(arr, getStd);
      break;
    case 2:
      if (key == 1)
        printStdScoreFunction(arr, getStd);
      else
        printf("\n앗.. 학생이 없습니다. 학생 수부터 입력하세요ㅠㅠ\n");
      break;
    case 3:
      if (key == 1) {
        mean = getStdScoreMean(arr, getStd);
        printf("\n학생 평균 결과 : %.1lf\n", mean);
        key2 = 1;
      } else
        printf("\n앗.. 학생이 없습니다. 학생 수부터 입력하세요ㅠㅠ\n");
      break;
    case 4:
      if (key == 1 && key2 == 1) {
        int sum = 0;
        float VRC = 0.0;
        float STVRC = 0.0;

        sum = getStdVandD(arr, getStd, mean);
        VRC = sum / getStd; // 편차 구하는 공식
        STVRC = sqrtf(VRC); // 표준편차 구하는 공식

        printStar();
        printf("분산 및 표준편차 출력 결과\n");
        printStar();

        printf("\n분산 결과 : %.1lf\n\n", VRC);
        printf("표준편차 결과 : %.1lf\n\n", STVRC);
      } else {
        printf("\n앗.. 학생이 없습니다. 학생 수부터 입력하세요ㅠㅠ\n");
      }
      break;
    case 5:
      return 0;
    }
  }

  return 0;
}

void printStar() { printf("*************************************\n"); }

void menu() {
  printStar();
  printf("*\t\t학생 성적 관리 프로그램\t\t*\n");
  printStar();
  printf("\n1.학생 성적 입력하기\n");
  printf("2.학생 성적 출력하기\n");
  printf("3.전체학생 평균 구하기\n");
  printf("4.전체학생 분산과 표준편차 구하기\n");
  printf("5.프로그램 종료\n\n");
  printStar();
}

int getStdScoreFunction(int arr[], int getStd) {
  int score = 0;

  for (int i = 0; i < getStd; i++) {
    printf("%d 번째 학생 : ", i + 1);
    scanf("%d", &score);
    arr[i] = score;
  }

  return 1;
}

void printStdScoreFunction(int arr[], int getStd) {
  printStar();
  printf("학생 성적 출력 결과\n");
  printStar();

  for (int i = 0; i < getStd; i++) {
    printf("%d 번째 학생의 점수 : %d\n", i + 1, arr[i]);
  }
}

float getStdScoreMean(int arr[], int getStd) {
  int sum = 0;
  float mean = 0.0;

  printStar();
  printf("학생 평균\n");
  printStar();

  for (int i = 0; i < getStd; i++)
    sum += arr[i];

  mean = sum / getStd;

  return mean;
}

int getStdVandD(int arr[], int getStd, float mean) {
  int sum = 0;

  for (int i = 0; i < getStd; i++) {
    sum += ((arr[i] - mean) * (arr[i] - mean));
  }

  return sum;
}
*/