#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int compare(const char* word1, const char* word2){
    
    int count = 0;
    bool FalseArr[128] = {false};
    
    for (size_t i = 0; i < strlen(word2); i++){
        FalseArr[(int)word2[i]] = true;
    }
    
    for(size_t i = 0; i < strlen(word1); i++){
        if(FalseArr[(int)word1[i]]){
            count++;
        }
    }
    
    return count == strlen(word1);
}

int main() {
    
    char arr1[] = "abc";
    char arr2[] = "abcdef";
    
    bool result = compare(arr1, arr2);
    
    printf("%d", result);
    
    return 0;
}