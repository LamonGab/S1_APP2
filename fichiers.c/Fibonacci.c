#include <stdio.h>
int Fibonacci(int n)
{
	int Somme=0, x=1, y=0;
	if(n>1)
	{
		for(int i=1; i<n; i++)
		{
			printf("%d\n", Somme);
			y=Somme;
			Somme=Somme+x;
			x=y;
		}
	}
	else if(n<0)
	{
		printf("Ça existe pas un nombre de termes negatif epais\n");
	}
	else
	{
		return 0;
	}
	return Somme;
}

int main(void)
{
	int n;
	printf("Entrez le nombre de termes de la suite de fibonacci que vous voulez avoir\t");
	scanf("%d", &n);
	printf("%d", Fibonacci(n));
}
