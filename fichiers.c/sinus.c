#include <stdio.h>
float Puissance(float argument, float exposant);
float Factorielle(float n);
float Sinus(float argument);
float Pi=3.14159265359;
float Pi2=(3.14159265359/4);
float Pi3=(3.14159265359/2);
float h=1, k=0;
char ligne[]="-----------------------------------------------------------------------------------";

int main(void)
{
	float valeur1=Pi, valeur2=60, valeur3=-20, valeur4=0.5642, valeur5=0.0002;
	printf("\t\t%s\n", ligne);
	printf("\t\t\t\t\t\t***TEST VALIDATION***\t\t\n");
	printf("\t-----%s-----------\n", ligne);
	printf("\t\tValeurs utilisees\tResultats attendus\tResultats obtenus\tValidation\n");
	printf("\t-----%s-----------\n", ligne);
	printf("(1)\t\t    %0.4f\t\t     %0.4f\t\t     %0.4f\t\t  ", valeur1, 0.0000, Sinus(valeur1));
	if(Sinus(valeur1)==0.0000)
	{
		printf("Succes\n");
	}
	else
	{
		printf("Echouee\n");
	}
	printf("(2)\t\t    %0.4f\t\t    %0.4f\t\t     %0.4f\t\t  ", valeur2, -0.3048, Sinus(valeur2));
	if(Sinus(valeur2)>=-0.30485 && Sinus(valeur2)<=-0.30484)
	{
		printf("Succes\n");
	}
	else
	{
		printf("Echouee\n");
	}
	printf("(3)\t\t   %0.4f\t\t    %0.4f\t\t    %0.4f\t  ", valeur3, -0.9129, Sinus(valeur3));
	if(Sinus(valeur3)>=-0.91285 && Sinus(valeur3)<=-0.91294)
	{
		printf("Succes\n");
	}
	else
	{
		printf("Echouee\n");
	}
	printf("(4)\t\t    %0.4f\t\t     %0.4f\t\t     %0.4f\t\t  ", valeur4, 0.5347, Sinus(valeur4));
	if(Sinus(valeur4)>=0.53465 && Sinus(valeur4)<=0.53474)
	{
		printf("Succes\n");
	}
	else
	{
		printf("Echouee\n");
	}
	printf("(5)\t\t    %0.4f\t\t     %0.4f\t\t     %0.4f\t\t  ", valeur5, 0.0002, Sinus(valeur5));
	if(Sinus(valeur5)>=0.00015 && Sinus(valeur5)<=0.00024)
	{
		printf("Succes\n");
	}
	else
	{
		printf("Echouee\n");
	}
}

float Puissance(float argument, float exposant)
{
	float puissance=1;
	for(int compteur=1; compteur<=exposant; compteur++)
	{
		puissance=puissance*argument;
	}
	return puissance;
}

float Factorielle(float n)						//n un nombre entier qui représente le nombre du factoriel
{
	float facto=1;
	if(n>=1)
	{
		for(int compteur=1; compteur<=n; compteur++)
		{
			facto=facto*compteur;
		}
	}
	else if(n==0)
	{
		facto=1;
	}
	else
	{
		facto=-1;
	}
	return facto;
}

float Sinus(float argument)
{
	float Somme=0;
	if(argument>2*Pi)
	{
		argument=argument-2*Pi;
	}
	else
	{
		for(int i=0; i<=4; i++)
		{
			Somme=Somme+(Puissance(-1, i)*Puissance(argument, 2*i+1))/Factorielle(2*i+1);
		}
	}
	return Somme;
}
