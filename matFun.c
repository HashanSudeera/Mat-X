#include <stdio.h>
#include <string.h>
#include "matrix.h"

Matrix matrices[MATRICES];
int matrixCount=0;

void addMatrix()
{
        char yn;

        do
        {
                Matrix mat;


                printf("Enter matrix name : ");
                while (getchar() != '\n');
                fgets(mat.name,sizeof(mat.name),stdin);


                printf("Size of matrix [i j] : ");
                scanf("%d %d",&mat.row,&mat.column);

                mat.data[mat.row][mat.column];

                if (mat.row !=0 && mat.column != 0)
                {
                        for (int h=0;h < mat.row;h++)
                        {
                                for (int t=0; t < mat.column;t++)
                                {
                                        int value = 0;
                                        mat.name[strcspn(mat.name, "\n")] = '\0';
                                        printf("Add value for %s [%d][%d] = ",mat.name,h,t);
                                        scanf("%d",&value);
                                        mat.data[h][t] = value;
                                }
                        }
                }
                else
                {
                        printf("Invalid i and j values!");
                }
                matrices[matrixCount++] = mat;

                printf("Do you want to add another matrix (y/n): ");
                scanf(" %c",&yn);

        }while (yn != 'n');


}
void waitEnter() {
        int c;
        while ((c = getchar()) != '\n' && c != EOF);  // flush buffer
        printf("Press Enter to continue...");
        getchar();  // wait for Enter
}

void viewMatrix()
{
        if (matrixCount==0)
        {
                printf("No matrices available\n");
        }
        else
        {
                for (int k=0;k< matrixCount;k++)
                {
                        printf("%s [%d][%d] : \n",matrices[k].name,matrices[k].row,matrices[k].column);
                        for (int i=0;i < matrices[k].row;i++)
                        {
                                printf("| ");
                                for (int j=0; j < matrices[k].column;j++)
                                {
                                        printf("%d ",matrices[k].data[i][j]);
                                }
                                printf("| \n");
                        }

                }
        }
        waitEnter();
}

int name_indexFind(char name[10])
{
        for (int i= 0; i < matrixCount;i++)
        {
                if (strcmp(matrices[i].name, name)== 0)
                {
                        return i;
                }
        }
        return -1;

}
void additionMatrix()
{

        int numMat;
        int matindex;
        printf("Number of Matrix : ");
        scanf("%d",&numMat);

        if (numMat >= 2)
        {
                Matrix alph[numMat];


                for (int i = 0; i < numMat;i++)
                {
                        printf("Enter matrix number : ");
                        scanf("%d",&matindex);
                        //while(getchar() != '\n'); // flush leftover newline
                        //fgets(matName, sizeof(matName), stdin); //get matrix name
                        //matName[strcspn(matName, "\n")] = '\0'; // remove newline

                        //int index = name_indexFind(matName);

                        alph[i] = matrices[matindex-1];

                }
                Matrix solve = alph[0];

                //check rows and columns
                if (solve.row==alph[0].row && solve.column==alph[0].column)
                {
                        for (int k= 0; k < alph[0].row;k++)
                        {
                                for (int x=0; x < alph[0].column;x++)
                                {
                                        solve.data[k][x] += alph[1].data[k][x];

                                }
                        }

                        printf("Result ============================ \n");
                        for (int n=0;n < solve.row;n++)
                        {
                                printf("| ");
                                for (int m=0; m < solve.column;m++)
                                {
                                        printf("%d ",solve.data[n][m]);
                                }
                                printf("| \n");
                        }
                        waitEnter();
                }else
                {
                        printf("They are different row and column");
                }

        }else
        {
                printf("Invalid input..");
        }

}











void matArithmetic()
{
        int opp;
        printf("Select arithmetic operation (+,-,*,/) : ");
        scanf(" %c",&opp);
        switch (opp)
        {
        case '+':
                additionMatrix();
                break;
        }
}