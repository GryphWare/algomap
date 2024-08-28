#include <stdio.h>
#include <stdlib.h>

int* change (const int* arr, int size){
    //tao ham results
    int *results = (int*) malloc (size * sizeof(int));

    //tao arr ma trong do cac phan tu bang nhau vua size
    int *add_num2results = (int*) malloc (size * sizeof(int));
    //tao loop
    for (size_t i = 0; i < size; i++){
        add_num2results[i] = 1;
        }
    //phan tu tu trai sang phai
    int right = 1;
    for (size_t i = 0; i < size; i++){
        add_num2results[i] = right;
        right *= arr[i];
        }
    //phan tu tu phai sang trai
    int left = 1;
    for (int i = size - 1; i >= 0; i--){
        add_num2results[i] *= left;
        left *= arr[i];
        }
    //nhet so vao results
    for (size_t i = 0; i < size; i++){
        results[i] = add_num2results[i];
        }
    return results;
    }
int main(){

    //tao size;
    int size = 4;
    //tao arr thong qua size;
    int *arr = (int*) malloc (size * sizeof(int));

    //tao loop nhap so
    for (size_t i = 0; i < size; i++){
        int add; //tao add de them so vao day
        scanf("%d", &add);
        arr[i] = add;
        }

    //chuyen len ham xu ly
    int *arr_result = change(arr, size);

    //ans
    for (size_t i = 0; i < size; i++){
        printf("%d ", arr_result[i]);
        }
    return 0;
    }
/* dcm ngoi code tri cmnr voi lai 3h sang nua du me no*/