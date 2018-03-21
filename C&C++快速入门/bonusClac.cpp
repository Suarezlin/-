#include <cstdio>

int main() {
	double profit;
	scanf("%lf", &profit);
	double salary;
	if (profit <= 100000) salary = profit * 0.1;
	else if (100000 < profit && profit <= 200000) {
		salary = 10000 + (profit - 100000) * 0.075;
	} else if (200000 < profit && profit <= 400000) {
		salary = 10000 + 7500 + (profit - 200000) * 0.05;
	} else if (400000 < profit && profit <= 600000) {
		salary = 10000 + 7500 + 10000 + (profit - 400000) * 0.03;
	} else if (600000 < profit && profit <= 1000000) {
		salary = 10000 + 7500 + 10000 + 6000 + (profit - 600000) * 0.015;
	} else {
		salary = 10000 + 7500 + 10000 + 6000 + 6000 + (profit - 1000000) * 0.01;
	}
	printf("%.2f\n", salary);
	return 0;
}