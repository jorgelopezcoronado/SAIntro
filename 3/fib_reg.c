#include <stdio.h>

int main()
{
	int a = 0;
	int b = 1;
	int F = 0;
	int i = 1;	
	int n;

	scanf("%u", &n);

	if (n == 0) goto end;
	if (n == 1) goto one;
func:	if (i == n) goto end;
		F = a+b;
		a = b;
		b = F;
		i = i + 1;
	goto func;
one: 
	F = 1;

end:
	printf("Fib(%i) = %i\n", n, F);	
	
}
