# include <stdio.h>
#include <stdlib.h>

int fun(int, int);
void main(void)
{
	int b, d;
	printf("請輸入指數與底數:");
	scanf_s("%d%d", &b, &d);
	printf("%d的%d次方=%d\n", d, b, fun(d,b));
	system("pause");
}

int fun(int a,int c)
{
	int i;
	int x = 1;
	for (i = 0;i < c;i++)
		x = x * a;
	return x;
}