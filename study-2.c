#include <stdio.h>

int main()
{
	int a ;
	int b ;
	int result = 0 ;
	char op;

	scanf("%d %c %d", &a, &op, &b);

	if (op == '+'){
		result = a + b;
		printf("%d", result);
	}

	else if(op=='-') {
		result = a - b;
		printf("%d", result);
	}

	else if (op == '*') {
		result = a * b;
		printf("%d", result);
	}

	else if (op == '/') {
		result = a / b;
		printf("%d", result);
	}

	
	
}