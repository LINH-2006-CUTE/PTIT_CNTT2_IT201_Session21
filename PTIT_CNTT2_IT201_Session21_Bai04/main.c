#include <stdio.h>
void printMatrix (int matrix [3][3], int size) {
    for (int i =0; i<size; i++) {
        for (int j=0; j<size; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

void addEdge (int matrix[3][3],int firstNode , int secondNode) {
    matrix[firstNode][secondNode]=1;

}
int main(void) {
    int size=3;
    int matrix [3][3] = {
        {0, 0, 0},
        {0, 0, 0},
        {0, 0, 0}
    };
    printf("Im ma tran ke:\n");
    printMatrix(matrix, 3);
    printf("\n");

    printf("Ma tran sau khi them canh:\n");
    addEdge(matrix, 1,0);
    addEdge(matrix, 1,2);
    addEdge(matrix, 2,0);
    for (int i=0; i<3; i++) {
        for (int j=0; j<3; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}