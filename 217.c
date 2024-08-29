#include <stdio.h>

#define table 1000 //xu ly xung dot

unsigned int hashValue (int num){
    
    return num % table;//tra ve vi tri bam
    
    }

bool check (const int* arr, int size){
    
    bool FalseArr[table] = {false}; //tao arr vs phan tu la false
    
    for (size_t i = 0; i < size; i++){
        //ham bam
        unsigned int hash = hashValue(arr[i]);
        
        if (FalseArr[hash]){
            return true; //co so trung nhau
            } else{
                FalseArr[hash] = true; //khac hoac moi
                }
        }
        return false; //ko trung
    
    }

int main(){
    
    int arr[] = {1, 2, 3, 1}; //ran
    
    int size = sizeof(arr) / sizeof(arr[0]); //size for function
    
    bool result = check(arr, size); //work in check 
    
    printf("%d", result);
    
    return 0;
    }