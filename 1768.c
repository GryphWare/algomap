#include <stdio.h>
#include <string.h>
#include <stdlib.h>
//tinh size chuoi
//chuyen str len ham

//ham tach
char* tach (const char* str, int size){
    //tao mang chua size + 1 data cuoi la ki hieu ket thuc mang la \0
    char* result = (char*) malloc(size + 1);

    //neu mang moi tao ra ko ton tai
    if (result == NULL){
        printf("Co cai con cac");
        exit(1); //exit
       }

    //nhet data vao mang result
    for (size_t i = 0; i < size; ++i){
        result[i] = str[i];
        }

        result[size] = '\0'; //end char

       //return 
       return result; 
    }

int main(){

    //tao hai chu
    char str[10] = "chanh";
    char str2[10] = "lmao";

    //nhap hai chu;
    //fgets(str, sizeof(str), stdin);
    //fgets(str2, sizeof(str), stdin);

    int size1 = strlen(str); //lay size cua str
    int size2 = strlen(str2); //lay size cua str2
    int max; //lay mang co size to nhat
    max = (size1 > size2) ? size1 : size2; //if con gon

    //tach str ra char trong ham
    char* arr1 = tach(str, size1);
    char* arr2 = tach(str2, size2);

    //tao mang ketqua
    char* ketqua = (char*) malloc(size1 + size2 +1);

    //nhet chu thong qua index
    int index = 0;
    //nhet chu vo ket qua theo arr1 arr2
    for (size_t i = 0; i < max; i++){
        if (i < size1){
            ketqua[index++] = arr1[i];
            }
        if (i < size2){
            ketqua[index++] = arr2[i];
            }
        }
    //end char
    ketqua[index] = '\0';

    for (size_t i = 0; i < strlen(ketqua) + 1; i++){
        printf("%c ", ketqua[i]);
        }
    return 0;
    }