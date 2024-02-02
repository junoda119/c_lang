//ascii
#include<stdio.h>
int main() {
	//char al = 'a';
	//printf("%d", al);
	//printf("%c", al);

	//1.소문자를 입력 받고 
	//알파벳의 순서 나타내는 프로그램
	//의 순서는 입니다.
	//char a;
	//printf("소문자를 입력하시오>>");
	//scanf_s("%c", &a);
	//int seq=a-97;
	//printf("%c의 순서는 %d입니다.\n", a, seq);


	//2.정수를 (0~25)입력후 정수에 따른 알파벳 나타내기
	//번째 대문자는 입니다.
	//int num;
	//printf("정수를 (0~25)입력>>");
	//scanf_s("%d", &num);
	//printf("%d번째 대문자는 %c입니다.", num, num + 65);

	//3. 
	char b;
	printf("소문자를 입력하시오>>");
	scanf_s("%c", &b);
	printf("%c", b - 32);
	getchar();
	char c;
	printf("대문자를 입력하시오>>");
	scanf_s("%c", &c);
	printf("%c", c + 32);

}
