#include <stdio.h>
int m=3, n=3;
int multiplicationMatrice(int Matrice1[m][n], int Matrice2[m][n], int MatriceResultat[m][n]);
void afficherMatrice(int MatriceResultat[m][n]);
char ligne[]="-----------------------------------------------------------------------------------";

int main(void)
{
	int Matrice1[3][3]={{2,2,2},{2,2,2},{2,2,2}};
	int Matrice2[3][3]={{-2,-2,-2},{-2,-2,-2},{-2,-2,-2}};
	int MatriceResultat[3][3];
	MatriceResultat[3][3]=multiplicationMatrice(Matrice1, Matrice2, MatriceResultat);
	printf("\t\t%s\n", ligne);
	printf("\t\t\t\t\t\t***TEST VALIDATION***\t\t\n");
	printf("\t-----%s-----------\n", ligne);
	printf("\t\tMatrices utilisees\tMatrice attendue\tMatrice obtenue\t\tValidation\n");
	printf("\t-----%s-----------\n", ligne);
	printf("(1)\t  |%d  %d  %d|    |%d %d %d|        |%d %d %d|\t\t|%d %d %d|\t\t  ", Matrice1[0][0], Matrice1[0][1], Matrice1[0][2], Matrice2[0][0], Matrice2[0][1], Matrice2[0][2], -12, -12, -12, MatriceResultat[0][0], MatriceResultat[0][1], MatriceResultat[0][2]);
	if(MatriceResultat[0][0]==-12 && MatriceResultat[0][1]==-12 && MatriceResultat[0][2]==-12)
	{
		printf("Succes\n");
	}
	else
	{
		printf("Echouee\n");
	}
	printf("\t  |%d  %d  %d|    |%d %d %d|        |%d %d %d|\t\t|%d %d %d|\t\t  ", Matrice1[1][0], Matrice1[1][1], Matrice1[1][2], Matrice2[1][0], Matrice2[1][1], Matrice2[1][2], -12, -12, -12, MatriceResultat[1][0], MatriceResultat[1][1], MatriceResultat[1][2]);
	if(MatriceResultat[1][0]==-12 && MatriceResultat[1][1]==-12 && MatriceResultat[1][2]==-12)
	{
		printf("Succes\n");
	}
	else
	{
		printf("Echouee\n");
	}
	printf("\t  |%d  %d  %d|    |%d %d %d|        |%d %d %d|\t\t|%d %d %d|\t\t  ", Matrice1[2][0], Matrice1[2][1], Matrice1[2][2], Matrice2[2][0], Matrice2[2][1], Matrice2[2][2], -12, -12, -12, MatriceResultat[2][0], MatriceResultat[2][1], MatriceResultat[2][2]);
	if(MatriceResultat[2][0]==-12 && MatriceResultat[2][1]==-12 && MatriceResultat[2][2]==-12)
	{
		printf("Succes\n\n");
	}
	else
	{
		printf("Echouee\n\n");
	}
	int Matrice3[3][3]={{4,4,4},{4,4,4},{4,4,4}};
	int Matrice4[3][3]={{0,0,0},{0,0,0},{0,0,0}};
	int MatriceResultat2[3][3];
	MatriceResultat2[3][3]=multiplicationMatrice(Matrice3, Matrice4, MatriceResultat2);
	printf("(2)\t  |%d  %d  %d|    |%d  %d  %d|  \t  |%d  %d  %d|\t\t   |%d  %d  %d|\t\t  ", Matrice3[0][0], Matrice3[0][1], Matrice3[0][2], Matrice4[0][0], Matrice4[0][1], Matrice4[0][2], 0, 0, 0, MatriceResultat2[0][0], MatriceResultat2[0][1], MatriceResultat2[0][2]);
	if(MatriceResultat2[0][0]==0 && MatriceResultat2[0][1]==0 && MatriceResultat2[0][2]==0)
	{
		printf("Succes\n");
	}
	else
	{
		printf("Echouee\n");
	}
	printf("\t  |%d  %d  %d|    |%d  %d  %d|  \t  |%d  %d  %d|\t\t   |%d  %d  %d|\t\t  ", Matrice3[1][0], Matrice3[1][1], Matrice3[1][2], Matrice4[1][0], Matrice4[1][1], Matrice4[1][2], 0, 0, 0, MatriceResultat2[1][0], MatriceResultat2[1][1], MatriceResultat2[1][2]);
	if(MatriceResultat2[1][0]==0 && MatriceResultat2[1][1]==0 && MatriceResultat2[1][2]==0)
	{
		printf("Succes\n");
	}
	else
	{
		printf("Echouee\n");
	}
	printf("\t  |%d  %d  %d|    |%d  %d  %d|  \t  |%d  %d  %d|\t\t   |%d  %d  %d|\t\t  ", Matrice3[2][0], Matrice3[2][1], Matrice3[2][2], Matrice4[2][0], Matrice4[2][1], Matrice4[2][2], 0, 0, 0, MatriceResultat2[2][0], MatriceResultat2[2][1], MatriceResultat2[2][2]);
	if(MatriceResultat2[2][0]==0 && MatriceResultat2[2][1]==0 && MatriceResultat2[2][2]==0)
	{
		printf("Succes\n\n");
	}
	else
	{
		printf("Echouee\n\n");
	}
	int Matrice5[3][3]={{-4,-4,-4},{-4,-4,-4},{-4,-4,-4}};
	int Matrice6[3][3]={{0,0,0},{0,0,0},{0,0,0}};
	int MatriceResultat3[3][3];
	MatriceResultat3[3][3]=multiplicationMatrice(Matrice5, Matrice6, MatriceResultat3);
	printf("(3)\t  |%d %d %d|    |%d  %d  %d|  \t  |%d  %d  %d|\t\t   |%d  %d  %d|\t\t  ", Matrice5[0][0], Matrice5[0][1], Matrice5[0][2], Matrice6[0][0], Matrice6[0][1], Matrice6[0][2], 0, 0, 0, MatriceResultat3[0][0], MatriceResultat3[0][1], MatriceResultat3[0][2]);
	if(MatriceResultat3[0][0]==0 && MatriceResultat3[0][1]==0 && MatriceResultat3[0][2]==0)
	{
		printf("Succes\n");
	}
	else
	{
		printf("Echouee\n");
	}
	printf("\t  |%d %d %d|    |%d  %d  %d|  \t  |%d  %d  %d|\t\t   |%d  %d  %d|\t\t  ", Matrice5[1][0], Matrice5[1][1], Matrice5[1][2], Matrice6[1][0], Matrice6[1][1], Matrice6[1][2], 0, 0, 0, MatriceResultat3[1][0], MatriceResultat3[1][1], MatriceResultat3[1][2]);
	if(MatriceResultat3[1][0]==0 && MatriceResultat3[1][1]==0 && MatriceResultat3[1][2]==0)
	{
		printf("Succes\n");
	}
	else
	{
		printf("Echouee\n");
	}
	printf("\t  |%d %d %d|    |%d  %d  %d|  \t  |%d  %d  %d|\t\t   |%d  %d  %d|\t\t  ", Matrice5[2][0], Matrice5[2][1], Matrice5[2][2], Matrice6[2][0], Matrice6[2][1], Matrice6[2][2], 0, 0, 0, MatriceResultat3[2][0], MatriceResultat3[2][1], MatriceResultat3[2][2]);
	if(MatriceResultat3[2][0]==0 && MatriceResultat3[2][1]==0 && MatriceResultat3[2][2]==0)
	{
		printf("Succes\n\n");
	}
	else
	{
		printf("Echouee\n\n");
	}
}

int multiplicationMatrice(int Matrice1[m][n], int Matrice2[m][n], int MatriceResultat[m][n])
{
	int SommeM=0;
	for(int k=0; k<m; k++)
	{
		for(int i=0; i<m; i++)
		{
			for(int j=0; j<n; j++)
			{
				SommeM=SommeM+Matrice1[i][j]*Matrice2[j][i];
			}
			MatriceResultat[k][i]=SommeM;
			SommeM=0;
		}
	}
	return MatriceResultat[3][3];
}

void afficherMatrice(int MatriceResultat[m][n])
{
	for(int i=0; i<m; i++)
	{
		for(int j=0; j<n; j++)
		{
			printf("%d\t", MatriceResultat[i][j]);
		}
		printf("\n");
	}
}
