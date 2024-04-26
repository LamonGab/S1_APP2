// Fichier: formatif.c
// Auteur: Gabriel Lamontagne (lamg0502)
// Date: 2022/10/05
// Description: Examen formatif GEN146

#include <stdio.h>

//Options utilisees dans le menu
#define CONVERSION_F_EN_C   1
#define INVERSER            2
#define PLONGEURS           3
#define EST_TRIANGULAIRE    4
#define SORTIR              5
#define Taille			   11

/********************************************************************
 * Vous devez programmer vos fonctions dans cette section du programme
 * *******************************************************************/

void conversion_f_en_c(float fahrenheit)
{
	float celsius;
	printf("\t\t     Fahrenheit\t\t      Celsius\t\n");
	for(float i=fahrenheit-5; i<=fahrenheit+5; i++)
	{
		celsius=5*(i-32)/9;
		printf("\t\t\t %.0f\t\t       %.2f\n", i, celsius);
	}
	return;
}

void inverser_chaine(char chaine[], char chaine_inversee[])
{
	int n=-1;
	for(int j=0; chaine[j]!='\0'; j++)
	{
		n=n+1;
	}
	for(int i=0; i<=n; i++)
	{
		chaine_inversee[n-i]=chaine[i];
	}
	chaine_inversee[n+1]='\0';
	return;
}

int vainqueur(int juge1[12], int juge2[12], int juge3[12])
{
	int tableau[12];
	for(int i=0; i<12; i++)
	{
		tableau[i]=juge1[i]+juge2[i]+juge3[i];
	}
	int gagnant=tableau[0];
	int position_gagnant=0;
	for(int i=1; i<12; i++)
	{
		if(tableau[i]>gagnant)
		{
			gagnant=tableau[i];
			position_gagnant=i;
		}
	}
	return position_gagnant;
}

int est_triangulaire_superieure(int matrice[4][4])
{
	int m=0, resultat=1;
	for(int i=1; i<4; i++)
	{
		for(int j=0; j<=m; j++)
		{
			if(matrice[i][j]!=0)
			{
				resultat=0;
			}
		}
		m=m+1;
	}
	return resultat;
}

/***********************************************************************************
 * Fonction main(), ne rien changer Ã  partir de cette ligne
 ***********************************************************************************/
int main(void)
{
    int choix = 0;

    //Variables de test pour l'inversion de chaines
	char chaine1[100] = "Bonjour le monde!";
	char chaine_retournee[100];
	char chaine2[100] = "Voici un texte qu'on va inverser!";

    //Variables pour la fonction de plongeurs
    int juge1[12] = { 6, 8, 5, 8, 1, 9, 10, 8, 7, 6, 5, 9 };
    int juge2[12] = { 8, 8, 6, 7, 3, 8, 10, 9, 8, 7, 6, 8 };
    int juge3[12] = { 8, 8, 6, 7, 2, 10, 8, 7, 7, 7, 6, 7 };
    int le_vainqueur=0;

    //Variables pour le test de matrice superieure
    int matrice1[4][4] = { { 7, 9, 2, 8 }, { 0, 7, 4, 6 }, 
                           { 0, 0, 6, 4 }, { 0, 0, 0, 2 } };
    int matrice2[4][4] = { { 8, 4, 3, 4 }, { 0, 7, 1, 1 }, 
                           { 0, 0, 6, 1 }, { 4, 0, 0, 2 } };
    int resultat;

	// Afficher le menu tant que l'option 9 (Sortir) n'a pas ete selectionne
	while (choix != SORTIR)
	{
	    printf ("\n");
		printf ("------------------------------------------------------\n");
		printf ("Examen formatif GEN143\n");
		printf ("------------------------------------------------------\n");
		printf ("\n");
		printf ("1. Conversion F en C\n");
		printf ("2. Inverser\n");
		printf ("3. Plongeurs\n");
		printf ("4. Est Triangulaire\n");
		printf ("5. Sortir\n");
		printf ("\n");
		printf ("Veuillez entrer votre selection: ");

        scanf("%d", &choix);
		printf ("\n");	// saut de ligne... formatage seulement
		switch (choix)
		{
		   case CONVERSION_F_EN_C: 
		           //Premier test
		           printf("\nPremier test\n");
                   conversion_f_en_c(45);

		           //Deuxieme test
		           printf("\nDeuxieme test\n");		           
                   conversion_f_en_c(0);

		           //Troisieme test
		           printf("\nTroisieme test\n");		           
                   conversion_f_en_c(-25);
                break;
                
			
            case INVERSER:
		           //Premier test
	               inverser_chaine(chaine1, chaine_retournee);
	               printf("Originale: %s\n", chaine1);
	               printf("Inversee:  %s\n", chaine_retournee);

		           //Premier test
	               inverser_chaine(chaine2, chaine_retournee);
	               printf("Originale: %s\n", chaine2);
	               printf("Inversee:  %s\n", chaine_retournee);
		        break;							

           case PLONGEURS: 
                   //Premier test
                   le_vainqueur = vainqueur(juge1, juge2, juge3);
                   printf("Le vainqueur est a la position: %d\n", le_vainqueur);
		        break;
 
           case EST_TRIANGULAIRE:
                  //Premier test
                  resultat = est_triangulaire_superieure(matrice1);
                  if (resultat==1)
                     printf ("La matrice est triangulaire superieure\n"); 
                  else
                     printf ("La matrice n'est pas triangulaire superieure\n");

                  //Deuxieme test
                  resultat = est_triangulaire_superieure(matrice2);
                  if (resultat==1)
                      printf("La matrice est triangulaire superieure\n");
                  else
                      printf ("La matrice n'est pas triangulaire superieure\n");




		        break;		
		                         
           case SORTIR:
			    return 0;
			    break;			

		default:
			printf ( "Choix invalide!\n");
			printf ( "Veuillez entrer une valeure entre 1 et 5 correspondant a votre choix.\n");
			printf ( "\n");
		}

	}
	return 0;
}			
