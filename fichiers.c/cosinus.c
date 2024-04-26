#include <stdio.h>
float Puissance(float argument, float exposant);
float Factorielle(float n);
float Cosinus(float argument);
float Pi=3.14159265359;
float Pi2=(3.14159265359/4);
float Pi3=(3.14159265359/2);
int h=1, k=0;
char ligne[]="-----------------------------------------------------------------------------------";

int main(void)
{
	float valeur1=Pi, valeur2=37, valeur3=-58, valeur4=0.2847, valeur5=0.0005;
	printf("\t\t%s\n", ligne);
	printf("\t\t\t\t\t\t***TEST VALIDATION***\t\t\n");
	printf("\t-----%s-----------\n", ligne);
	printf("\t\tValeurs utilisees\tResultats attendus\tResultats obtenus\tValidation\n");
	printf("\t-----%s-----------\n", ligne);
	printf("(1)\t\t    %0.4f\t\t    %0.4f\t\t    %0.4f\t\t  ", valeur1, -1.0000, Cosinus(valeur1));
	if(Cosinus(valeur1)==-1.0000)
	{
		printf("Succes\n");
	}
	else
	{
		printf("Echouee\n");
	}
	printf("(2)\t\t    %0.4f\t\t     %0.4f\t\t     %0.4f\t\t  ", valeur2, 0.7654, Cosinus(valeur2));
	if(Cosinus(valeur2)>=0.76535 && Cosinus(valeur2)<=0.76544)
	{
		printf("Succes\n");
	}
	else
	{
		printf("Echouee\n");
	}
	printf("(3)\t\t   %0.4f\t\t     %0.4f\t\t     %0.4f\t\t  ", valeur3, 0.1192, Cosinus(valeur3));
	if(Cosinus(valeur3)>=0.11915 && Cosinus(valeur3)<=0.11924)
	{
		printf("Succes\n");
	}
	else
	{
		printf("Echouee\n");
	}
	printf("(4)\t\t    %0.4f\t\t     %0.4f\t\t     %0.4f\t\t  ", valeur4, 0.9597, Cosinus(valeur4));
	if(Cosinus(valeur4)>=0.95965 && Cosinus(valeur4)<=0.95974)
	{
		printf("Succes\n");
	}
	else
	{
		printf("Echouee\n");
	}
	printf("(5)\t\t    %0.4f\t\t     %0.4f\t\t     %0.4f\t\t  ", valeur5, 1.0000, Cosinus(valeur5));
	if(Cosinus(valeur5)>=0.99995 && Cosinus(valeur5)<=1.00004)
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
		for(int compteur=1; compteur<n+1; compteur++)
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

float Cosinus(float argument)
{
	float Somme=0;
	if(argument>Pi)
	{
		argument=argument-Pi;
	}
	else if(argument<-Pi)
	{
		argument=argument+Pi;
	}
	else
	{
		for(int i=0; i<=4; i++)
		{
			Somme=Somme+(Puissance(-1, i)*Puissance(argument, 2*i))/Factorielle(2*i);
		}
	}
	return Somme;
}
