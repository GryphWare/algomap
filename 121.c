#include <stdio.h>
#include <limits.h>
//kiem so nho nho va lon nhat

//hamcheck
int check(int* arr, int size){

    int min = INT_MAX; //tim so nho nhat
    int max = 0; //du hoac la max

    for (size_t i = 0; i < size; ++i){
        if (arr[i] < min){
            //tim so nho nhat
            min = arr[i];
            } else if ((arr[i] - min) > max){
                //tinh du hoac max
                max = arr[i] - min;
                }
        }
        return max;
    }

int main(){

    //tao mang thong qua size;
    int size = 5;

    //tao mang
    int *prices = new int[size];

    //nhap gia 
    for (size_t i = 0; i < size; ++i){
        scanf("%d", &prices[i]);
        }

    //result
    int result = check(prices, size);

    //ans
    printf("%d", result);
    return 0;
}