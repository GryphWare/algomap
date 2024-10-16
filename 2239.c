#include <stdio.h>
#include <math.h>

int check (const int *nums, int size){
    
    int result = nums[0];
    
    for (size_t i = 1; i < size; i++){
        if(abs(result) > abs(nums[i])){
            result = nums[i];
        } else if (abs(result) == abs(nums[i]) && nums[i] > result){
            result = nums[i];
        }
    }
    return result;
}

int main() {
    
    int nums[] = {-4,-2,-1, 1 ,4,8};
    int size = sizeof(nums) / sizeof(nums[0]);
    
    int largest = check(nums, size);
    
    printf("%d", largest);
    return 0;
}