#include <stdio.h>

int main(void)
{
	int sum = 0;

	printf("1000���� ���� �ڿ��� �߿��� 3 �Ǵ� 5�� ���\n");
	for (int i = 0; i < 1000; i++) {
		if ((i % 3 == 0) || (i % 5 == 0)) {
			printf("%d ", i);
			sum += i;
		}
	}
	printf("\n");
	printf("�� : %d\n", sum);

	return 0;
}