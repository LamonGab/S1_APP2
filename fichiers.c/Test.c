#include <stdio.h>
#define Taille 11

float fahrenheit=45;
char ligne[]="-----------------------------------------------------------------------------------";

float conversion_f_en_c(float fahrenheit, float Celsius[Taille]);

int main(void)
{
	float Celsius[Taille];
	Celsius[Taille]=conversion_f_en_c(fahrenheit, Celsius);
	printf("\t\t%s\n", ligne);
	printf("\t\t\t\t\t\t***TABLEAU DE CONVERSION***\t\t\n");
	printf("\t-----%s-----------\n", ligne);
	printf("\t\t\t\t\t     Fahrenheit\t\t      Celsius\t\n");
	printf("\t-----%s-----------\n", ligne);
	printf("\t\t\t\t\t\t %0.0f\t\t       %0.2f\n", fahrenheit-5, Celsius[0]);
	printf("\t\t\t\t\t\t %0.0f\t\t       %0.2f\n", fahrenheit-4, Celsius[1]);
	printf("\t\t\t\t\t\t %0.0f\t\t       %0.2f\n", fahrenheit-3, Celsius[2]);
	printf("\t\t\t\t\t\t %0.0f\t\t       %0.2f\n", fahrenheit-2, Celsius[3]);
	printf("\t\t\t\t\t\t %0.0f\t\t       %0.2f\n", fahrenheit-1, Celsius[4]);
	printf("\t\t\t\t\t\t %0.0f\t\t       %0.2f\n", fahrenheit, Celsius[5]);
	printf("\t\t\t\t\t\t %0.0f\t\t       %0.2f\n", fahrenheit+1, Celsius[6]);
	printf("\t\t\t\t\t\t %0.0f\t\t       %0.2f\n", fahrenheit+2, Celsius[7]);
	printf("\t\t\t\t\t\t %0.0f\t\t       %0.2f\n", fahrenheit+3, Celsius[8]);
	printf("\t\t\t\t\t\t %0.0f\t\t       %0.2f\n", fahrenheit+4, Celsius[9]);
	printf("\t\t\t\t\t\t %0.0f\t\t      %0.2f\n", fahrenheit+5, Celsius[10]);
}

float conversion_f_en_c(float fahrenheit, float Celsius[Taille])
{
	float celsius;
	int compteur=0;
	for(float valeurFar=fahrenheit-5; valeurFar<=fahrenheit+5; valeurFar++)
	{
		celsius=5*(valeurFar-32)/9;
		Celsius[compteur]=celsius;
		compteur=compteur+1;
	}
	return Celsius[0];
}
