#include <stdio.h>
#include <limits.h>

int solution (int x, int y){
    if (x > y){
        return x;
    }
    return y;
}

int main(){

    //value
    int x, y;
    //arr
    int size = 5;
    int *arr = new int [size];

    //user input
    for (int i = 0; i < size; i++){
        int a;
        scanf("%d", &a);
        arr[i] = a;
    }

    //index num 0
    for (int i = 0; i < size; i++){
        if (arr[i] == 0){
            x = ((i - 1) >= 0) ? arr[i - 1] : INT_MIN;
            y = ((i + 1) < size) ? arr[i + 1] : INT_MIN;
            break;
        }
    }

    int ans = solution(x, y);
    printf("%d", ans);

    return 0;
}