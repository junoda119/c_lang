//ascii
#include<stdio.h>
int main() {
	//char al = 'a';
	//printf("%d", al);
	//printf("%c", al);

	//1.�ҹ��ڸ� �Է� �ް� 
	//���ĺ��� ���� ��Ÿ���� ���α׷�
	//�� ������ �Դϴ�.
	//char a;
	//printf("�ҹ��ڸ� �Է��Ͻÿ�>>");
	//scanf_s("%c", &a);
	//int seq=a-97;
	//printf("%c�� ������ %d�Դϴ�.\n", a, seq);


	//2.������ (0~25)�Է��� ������ ���� ���ĺ� ��Ÿ����
	//��° �빮�ڴ� �Դϴ�.
	//int num;
	//printf("������ (0~25)�Է�>>");
	//scanf_s("%d", &num);
	//printf("%d��° �빮�ڴ� %c�Դϴ�.", num, num + 65);

	//3. 
	char b;
	printf("�ҹ��ڸ� �Է��Ͻÿ�>>");
	scanf_s("%c", &b);
	printf("%c", b - 32);
	getchar();
	char c;
	printf("�빮�ڸ� �Է��Ͻÿ�>>");
	scanf_s("%c", &c);
	printf("%c", c + 32);

}
