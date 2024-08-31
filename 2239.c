#include <stdio.h>
#include <limits.h>
#include <stdlib.h>

int check (const int* arr, int size){
    
    int distance = INT_MAX;
    int different = INT_MAX;
    
    for (size_t i = 0; i < size; i++){
       int mindistance = abs(arr[i] - 0);
        
        if(mindistance < different){
            different = mindistance;
            distance = arr[i];
        } else if (mindistance == different && arr[i] > distance){
            distance = arr[i];
        }
    }
    return distance;
}
int main() {
    
    int arr_num[] = {-4,-2,1,4,8};
    
    int size = sizeof(arr_num) / sizeof(arr_num[0]);
    
    int result = check(arr_num, size);
    
    printf("%d", result);
    
    return 0;
}