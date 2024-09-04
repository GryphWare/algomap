#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//dat tu dau tien lam start roi lay chu dau tien cua start do
//tao mang ket qua
//copy start sang ket qua
//loop mang de xet tu do o index do cac bang start hay ko
//neu co thi day con tro start + 1
//ko thi bo qua == end
//dk la while (mang char start ko '\0' va tu theo in cung the).
//dk dac biet chu so sanh phai giong nhau

char* prefix(const char* str[], int size){
    
    //lay start
    const char *start = str[0];
    
    //tao results de return
    char *results = (char*) malloc (strlen(start) + 1);
    
    //copy start sang results
    strcpy(results, start);
    
    for (size_t i = 1; i < size; i++){
        
        int j = 0;
        
        do{
            j++;
        } while (results[j] != '\0' && str[i][j] != '\0' && results[j] == str[i][j]);
        
        results[j] = '\0';
    }
    return results;
}

int main(){
    
    //mang tu
    const char* str[] = {"babara", "bababruh"}; //i live in genshin all day
    
    int size = sizeof(str) / sizeof(str[0]); //tinh size
    
    char* result = prefix(str, size); //bien luu tru ham return
    
    //in 
    printf("%s\n", result);
    
    return 0;
}