#ifndef MATRIX_H
#define MATRIX_H

#define MAX 10
#define MATRICES 10
typedef struct
{
    char name[10];
    int row;
    int column;
    int data[MAX][MAX];

}Matrix;


extern Matrix matrices[MATRICES];
extern int matrixCount;

void addMatrix();
void viewMatrix();
void matArithmetic();
//void matProperties();






#endif