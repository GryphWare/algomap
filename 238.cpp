#include <iostream>
#include <vector>

//ham return mang check
std::vector <int> check (const std::vector <int>& nums){
    //tao mang ket qua
    //mac dinh het la 1 voi size la nums
    int size = nums.size();
    std::vector <int> result (size, 1);

    //cho 1 la xuat phat tu trai -> phai
    int left = 1;
    //tao loop de chay cho phan tu bang left sau do nhan
    for (size_t i = 0; i < size; i++){
        result[i] = left;
        left *= nums[i];
        }
    //sau do tu cuoi den dau mac dinh la 1
    int right = 1;
    //tao loop cho phan tu nhan vs nhau
    for (int i = size - 1; i >= 0; i--){
        result[i] *= right;
        right *= nums[i];
        }

    return result;
    }

int main(){

    //tao vector so;
    std::vector <int> nums = {1, 2, 3, 4};

    //luu mang ket qua
    auto results = check(nums);

    //in mang
    for (auto const& help : results){
        std::cout << help << " ";
        }
    return 0;
    }