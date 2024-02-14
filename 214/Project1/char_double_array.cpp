#include<stdio.h>
#include<string.h>
int main() {
	
	char menu[3][20] = {
		0
		};
	for (int i = 0;i <= 2;i++) {
		printf("%d번째 메뉴 입력하시오>>",i+1);
		scanf_s("%s", menu[i], sizeof(menu[i]));
	}
	for (int i = 0;i <= 2;i++) {
		printf("%d번째 메뉴: %s",i+1, menu[i]);
	}
	
	return 0;
}