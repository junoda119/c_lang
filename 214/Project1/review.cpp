#include<stdio.h>
#include<string.h>
int main() {
	//������ ���� �迭
	//1. 50 80 90
	//2. 60 70 70
	//3.70 70 80
	//4. 90 90 100
	int matot=0;
	int score[4][3] = { {50,80,90},{60,70,70},{70,70,80},{90,90,100} };
	for (int i = 0; i <= 3;i++) {
		
			printf("����: %d, eng: %d, math: %d\n", score[i][0], score[i][1], score[i][2]);
			matot += score[i][2];
		
	}
	for (int i= 0;i < 4;i++) {
		printf("%d���� �л�>>", i);
		for (int j; j < 3;j++) {
			if (j == 0) {
				printf("��������:%d", score[i][j]);
			}
			if (j == 1) {
				printf("��������:%d", score[i][j]);
			}
			if (j == 2) {
				printf("��������:%d", score[i][j]);
			}
		}
	}
	printf("���� ���: %.1f\n", matot / 4.0);

	return 0;
}