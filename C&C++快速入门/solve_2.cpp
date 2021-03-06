#include <cstdio>
#include <math.h>

int main() {
	double a, b, c;
	scanf("%lf %lf %lf", &a, &b, &c);
	if (b*b - 4*a*c < 0) printf("No real roots!\n");
	else {
		double r1 = (-b + sqrt(b*b - 4*a*c))/(2*a);
		double r2 = (-b - sqrt(b*b - 4*a*c))/(2*a);
		printf("r1=%7.2f\n", r1);
		printf("r2=%7.2f\n", r2);
	}
	return 0;
}