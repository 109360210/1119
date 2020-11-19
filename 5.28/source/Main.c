#include<stdio.h>
int fun(char);
int main()

{
	char x;
	printf("½Ð¿é¤J¦r¥À:");
	scanf_s("%c", &x);
	printf("%c\n", fun(x));
	system("pause");

	

}
int fun(char b)
{
	int I = 2;

	while (I)

	{

		

		

		if (b >= 'A' && b <= 'Z')

		{

			b = b + 32;

			return b;

		}

		else if (b >= 'a' && b <= 'z')

		{

			b = b - 32;

			return b;

		}

	}

	
}