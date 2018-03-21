#include <cstdio>

int testFcn(int a) {
	return a + a;
}

int main() {
	int array[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	for (int i = 0; i < 10; i++) {
		printf("%d\n", array[i]);
	}
	printf("%d\n", testFcn(array[2]));
	return 0;
}
