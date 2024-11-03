#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char **get_ranges(const int *arr_nums, int size, int *returnSize){
    
    char **result = (char**) malloc(size * sizeof(char*)); //tao char inside char
    *returnSize = 0; //tao index
    int i = 0; //diem i thay doi
    
    while (i < size){
        
        int start = i; //luon lay index khi co ko lien tiep
        
        while(i + 1 < size && arr_nums[i] + 1 == arr_nums[i + 1]){
            i++;
        }
        //cai nay de xem so co lien tiep hay ko neu so ko lien tiep thi in %d con lien tiep thi ->
        int len = (i == start) ? snprintf(NULL, 0, "%d", arr_nums[start]) : snprintf(NULL, 0, "%d -> %d", arr_nums[start], arr_nums[i]);
        
        result[*returnSize] = (char*) malloc((len + 1) * sizeof(char*)); //tao char theo index
        
        if(i == start){
            sprintf(result[*returnSize], "%d", arr_nums[start]);
        } else {
            sprintf(result[*returnSize], "%d->%d", arr_nums[start], arr_nums[i]);
        }
        (*returnSize)++;
        i++;
    }
    return result;
}

int main() {
    
    int arr_nums[] = {0, 1, 2, 6, 9}; //ran
    int get_size = sizeof(arr_nums) / sizeof(arr_nums[0]); //tinh size
    
    int return_size_Char; //nhan size thong qua ham
    
    //ham get_ranges will save to ranges
    char **ranges = get_ranges(arr_nums, get_size, &return_size_Char);
    
    for (size_t i = 0; i < return_size_Char; i++){
        printf("%s\n", ranges[i]);
        free(ranges[i]); //free bo nho
    }
    free(ranges); //free all
    
    return 0;
}