#include <stdio.h>
# include <stdlib.h>

int fun(int, int);
int main(void) {
	int a, b;
	int c;
	printf("叫块ㄢ俱计―程そ计:");
	scanf_s("%d %d", &a, &b);
	printf("程そ计:%d\n", fun(a, b));

	system("pause");
}
int fun(int a, int b)
{
	int num = a * b;
	int x;

	while (a > 0 && b > 0) {

		if (a > b)
			a = a % b;
		else
			b = b % a;
	}
	if (a == 0)
	{

		x = num / b;
		return x;
	}
	else {

		x = num / a;
		return x;
	}
}

