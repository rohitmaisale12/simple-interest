//calculation for simple interest//
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int P, R, T;
	printf("enter the value of P r t");
	scanf("%d:%d:%d", &P,&R,&T);
	int I = P * R * T;
	printf("simple interest=%d\n", I);
	return 0;
}
