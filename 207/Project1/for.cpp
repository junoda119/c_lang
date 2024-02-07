//제어문: 코드를 컨트롤함
//1.조건문(if, switch): 조건에 의한 코드실행 
//2.반복문(for,do while): 코드를 여러번 실행
//for: 반복 횟수가 명확한 경우에 사용
// for(초기화;조건;증가){
//     반복실행할 코드}
// 초기화:반복문 시작에서만 실행, 반복 변수를 초기화한다
// 조건: 조건이 참인동안 반복
// 증가: 각 반복 후에 실행, 변수를 증가나 감소시킴
//while: 조건이 참인동안 반복
//do while:코드 먼저 실행 후 조건문 확인 

#include <stdio.h>
int main() {
	/*
	int a;
	printf("숫자를 입력하시오>>");
	scanf_s("%d", &a);
	int tot = 0;
	for (int i = 1;i < a + 1;i++) {
		tot += i;
	}
	printf("%d\n", tot);
	*/
	////1.
	//int a;
	//printf("숫자를 입력하시오>>");
	//scanf_s("%d", &a);
	//for (int i = 1;i <= 9;i++) {
	//	printf("%d*%d=%d\n", a, i, a * i);
	//}
	////2.
	//for (int i = 65; i <= 90;i++) {
	//	printf("%c %c\n", i,i+32);
	//}
	//for (int i = 1;i < a + 1;i++) {
	//	break;//for문 탈출
	//	continue;//for문 점프
	//}
	//1.
	//for (int i = 65; i <= 90;i++) {
	//	if (76 <= i && i <= 78) {
	//		continue;
	//	}
	//	printf("%c\n", i);
	//}
	/*for (int i = 0;i < 3;i++) {
		for (int j = 0;j < 5;j++) {
			printf("i: %d j:%d\n", i, j);
		}
	}*/
	//1eks~9단 출력 프로그램
	for (int i = 1;i <= 9;i++) {
		for (int j = 1;j <= 9;j++) {
			printf("%d*%d=%d\n", i, j, i * j);
		}
}
	return 0;
}