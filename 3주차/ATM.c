#include<stdio.h>
#include<stdlib.h>
int compare(const void* one, const void* two) {
	if (*(int*)one > * (int*)two)
		return 1;
	else if (*(int*)one < *(int*)two)
		return -1;
	else return 0;
}
int main() {
	int i, n, min = 0, sum = 0, p[1000] = { 0, };
	scanf_s("%d", &n);
	for (i = 0; i < n; i++)
		scanf_s("%d", &p[i]);
	qsort(p, n, sizeof(int), compare);
	for (i = 0; i < n; ++i) {
		min += p[i];
		sum += min;
	}
	printf("%d", sum);
	return 0;
}