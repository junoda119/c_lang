#include<stdio.h>
#include<string.h>
int main() {
	int a[5] = { 2,4,6,8,10 };
	int* pa;
	pa = &a[0];
	//2==a[0],10==a[4]
	printf("%d", a);// �迭�� ���� �̸��� �ּҰ�
	printf("%d", &a);
	printf("%d", &a[0]);
	printf("%d", pa);
	return 0;
}