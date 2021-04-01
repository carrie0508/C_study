#include <stdio.h>
int main() {
	int a;
	float b;
	const float c = 3.141592;
	b = 3.14;
	printf("%f\n", b);
	printf("%.3f\n", c);
	scanf_s("%d", &a);
	a = a << 3;
	printf("a=%d\n", a);

}

