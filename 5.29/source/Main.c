#include <stdio.h>
# include <stdlib.h>

int fun(int, int);
int main(void) {
	int a, b;
	int c;
	printf("�п�J��Ӿ�ƨD�̤p������:");
	scanf_s("%d %d", &a, &b);
	printf("�̤p�����Ƭ�:%d\n", fun(a, b));

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

