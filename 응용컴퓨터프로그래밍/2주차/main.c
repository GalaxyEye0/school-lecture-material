#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

void main(){
  int num = 0;
  printf("정수를 입력하세요 : ");
  scanf("%d", &num);

  if(num < 0)
    printf("절대값은 %d 입니다.", -num);
  else
    printf("절대값은 %d 입니다.", num);

  return ;
}
// 1. 제어문을 활용한 절대값 구하기

void main(){
  int x = 0, y = 0;

  scanf("%d %d", &x, &y);

  if(x > 0 && y > 0)
    printf("1");
  else if(x < 0 && y > 0)
    printf("2");
  else if(x < 0 && y < 0)
    printf("3");
  else if(x > 0 && y < 0)
    printf("4");
  else if(x == 0 && y == 0)
    printf("원점");
  else if(x == 0)
    printf("y축");
  else if(y == 0)
    printf("x축");
}
// 2. 제어문을 활용한 사분면 위의 위치 출력


void main(){
  int n = 0;
  int sum = 0;
  
  printf("n 값 입력 : ");
  scanf("%d", &n);

  for(int i = 1; i <= n; i++){
    sum += i * i;
  }
  printf("결과 : %d", sum);
}
// 3. 반복문을 활용하여 제곱의 합 구하기

void main() {
    int num = 0;
    int tmp = 0;
    double quant = 100.0;

    printf("반감기를 입력하세요 : ");
    scanf("%d", &num);

    tmp = num;

    while (1) {
        quant /= 2.0;
        printf("%d 년 후에 남은 양 = %lf\n", num, quant);
        if (quant <= 10.0)
            break;
        num += tmp;
    }

    printf("1/10 이하로 되기까지 걸리 시간 = %d년", num);
}
// 4. 반복문을 활용한 1/10으로 줄어들 때 까지 걸리는 반감기 시간 구하기

void main(){
  int size = 0;
  int num = 0;
  int *arr;

  scanf("%d %d", &size, &num);

  arr = (int*)malloc(sizeof(int)*size);
  
  for(int i = 0; i < size; i++){
    scanf("%d", &arr[i]);
  }

  for(int i = 0; i < size; i++){
    if(num > arr[i])
      printf("%d ", arr[i]);
  }

  free(arr);
} 
// 5. 반복문 및 제어문을 활용한 특정 숫자 보다 작은 숫자만 추출하기

void main(){
  int num = 0;
  int randnum = 0;
  char c;
  
  while(1){
   srand((unsigned)time(NULL));
   randnum = rand()%3+1;
    
   printf("선택하시오 (1: 가위 2: 바위 3: 보) : ");
   scanf("%d", &num);
   if(num == 1){
     if(randnum == 1)
       printf("컴퓨터와 비겼음\n");
     else if(randnum == 2)
       printf("컴퓨터가 이겼음\n");
     else if(randnum == 3)
       printf("사용자가 이겼음\n");
   }

   else if(num == 2){
     if(randnum == 2)
       printf("컴퓨터와 비겼음\n");
     else if(randnum == 3)
       printf("컴퓨터가 이겼음\n");
     else if(randnum == 1)
       printf("사용자가 이겼음\n");
   }

   else if(num == 3){
     if(randnum == 3)
       printf("컴퓨터와 비겼음\n");
     else if(randnum == 1)
       printf("컴퓨터가 이겼음\n");
     else if(randnum == 2)
       printf("사용자가 이겼음\n");
   }

   else{
     printf("잘못된 입력\n");
     continue;
   }

   printf("컴퓨터가 낸 결과 : %d\n\n", randnum);

   getchar();
   printf("다시하시겠습니까?(y또는n) : ");
   scanf("%c", &c);

   if(c == 'y'){ 
     printf("\n");
     continue;
   }
    else if(c == 'n')
      return ;
  }
}
// 6. 반복 및 제어문을 이용한 탈출 조건 있으면서 잘못된 입력 시 재입력 하는 조건이 있는 가위바위보


int get_arrNum(int arr[], int n){
  for(int i = 0; i < n; i++){
    scanf("%d", &arr[i]);
  }

  return 0;
} // 배열을 입력하는 함수

int return_max(int arr[], int n){
  int tmp = arr[0];
  for(int i = 0; i < n; i++){
    if(arr[i+1] > arr[i])
      tmp = arr[i+1];
  }

  return tmp;
} // 배열 요소 중 최댓값을 찾는 함수

void main(){
  int n = 0;
  int *arr;
  printf("배열의 사이즈를 입력하세요 : (최대99)");
  scanf("%d", &n);

  arr = (int*)malloc(sizeof(int)*n); //core dumped 오류 방지
  get_arrNum(arr, n);

  printf("최댓값 : %d", return_max(arr, n));
}
 // 7. 함수를 활용한 최댓값 비교 프로그램

int main(void){
  int n = 0;
  int com_n = 0;
  char c;
  srand(time(NULL));
  
  while(1){
    printf("앞면 또는 뒷면(1 또는 0) : ");
    scanf("%d", &n);

    com_n = rand()%2;
    
    if(com_n == n){
      printf("맞았습니다.\n");
    }

    else if(com_n != n){
      printf("땡!\n");
    }

    getchar();
    
    printf("계속 하시겠습니까?(y 또는 n) : ");
    scanf("%c", &c);

    if(c == 'y')
      continue;
    else if(c == 'n')
      printf("프로그램 종료");
      return 0;
  }
} // 8. 랜덤함수를 이용한 동전 뒤집기 게임