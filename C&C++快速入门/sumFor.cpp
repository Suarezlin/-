#include <cstdio>

int main() {
	int i = 1, sum = 0;
	for (i = 1; i < 101; i++) sum += i;
	printf("%d\n", sum);
	return 0;
}