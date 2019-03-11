#define _CRT_SECURE_NO_WARNINGS
// #pragma warning(disable: 4996)
#include<stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
 {

	int n=1;
	int sum = 0;

	scanf("%d", &n);

	for (int i = 0;i<n;i++) {

		int var=0;
		scanf("%d", &var); //n개의 자연수 입력
		if (var % 5 == 0)
			sum += var;

	}
	printf("%d", sum);

	return 0;
}
