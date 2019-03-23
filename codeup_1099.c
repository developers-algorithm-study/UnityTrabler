#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{

	int arr[10][10];
	int i = 1, j = 1;

	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++)
			scanf("%d", &arr[i][j]);
	}//숫자 입력받기

	while (1) {

		arr[i][j] = 9;

		if (arr[i][j + 1] == 2) {
			arr[i][j + 1] = 9;
			break;
		} // if x앞에 2면 종료

		else if (!arr[i][j + 1]) {
			arr[i][j + 1] = 9;
			j++;
		} // if x앞에 0이면

		else if (arr[i][j + 1]) {

			if (arr[i + 1][j] == 2) {
				arr[i + 1][j] = 9;
				break;
			} // if y앞에 2면 종료

			else if (!arr[i + 1][j]) {
				arr[i + 1][j] = 9;
				i++;
			} // if y앞에 0이면

			else if (arr[i][j + 1]) {
				break;
			} // if y앞에 1이면

		} // if x앞에 1이면

	}

	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++)
			printf("%d ", arr[i][j]);
		printf("\n");
	}//숫자 출력

	return 0;
}
