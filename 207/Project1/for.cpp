//���: �ڵ带 ��Ʈ����
//1.���ǹ�(if, switch): ���ǿ� ���� �ڵ���� 
//2.�ݺ���(for,do while): �ڵ带 ������ ����
//for: �ݺ� Ƚ���� ��Ȯ�� ��쿡 ���
// for(�ʱ�ȭ;����;����){
//     �ݺ������� �ڵ�}
// �ʱ�ȭ:�ݺ��� ���ۿ����� ����, �ݺ� ������ �ʱ�ȭ�Ѵ�
// ����: ������ ���ε��� �ݺ�
// ����: �� �ݺ� �Ŀ� ����, ������ ������ ���ҽ�Ŵ
//while: ������ ���ε��� �ݺ�
//do while:�ڵ� ���� ���� �� ���ǹ� Ȯ�� 

#include <stdio.h>
int main() {
	/*
	int a;
	printf("���ڸ� �Է��Ͻÿ�>>");
	scanf_s("%d", &a);
	int tot = 0;
	for (int i = 1;i < a + 1;i++) {
		tot += i;
	}
	printf("%d\n", tot);
	*/
	////1.
	//int a;
	//printf("���ڸ� �Է��Ͻÿ�>>");
	//scanf_s("%d", &a);
	//for (int i = 1;i <= 9;i++) {
	//	printf("%d*%d=%d\n", a, i, a * i);
	//}
	////2.
	//for (int i = 65; i <= 90;i++) {
	//	printf("%c %c\n", i,i+32);
	//}
	//for (int i = 1;i < a + 1;i++) {
	//	break;//for�� Ż��
	//	continue;//for�� ����
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
	//1eks~9�� ��� ���α׷�
	for (int i = 1;i <= 9;i++) {
		for (int j = 1;j <= 9;j++) {
			printf("%d*%d=%d\n", i, j, i * j);
		}
}
	return 0;
}