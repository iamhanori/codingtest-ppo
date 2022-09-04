#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

long long solution(int a, int b) {
	long long answer = 0;

	if (a < b) {
		for (a; a <= b; a++) {
			answer += a;
		}
	}
	else if (b < a) {
		for (b; b <= a; b++) {
			answer += b;
		}
	}
	else {
		answer = a;
	}
	return answer;
}

int main(void) {
	// lli: longlong 10진수로 출력 
	printf("%lli\n", solution(3, 5));

	return 0;
}