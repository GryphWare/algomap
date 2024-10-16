#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int max(int a, int b){
    return (a > b) ? a : b;
}

int size1, size2;

int main() {
    
    char str1[] = "abc";
    char str2[] = "def";
    
    size1 = strlen(str1);
    size2 = strlen(str2);
    
    int main_size = max(size1, size2);
    
    int index = 0;
    
    char *MergeString = (char*) malloc (size1 + size2);
    
    for (size_t i = 0; i < main_size; i++){
        if(i < size1){
            MergeString[index] = str1[i];
            index++;
        }
        if(i < size2){
            MergeString[index] = str2[i];
            index++;
        }
    }
    MergeString[index] = '\0';
    
        printf("%s", MergeString);
    
    return 0;
}