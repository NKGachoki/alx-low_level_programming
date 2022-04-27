#include <stdio.h>

int main(void)
{
	int n = '0';
	

	while (n <= '9')
	{
		while (n != 2 && n != 4)
		{
			putchar(n);
		}
		putchar(n);
		n++;
	}
	return (0);
}
