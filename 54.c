#include <stdio.h>
#include <stdlib.h>

int* spiralOrder(const int** matrix, int matrixSize, int *matrixColsize, int *returnSize){
    
    *returnSize = matrixSize * (*matrixColsize); //tinh size cho mang result;
    
    int *result = (int*) malloc ((*returnSize) * sizeof(int)); //tao mang result
    int index = 0; //tao index cho result
    
    int top = 0, left = 0, bottom = matrixSize - 1, right = *matrixColsize - 1; //tao border
    
    while (top <= bottom && left <= right){
        
        for (size_t i = left; i <= right; i++){
            result[index++] = matrix[top][i]; //duyet tu trai sang phai theo top
        }
        top++;//loai bo hang da chay
        
        for(size_t i = top; i <= bottom; i++){
            result[index++] = matrix[i][right]; //duyet tu tren xuong theo i theo right
        }
        right--;
        
        if (top <= bottom){
            for(int i = right; i >= left; i--){
                result[index++] = matrix[bottom][i];
            }
            bottom--;
        }
        
        if (left <= right){
            for(int i = bottom; i >= top; i--){
                result[index++] = matrix[i][left];
            }
            left++;
        }
    }
    return result;
}

int main() {
    
    //tao hang va cot
    int matrixSize = 3;
    int matrixColsize = 3; //so size trong index
    int returnSize; //ham size tra ve de in
    
    int **matrix = (int**) malloc (matrixSize * sizeof(int*)); //tao mang 2D
    
    //tao ma tran theo index
    matrix[0] = (int[]){1, 2, 3};
    matrix[1] = (int[]){1, 2, 3};
    matrix[2] = (int[]){1, 2, 3}; //ket qua la: 123332112
    
    int *result = spiralOrder(matrix, matrixSize, &matrixColsize, &returnSize);
    
    for(size_t i = 0; i < returnSize; i++){
        printf("%d ", result[i]);
    }
    return 0;
}