#include <stdio.h>

int main() {
	int N, K;
	int coin[11];
	int cnt = 0;
	scanf_s("%d %d", &N, &K);

	
	for (int i = 1; i <= N; i++) {
		scanf_s("%d", &coin[i]);
	}

	for (int i = N; i >= 1; i--) {
		cnt += K / coin[i];
		K %= coin[i];
	}
	printf("count = %d", cnt);
}
