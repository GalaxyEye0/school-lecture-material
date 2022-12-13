#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void check(char* arr);

int main1(void) {
	char str[100];
	gets_s(str, strlen(str)); // 문자열 입력받기
	check(str);
	return 0;
}

void check(char* str) {
	int i;
	for (i = 0; str[i] != '\0'; i++) {
		if (str[i] != ' ') { // 만약에 공백 문자가 아니면
			printf("%c", str[i]); // 그 문자를 출력하기
		}
	}
} // 문자열 공백 외의 문자만 출력

//Programming_1: 문자열 공백 지우고 출력하기

int str_ctr(char *str, char ctr) {
	int count = 0;
	for (int i = 0; str[i] != NULL; i++) {
		if (str[i] == ctr) // 만약에 ctr이라는 문자와 동일하다면
			count++; 
	}
	return count;
}

int main2(void) {
	char str[20];
	char ctr;

	printf("문자열을 입력하시오: ");
	gets(str);
	printf("갯수를 셀 문자를 입력하시오: ");
	scanf_s("%c", &ctr);

	printf("%c의 갯수: %d\n", ctr, str_ctr(str, ctr));

	return 0;
}
//Programming_2: 특정 문자가 몇번이나 등장 했는지 출력하기

int str_chr(char* s, char c);
void count_ctr(char* s);

int main3() {
	char str[128];
	char ctr;

	printf("문자열을 입력하시오: ");
	gets(str, strlen(str));
	count_ctr(str);

	return 0;
}

int str_chr(char* s, char c) {
	int i, count = 0;
	for (i = 0; s[i] != NULL; i++) {
		if (s[i] == c)
			count++;
	}
	return count;
} // 특정 문자의 출현 빈도 수를 세는 함수

void count_ctr(char* s) {
	int i;
	for (i = 'a'; i <= 'z'; i++)
		printf("%c : %d\n", i, str_chr(s, i));
} // 특정 문자의 출현 빈도 수를 출력하는 함수

//Programming_3: 알파벳 등장 빈도 수 출력

void upper_lower(char* s) {
	for (int i = 0; s[i] != '\0'; i++) {
		if (s[i] >= 97 && s[i] <= 122) // 만약에 소문자라면
			s[i] -= 32; // 32를 빼서 대문자로 만든다
		else if (s[i] >= 65 && s[i] <= 90) // 만약에 대문자라면
			s[i] += 0; // 0을 더한다.
	}
}

int main4() {
	char str[128];

	printf("문자열을 입력하시오: ");
	gets(str, strlen(str));
	upper_lower(str);

	printf("변환된 문자열: ");
	puts(str);

	return 0;
}
//Programming_4: 소문자를 대문자로 바꿔서 출력

int main() {
	char str[80];
	char ctr1[20];
	char ctr2[20];
	char *token;
	char *word = " ";
	char *context[50];

	int i, count = 0; // i는 for문 기본값, count는 단어의 수

	printf("문자열을 입력하시오: ");
	gets(str, strlen(str));

	printf("찾을 문자열: ");
	gets(ctr1, strlen(ctr1));

	printf("바꿀 문자열: ");
	gets(ctr2, strlen(ctr2));

	token = strtok_s(str, word, stdin);

	for (i = 0; token != NULL; i++) {
		context[i] = token;
		token = strtok_s(NULL, word, stdin);
		count++;
	}

	for (i = 0; i < count; i++)
		if (strcmp(ctr1, context[i]) == 0) // 바꿀 문자열을 찾았다면
			context[i] = ctr2; // 해당 문자열을 바꾼다

	printf("수정된 문자열: ");

	for (i = 0; i < count; i++)
		printf("%s ", context[i]);
	printf("\n");

	return 0;
}
//Programming_5: 문자열의 특정 단어만 바꿔서 출력