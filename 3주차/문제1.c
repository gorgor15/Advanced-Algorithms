#include <stdio.h>

int n, k;
int result;
int main(void) {
	scanf_s("%d %d", &n, &k);
	while (1) {
		int target = (n / k) * k;
		result += (n - target);
		n = target;
		if (n < k) break;
		result++;
		n /= k;
	}
	result += (n - 1);
	printf("%d", result);
	return 0;
}