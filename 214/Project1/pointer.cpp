#include<stdio.h>
int main() {
	//int a = 1;//[컴퓨터: 연산(cpu), 기억(ram)}
	
	//&(주소 연산자):변수의 주소를 알려줌
	//*(포인터{간접찬조}연산자):주소값을 줘봐,거기에 담긴 값을 읽을게
	//메모리: 프로그램이 데이터를 저장하는 장소
	//주소: 메모리 내 각 바이트에는 고유한 주소가 있습니다.이 주소를 통해 데이터에 접근할 수 있습니다.
	//포인터 정의 : 포인터는 메모리 주소를 저장하는 변수입니다.다시말해 , 포인터는 다른 변수의 메모리 주소를 가르키는 변수입니다.
	//포인터 선언: int *ptr;와 같이 선언합니다. 여기서 int *는 ptr이 nt 형데이터를 가르키는 포인터임을 암시
	//포인터 사용: 포인터를 사용하여 메모리 특정 위치에 접근하거나 그위치의 데이터를 변경할 수 있습니다.
	//&(주소연산자)
	//변수 앞에 사용되어 그 변수의 메모리 주소를 반환
	//포인터는 메모리 주소를 저장하는데 사용
	/*int* pa;
	pa = &a;
	printf("%d", *pa);
	*pa = 7;
	printf("%d", a);*/
	int m = 20;
	int* pm;
	pm = &m;
	printf("m의 값은: %d", m);
	printf("pm이 가르키는 주솟값은: %d", pm);
	printf("pm이 가르키는 포인터값%d",*pm);

	return 0;
}