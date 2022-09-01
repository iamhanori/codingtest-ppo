#include <stdio.h>

int main(void)
{
	int sum = 0;

	printf("1000보다 작은 자연수 중에서 3 또는 5의 배수\n");
	for (int i = 0; i < 1000; i++) {
		if ((i % 3 == 0) || (i % 5 == 0)) {
			printf("%d ", i);
			sum += i;
		}
	}
	printf("\n");
	printf("합 : %d\n", sum);

	return 0;
}