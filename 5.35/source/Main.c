#include <stdio.h>
#include<stdlib.h>

int fun( int);
void main(void)
{
	int k;
		printf("請輸入斐波那契數列的項數:");
		scanf_s("%d", &k);
	printf("%d", fun(k));
	system("pause");
}

int fun(int y)
{
	

		int i, c, z;
		int a = 0;
		int b = 1;
		if (y == 1)
		{
			return 0;
		}
		else if (y == 2)
		{
			printf("%d ",a);
			return 1;
		}
		else if (y < 0)
		{
			
			printf("不存在");
		}
		else
		{
			z = y - 3;
			printf("%d ", a);
			printf("%d ", b);
			for (i = 0;i < z;i++)
			{
				c = a + b;
				printf("%d ", c);

				a = b;
				b = c;
			}
			c = a + b;
			return c;
		}
}