#include <stdio.h>
int sommeMatrice(int Matrice1[3][2], int Matrice2[3][2], int Addition[3][2]);
int m=3, n=2;
char ligne[]="-----------------------------------------------------------------------------------";

int main(void)
{
	int Matrice1[3][2]={{1,1},{1,1},{1,1}};
	int Matrice2[3][2]={{-1,-1},{-1,-1},{-1,-1}};
	int Addition[3][2];
	Addition[3][2]=sommeMatrice(Matrice1, Matrice2, Addition);
	printf("\t\t%s\n", ligne);
	printf("\t\t\t\t\t\t***TEST VALIDATION***\t\t\n");
	printf("\t-----%s-----------\n", ligne);
	printf("\t\tMatrices utilisees\tMatrice attendue\tMatrice obtenue\t\tValidation\n");
	printf("\t-----%s-----------\n", ligne);
	printf("(1)\t\t|%d  %d| \t  |%d  %d|\t     |%d  %d|\t\t    |%d  %d|\t\t  ", Matrice1[0][0], Matrice1[0][1], Matrice2[0][0], Matrice2[0][1], 0, 0, Addition[0][0], Addition[0][1]);
	if(Addition[0][0]==0 && Addition[0][1]==0)
	{
		printf("Succes\n");
	}
	else
	{
		printf("Echouee\n");
	}
	printf("\t\t|%d  %d| et |%d  %d|\t     |%d  %d|\t\t    |%d  %d|\t\t  ", Matrice1[1][0], Matrice1[1][1], Matrice2[1][0], Matrice2[1][1], 0, 0, Addition[1][0], Addition[1][1]);
	if(Addition[1][0]==0 && Addition[1][1]==0)
	{
		printf("Succes\n");
	}
	else
	{
		printf("Echouee\n");
	}
	printf("\t\t|%d  %d| \t  |%d  %d|\t     |%d  %d|\t\t    |%d  %d|\t\t  ", Matrice1[2][0], Matrice1[2][1], Matrice2[2][0], Matrice2[2][1], 0, 0, Addition[2][0], Addition[2][1]);
	if(Addition[2][0]==0 && Addition[2][1]==0)
	{
		printf("Succes\n\n");
	}
	else
	{
		printf("Echouee\n\n");
	}
	int Matrice3[3][2]={{1,1},{1,1},{1,1}};
	int Matrice4[3][2]={{0,0},{0,0},{0,0}};
	int Addition2[3][2];
	Addition2[3][2]=sommeMatrice(Matrice3, Matrice4, Addition2);
	printf("(2)\t\t|%d  %d| \t  |%d  %d|\t     |%d  %d|\t\t    |%d  %d|\t\t  ", Matrice3[0][0], Matrice3[0][1], Matrice4[0][0], Matrice4[0][1], 1, 1, Addition2[0][0], Addition2[0][1]);
	if(Addition2[0][0]==1 && Addition2[0][1]==1)
	{
		printf("Succes\n");
	}
	else
	{
		printf("Echouee\n");
	}
	printf("\t\t|%d  %d| et |%d  %d|\t     |%d  %d|\t\t    |%d  %d|\t\t  ", Matrice3[1][0], Matrice3[1][1], Matrice4[1][0], Matrice4[1][1], 1, 1, Addition2[1][0], Addition2[1][1]);
	if(Addition2[1][0]==1 && Addition2[1][1]==1)
	{
		printf("Succes\n");
	}
	else
	{
		printf("Echouee\n");
	}
	printf("\t\t|%d  %d| \t  |%d  %d|\t     |%d  %d|\t\t    |%d  %d|\t\t  ", Matrice3[2][0], Matrice3[2][1], Matrice4[2][0], Matrice4[2][1], 1, 1, Addition2[2][0], Addition2[2][1]);
	if(Addition2[2][0]==1 && Addition2[2][1]==1)
	{
		printf("Succes\n\n");
	}
	else
	{
		printf("Echouee\n\n");
	}
	int Matrice5[3][2]={{-1,-1},{-1,-1},{-1,-1}};
	int Matrice6[3][2]={{0,0},{0,0},{0,0}};
	int Addition3[3][2];
	Addition3[3][2]=sommeMatrice(Matrice5, Matrice6, Addition3);
	printf("(3)\t\t|%d  %d|    |%d  %d|\t     |%d  %d|\t\t    |%d  %d|\t\t  ", Matrice5[0][0], Matrice5[0][1], Matrice6[0][0], Matrice6[0][1], -1, -1, Addition3[0][0], Addition3[0][1]);
	if(Addition3[0][0]==-1 && Addition3[0][1]==-1)
	{
		printf("Succes\n");
	}
	else
	{
		printf("Echouee\n");
	}
	printf("\t\t|%d  %d| et |%d  %d|\t     |%d  %d|\t\t    |%d  %d|\t\t  ", Matrice5[1][0], Matrice5[1][1], Matrice6[1][0], Matrice6[1][1], -1, -1, Addition3[1][0], Addition3[1][1]);
	if(Addition3[1][0]==-1 && Addition3[1][1]==-1)
	{
		printf("Succes\n");
	}
	else
	{
		printf("Echouee\n");
	}
	printf("\t\t|%d  %d|    |%d  %d|\t     |%d  %d|\t\t    |%d  %d|\t\t  ", Matrice5[2][0], Matrice5[2][1], Matrice6[2][0], Matrice6[2][1], -1, -1, Addition3[2][0], Addition3[2][1]);
	if(Addition3[2][0]==-1 && Addition3[2][1]==-1)
	{
		printf("Succes\n");
	}
	else
	{
		printf("Echouee\n");
	}
}

int sommeMatrice(int Matrice1[m][n], int Matrice2[m][n], int Addition[m][n])
{
	for(int i=0; i<m; i++)
	{
		for(int j=0; j<n; j++)
		{
			Addition[i][j]=((Matrice1[i][j])+(Matrice2[i][j]));
		}
	}
	return Addition[m][n];
}
