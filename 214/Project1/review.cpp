#include<stdio.h>
#include<string.h>
int main() {
	//국영수 점수 배열
	//1. 50 80 90
	//2. 60 70 70
	//3.70 70 80
	//4. 90 90 100
	int matot=0;
	int score[4][3] = { {50,80,90},{60,70,70},{70,70,80},{90,90,100} };
	for (int i = 0; i <= 3;i++) {
		
			printf("국어: %d, eng: %d, math: %d\n", score[i][0], score[i][1], score[i][2]);
			matot += score[i][2];
		
	}
	for (int i= 0;i < 4;i++) {
		printf("%d번쨰 학생>>", i);
		for (int j; j < 3;j++) {
			if (j == 0) {
				printf("국어점수:%d", score[i][j]);
			}
			if (j == 1) {
				printf("영어점수:%d", score[i][j]);
			}
			if (j == 2) {
				printf("수학점수:%d", score[i][j]);
			}
		}
	}
	printf("수학 평균: %.1f\n", matot / 4.0);

	return 0;
}