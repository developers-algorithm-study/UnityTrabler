#define _CRT_SECURE_NO_WARNINGS_
#include <stdio.h>

int main(void) {

	int arr[6][6];
	int count = 1;
	int flat = -1;
	int max = 5;

	int i= -1, j = 0;

	int p;

	for (int i = 0; i < 5; i++) {

		for (int j = 0; j < 5; j++) {
			arr[i][j] = 0;
		}
	}

	while (1) {

		flat = -1*flat;

		for (p = 0; p < max; p ++) {
			i += flat;
			arr[i][j] = count;
			count++;


		}
		max--;
		if (max<0)
			break;

		for (p = 0; p < max;p++) {
			j += flat;
			arr[i][j] = count;
			count++;
		}

	} //대입

	for (int i = 0; i < 5; i++) {

		for (int j = 0; j < 5; j++) {
			printf("%d  ", arr[i][j]);
		}
		printf("\n");
	}//출력

}
