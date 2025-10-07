#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int factorial (int n)
{
	int res=1;
	int i;
	for (i=1; i<=n; i++)
		res = res *i;
	return res;
}

int combination(int n, int r)
{
	return factorial (n)/ factorial(n-r)/ factorial (r);
}



int main(int argc, char *argv[]) {
	
	int n,r;
	int res;
	printf("Input n and r :");
	scanf ("%d %d", &n, &r);
	
	res=combination(n,r);
	printf("combination result is :%i\n", res);
	return 0;
}
