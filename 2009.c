#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {

	int N, K;

	scanf("%d %d", &N, &K);
	if(N && K)
	printf("%d", (N-1) / (K-1) );
	else
	printf("%d",0);


	return 0;
}
