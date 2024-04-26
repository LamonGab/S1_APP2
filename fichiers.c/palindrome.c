#include <stdio.h>
int palindrome(char mot[1024]);
char ligne[]="-----------------------------------------------------------------------------------";

int main(void)
{
	printf("\t\t%s\n", ligne);
	printf("\t\t\t\t\t\t***TEST VALIDATION***\t\t\n");
	printf("\t-----%s-----------\n", ligne);
	printf("\tMots utilisees\t\tResultats attendus\t\tResultats obtenus\tValidation\n");
	printf("\t-----%s-----------\n", ligne);
	printf("(1)\t    kayakp\t\t\t%d\t\t\t       %d\t\t  ", 0, palindrome("kayakp"));
	if(palindrome("kayakp")==0)
	{
		printf("Succes\n");
	}
	else
	{
		printf("Echouee\n");
	}
	printf("(2)\t    qwertyytrewq\t\t%d\t\t\t       %d\t\t  ", 1, palindrome("qwertyytrewq"));
	if(palindrome("qwertyytrewq")==1)
	{
		printf("Succes\n");
	}
	else
	{
		printf("Echouee\n");
	}
	printf("(3)\t    ertannapov\t\t\t%d\t\t\t       %d\t\t  ", 0, palindrome("ertannapov"));
	if(palindrome("ertannapov")==0)
	{
		printf("Succes\n");
	}
	else
	{
		printf("Echouee\n");
	}
	printf("(4)\t    anna\t\t\t%d\t\t\t       %d\t\t  ", 1, palindrome("anna"));
	if(palindrome("anna")==1)
	{
		printf("Succes\n");
	}
	else
	{
		printf("Echouee\n");
	}
	printf("(5)\t    Kayak\t\t\t%d\t\t\t       %d\t\t  ", 1, palindrome("Kayak"));
	if(palindrome("ertannapov")==1)
	{
		printf("Succes\n");
	}
	else
	{
		printf("Echouee\n");
	}
}

int palindrome(char mot[1024])
{
	int i=0, longueurListe=0, Validation=1;
	while(mot[i]!='\0')
	{
		longueurListe=longueurListe+1;
		i=i+1;
	}
	for(int i=0; i<=longueurListe/2; i++)
	{
		if(mot[i]!=mot[longueurListe-(i+1)])
		{
			Validation=0;
		}
	}
	return Validation;
}
