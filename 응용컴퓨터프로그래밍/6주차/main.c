#include <stdio.h>
#include <string.h>
#include <math.h>

//1. 구조체 선언 및 활용
/*
struct student {
int stdNum;
char stdName[50];
double grade;
char SaySth[100];

};
int main(void) {
  struct student s;

  s.stdNum = 2018;
  strcpy(s.stdName, "정종현");
  s.grade = 4.5;
  strcpy(s.SaySth, "빈즈공연 11월 24일 입니다 많이 찾아와주세요!");

  printf("학번 : %d\n", s.stdNum);
  printf("이름 : %s\n", s.stdName);
  printf("성적 : %.1lf\n", s.grade);
  printf("하고싶은말 : %s\n", s.SaySth);
}
*/

//2. 구조체 활용하기
/*
struct point{
int x;
int y;
};
int main(void){
  struct point s1, s2;
  double L = 0.0;
  
  printf("첫 번째 점의 좌표를 입력하시오(X, Y) : ");
  scanf("%d %d", &s1.x, &s1.y);
  printf("두 번째 점의 좌표를 입력하시오(X, Y) : ");
  scanf("%d %d", &s2.x, &s2.y);

  L = sqrt(pow((s1.x - s2.x), 2) + pow((s1.y - s2.y), 2));
  printf("거리는 %lf 입니다.", L);
}
*/

//3. 구조체 배열 활용하기
/*
struct student {
int number;
char name[50];
double grade;
};

int main(void){
  struct student s[3];

  for(int i = 0;i < 3; i++){
    printf("학번을 입력하세요 : ");
    scanf("%d", &s[i].number);
    printf("이름을 입력하세요 : ");
    scanf("%s", s[i].name);
    printf("학점을 입력하세요 : ");
    scanf("%lf", &s[i].grade);
  }

  for(int i = 0;i < 3; i++){
    printf("학번 : %d ", s[i].number);
    printf("이름 : %s ", s[i].name);
    printf("학점 : %.1lf\n", s[i].grade);
  }
}
*/

//4. 포인터를 활용한 구조체 참조
/*
struct student {
int number;
char name[50];
double grade;
};

int main(void){
  struct student s = {2016039016, "오홍석", 3.5};
  struct student *p;
  p = &s;

  printf("구조체 출력 결과 학번=%d 이름=%s 학점=%.1lf \n", s.number, s.name, s.grade);
  printf("포인터 출력 결과 학번=%d 이름=%s 학점=%.1lf \n", p->number, p->name, p->grade);
}
*/

//5. 포인터를 멤버로 가지는 구조체
/*
struct date {
int year;
int month;
int day;
};

struct student {
int number;
char name[50];
double grade;
struct date* Sdate;
};

int main(void){
  struct student s = {2016039016, "Oh", 3.5};
  struct date d = {1996, 5, 27};
  s.Sdate = &d;
  
  printf("학번 : %d\n", s.number);
  printf("이름 : %s\n", s.name);
  printf("학점 : %.1lf\n", s.grade);
  printf("생년월일 : %d년 %d월 %d일", s.Sdate->year, s.Sdate->month, s.Sdate->day);
}
*/

//6. 구조체 함수 사용하기
/*
struct vector {
float x;
float y;
};

float getVectorSum(struct vector *v){
  return (v->x) + (v->y);
}

int main(void){
  struct vector vec;
  struct vector *v;
  v = &vec;
  
  printf("각 벡터의 크기를 입력하세요(X, Y) : ");
  scanf("%f %f", &vec.x, &vec.y);
  printf("백터의 합 연산 결과 : %f", getVectorSum(v));
}
*/