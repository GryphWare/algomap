#include <stdio.h>
#include <limits.h>

int profit(const int* prices, int size){
    
    int maxProfit = 0;
    int min = INT_MAX;
    
    for (size_t i = 0; i < size; i++){
        
        if(prices[i] < min){
            min = prices[i];
        }
        
        int profitToday = prices[i] - min;
        
        if(profitToday > maxProfit){
            maxProfit = profitToday;
        }
    }
    return maxProfit;
}

int main() {
    
    int prices[] = {1, 2, 4, 5, 0};
    int size = sizeof(prices) / sizeof(prices[0]);
    
    printf("%d", profit(prices, size));
    
    return 0;
}