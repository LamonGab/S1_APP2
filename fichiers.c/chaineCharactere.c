#include <stdio.h>
int rechercheCaractere(char mot[1024], char lettre[1]);
char ligne[]="-----------------------------------------------------------------------------------";

int main(void)
{
	printf("\t\t%s\n", ligne);
	printf("\t\t\t\t\t\t***VALIDATION TEST***\t\t\n");
	printf("\t-----%s-----------\n", ligne);
	printf("\t Mots utilisees\t  Lettres recherchees\tResultats attendus\tResultats obtenus\tValidation\n");
	printf("\t-----%s-----------\n", ligne);
	printf("(1)anticonstitutionnellement\t  t\t\t\t %d\t\t\t%d\t\t  ", 2, rechercheCaractere("anticonstitutionnellement", "t"));
	if(rechercheCaractere("anticonstitutionnellement", "t")==2)
	{
		printf("Succes\n");
	}
	else
	{
		printf("Echouee\n");
	}
	printf("(2)\t    bonjour\t\t  y\t\t\t%d\t\t       %d\t\t  ", -1, rechercheCaractere("bonjour", "y"));
	if(rechercheCaractere("bonjour", "y")==-1)
	{
		printf("Succes\n");
	}
	else
	{
		printf("Echouee\n");
	}
	printf("(3)\t    bonjour\t\t  b\t\t\t %d\t\t\t%d\t\t  ", 0, rechercheCaractere("bonjour", "b"));
	if(rechercheCaractere("bonjour", "b")==0)
	{
		printf("Succes\n");
	}
	else
	{
		printf("Echouee\n");
	}
	printf("(4)\tallocommentcava\t\t  v\t\t\t %d\t\t\t%d\t\t  ", 13, rechercheCaractere("allocommentcava", "v"));
	if(rechercheCaractere("allocommentcava", "v")==13)
	{
		printf("Succes\n");
	}
	else
	{
		printf("Echouee\n");
	}
	printf("(5)anticonstitutionnellement\t  m\t\t\t %d\t\t\t%d\t\t  ", 21, rechercheCaractere("anticonstitutionnellement", "m"));
	if(rechercheCaractere("anticonstitutionnellement", "m")==21)
	{
		printf("Succes\n");
	}
	else
	{
		printf("Echouee\n");
	}
}

int rechercheCaractere(char mot[1024], char lettre[1])
{
	int position=1;
	for(int i=0; mot[i]!='\0' && position!=i; i++)
	{
		if(mot[i]==lettre[0])
		{
			position=i+1;
		}
		else
		{
			position=0;
		}
	}
	return position-1;
}
