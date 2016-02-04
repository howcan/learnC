#include <stdio.h>

void change(int *x);

int main()
{
	int x = 10;
	change(&x);
	printf("x=%d\n", x);
	return 0;
}


void change(int *x)
{
	*x = 100;
}
