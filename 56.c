#include <stdio.h>
#include <stdlib.h>

//tao struct de tao arr
typedef struct {
    int start; //so dau
    int end; //so sau
    }hashmap_Intervals;
    
//ham sap xep
int compare (const void* a, const void* b){
    hashmap_Intervals* intervalA = (hashmap_Intervals*)a; //chuyen tham chieu gia tri sang intervalA qua hashmap_Intervals
    hashmap_Intervals* intervalB = (hashmap_Intervals*)b;//nhu tren
    return intervalA->start - intervalB->start;    
    }
    
//tao ham merge return 2 bien arr va return size;
hashmap_Intervals *merge(hashmap_Intervals* interval, int interval_size, int *returnsize){
    //neu ko co size == erorr;
    if (interval_size == 0){
        *returnsize = 0;
        return NULL;
        }
    //tao results
    hashmap_Intervals *results = (hashmap_Intervals*) malloc(interval_size * sizeof(hashmap_Intervals));
    //sap xep mang
    qsort(interval, interval_size, sizeof(hashmap_Intervals), compare);
    int index = 0; //bang moi gia giu so dau tien
    results[index] = interval[0]; //so dau tien
    //tao loop de check
    for (size_t i = 0; i < interval_size; i++){
        if(results[index].end >= interval[i].start){
            results[index].end = results[index].end > interval[i].end ? results[index].end : interval[i].end;
            } else {
                index++;
                results[index] = interval[i];
                }
        }
    *returnsize = index + 1;
    return results;
    }

int main(){
    
    //cho mang tu struct;
    hashmap_Intervals interval[] = {{1, 2}, {1, 1}};
    //tinh mang
    int interval_size = sizeof(interval) / sizeof(interval[0]);
    //in ra thong qua return  size;
    int returnSize;
    //hoat dong trong mang
    hashmap_Intervals *mergeInterval = merge(interval, interval_size, &returnSize);
    
    //in ra
    for (size_t i = 0; i < returnSize; i++){
     printf("[%d, %d]", mergeInterval[i].start, mergeInterval[i].end);
     }
     
    return 0;
    }