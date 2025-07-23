#include <stdio.h>
void printMatrix (int matrix [3][3], int size) {
    for (int i =0; i<size; i++) {
        for (int j=0; j<size; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

void addEdge (int matrix[3][3],int start , int end) {
    // ma trận có hướng
    //node đánh từ 0
    matrix[start][end]=1;

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
    int start, end;
    printf("Nhap canh startNode:");
    scanf("%d", &start);
    printf("Nhap canh endNode: ");
    scanf("%d",&end);
    addEdge(matrix, start, end);
    printf("Ma tran ke sau khi them canh:\n");
    printMatrix(matrix, 3);

    return 0;
}