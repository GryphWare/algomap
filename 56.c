#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int start;
    int end;
}interval;

int compare (const int *a, const int *b){
    
    interval *A = (interval*)a;
    interval *B = (interval*)b;
    
    return A - B;
}

interval *merge(interval *arr_nums, int size, int *returnSize){
    
    interval *result = (interval*) malloc (size * sizeof(interval));
    int index = 0; 
    result[index] = arr_nums[0];
    
    qsort(arr_nums, size, sizeof(interval), compare); //quick sort
    
    for(size_t i = 0; i < size; i++){
        if(result[index].end >= arr_nums[i].start){
            result[index].end = result[index].end > arr_nums[i].end ? result[index].end : arr_nums[i].end;
        } else {
            index++;
            result[index] = arr_nums[i];
        }
    }
    
    *returnSize = index + 1;
    
    return result;
}

int main() {
    
    interval arr_nums[] = {{1, 3}, {2, 2}, {9, 10}}; //[1, 3] [9, 10]
    
    int size = sizeof(arr_nums) / sizeof(arr_nums[0]);
    int returnSize; //size for print
    
    interval *mergeInterval = merge(arr_nums, size, &returnSize);
    
    for (size_t i = 0; i < returnSize; i++){
        printf("%d -> %d\n", mergeInterval[i].start, mergeInterval[i].end);
    }
    
    free(mergeInterval); //free all
    
    return 0;
}