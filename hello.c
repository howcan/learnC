#include <stdio.h>

void change(int *x);

int main()
{
	int x = 10;
	change(&x);
	if (x > 50)
	{
		printf("x的值大于50\n");
	}
	printf("x=%d\n", x);
	return 0;
}


void change(int *x)
{
	*x = 100;
}
