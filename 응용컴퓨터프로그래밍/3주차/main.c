#include <stdio.h>
#include <string.h>
/*
문제 1. 입력받을 배열의 크기를 입력하고 크기만큼의 성적을 입력한다. 이 후
입력받은 학생들의 평균을 구하고, 평균을 넘은 학생들의 비율 출력하기

입력 및 출력 예시
입력 : 3 70 90 81
출력 : 66.667%
*/
/*
int main(void) {
        int arr[99];
        int size = 0;
        double sum = 0.0;
        double count = 0.0;
        double rate = 0.0;

  scanf("%d", &size);

  for(int i = 0; i < size; i++)
    scanf("%d", &arr[i]);

  for(int i = 0; i < size; i++){
    sum += arr[i];
  }

   double average = sum / size;

  for(int i = 0; i < size; i++){
    if(average < arr[i])
      count += 1;
  }

  rate = (count / size) * 100;

  printf("%.3lf%%", rate);
}
*/
/*
문제 2. 배열을 활용해 숫자 4개를 입력받고 배열 원소 전체의 합과 곱을 출력하는
프로그램 구현(덧셈, 곱셈은 for문을 활용한 제어 활용)

입력 및 출력예시
입력 : 5 9 4 3
출력 : 21 540
*/
/*
int main(void){
  int arr[4] = {0, };
  int sum = 0;
  int multi = 1;

  for(int i = 0; i < 4; i++)
    scanf("%d", &arr[i]);

  for(int i = 0; i < 4; i++)
    sum += arr[i];

  for(int i = 0; i < 4; i++)
    multi *= arr[i];

  printf("%d %d", sum, multi);
}
*/

/*
문제 3. 사용자로부터 10개의 정수를 입력받는 배열을 만들고, 숫자를 하나 더
입력하여 그 숫자가 배열내에 몇 개 존재하는지 출력하는 프로그램 작성하기

입력 및 출력예시
입력 1 : 9 4 3 2 5 4 6 8 4 6
입력 2 : 9
출력 : 1
*/
/*
int main(void){

  int arr[10] = {0, };
  int num = 0;
  int count = 0;

  for(int i = 0; i < 10; i++){
    scanf("%d", &arr[i]);
  }

  scanf("%d", &num);

  for(int i = 0; i < 10; i++){
    if(arr[i] == num)
      count++;
  }

  printf("%d", count);
}
*/
/*
문제 4. 구구단의 결과를 2차원 배열에 저장 후 출력하는 프로그램
조건 : 구구단 배열을 for문을 활용해 초기화 하고, 출력을 제어하는 for문을 작성해
프로그램 완성하기

조건 : 구구단의 입력 및 출력은 for문을 활용하기

입력 및 출력 예시
입력 : 구구단 입력
출력 : 구구단 출력

269p
*/
/*
int main(void){
  int array[10][10];
  for(int i = 1; i <= 9; i++){
    for(int j = 1; j <= 9; j++){
      array[i][j] = i * j;
    }
  }

  

  for(int i = 1; i <= 9; i++){
    for(int j = 1; j <= 9; j++)
      printf("%3d", array[i][j]);
    printf("\n");
  }
}
*/
/*
문제 5. 문자열 내 특정 문자의 변환, 문장을 입력받고 기존 문자를 새로운 문자로
대체한다.

조건 : 문장을 입력받는 배열의 크기는 [100] 으로 한다. 문자열 입력함수는
gets() 활용

입력및 출력예시
입력1 : 문자 입력 : hello
입력2 : l t
출력 : hetto
*/
/*
int main(void){
  char input[100] = "\0";
  char key;
  char cKey;

  gets(input);

  scanf("%c %c", &key, &cKey);

  for(int i = 0; i < 100; i++){
    if(input[i] == key){
      input[i] = cKey;
    }
  }

  printf("%s", input);
}
*/
/*
문제 6. 문자열을 입력받고, 해당 문자열의 전체 대문자와 소문자를 바꿔 출력하는
프로그램 구성

조건1 : 문자열을 입력받는 배열은 각각 입력[50] 출력[50] 으로 배열의 크기 고정
조건2 : 소문자 -> 대문자 / 대문자 -> 소문자 / 기호 -> 그대로 출력
입력 및 출력예시
입력 : Star is born!
출력 : sTAR IS BORN!
*/
/*
int main(void){
  char input[50];
  int count = 0;
  
  gets(input);
  while (input[count]) {
    if (isupper(input[count])){
      input[count] = tolower(input[count]);
    }
    else if (islower(input[count])){
      input[count] = toupper(input[count]);
    }
    count++;
  }

    printf("%s", input);
}
*/