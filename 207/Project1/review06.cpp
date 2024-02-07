#include<stdio.h>
int main() {
	/**/
	//1.
	int a;
	printf("온도를 입력하시오>>");
	scanf_s("%d", &a);
	if (a < 0) {
		printf("cold, inside\n");
	}
	else if (0 <= a && a <= 40) {
		printf("warm,outdoor");
	}
	else {
		printf("too hot, inside");
	}
	//2.
	int n1,n2;
	printf("정수를 입력하시오>>");
	scanf_s("%d", &n1);
	printf("정수를 입력하시오>>");
	scanf_s("%d", &n2);
	if (n1 * n1 == n2) {
		printf("%d*%d=*d\n", n1, n1, n2);
	}
	else if (n2 * n2 == n1) {
		printf("%d*%d=*d\n", n2, n2, n1);
	}
	else {
		printf("none\n");
	}
	//3.
	int b, c, d, e, f;
	printf("정수 5개를 입력하시오>>");
	scanf_s("%d %d %d %d %d", &b,&c,&d,&e,&f);
	int tot = 0;
	if (b > 0) {
		tot += b;
	}
	if (c > 0) {
		tot += c;
	}
	if (d > 0) {
		tot += d;
	}
	if (e > 0) {
		tot += e;
	}
	if (f > 0) {
		tot += f;
	}
	printf("%d", tot);

	//4.
	int n3, n4;
	printf("정수를 입력하시오>>");
	scanf_s("%d", &n3);
	printf("정수를 입력하시오>>");
	scanf_s("%d", &n4);
	if (n3 > n4) {
		printf("큰수: %d, 몫: %d 나머지: %d\n", n3, n3 / n4, n3 % n4);
	}
	else {
		printf("큰수: %d, 몫: %d 나머지: %d\n", n4, n4 / n3, n4 % n3);
	}
}