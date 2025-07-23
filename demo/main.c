#include <stdio.h>

void printAdjacencyMatrix(int matrix[4][4], int size) {
    printf("\nAdjacency Matrix:\n");
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) { // size là số lượng đỉnh
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

// hiển thị kết nối

void printConnections(int matrix[4][4], char vertices[4], int size) {
    printf("\nConnections for each vertex:\n");
    for (int i = 0; i < size; i++) {
        printf("%c: ", vertices[i]);
        for (int j = 0; j < size; j++) {
            if (matrix[i][j]) {
                printf("%c ", vertices[j]);// in ra phần kết nối với các phân tử trong cột
            }
        }
        printf("\n");
    }
}

int main() {
    char vertexData[4] = {'A', 'B', 'C', 'D'};
    int adjacencyMatrix[4][4] = {
        {0, 1, 1, 1},
        {1, 0, 1, 0},
        {1, 1, 0, 0},
        {1, 0, 0, 0}
    };

    printf("vertexData: ");
    for (int i = 0; i < 4; i++) {
        printf("%c ", vertexData[i]);
    }
    printf("\n");

    printAdjacencyMatrix(adjacencyMatrix, 4);
    printConnections(adjacencyMatrix, vertexData, 4);



    return 0;
}

