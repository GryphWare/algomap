//228.summary ranges
#include <iostream>
#include <vector>
#include <string>

//ham check
std::vector <std::string> check(std::vector<int>& nums){
    //tao vector
    std::vector <std::string> results;
    //cho so hien tai
    int current_nums = nums[0];
    //cho loop de duyet tu index 1
    for (size_t i = 1; i <= nums.size(); i++){
         //neu i == size hoac so hien tai khac so truoc thi choi
         if (i == nums.size() || nums[i] != (nums[i - 1] +1)){
             //neu so hien tai == so ban dau (current) thi them vo list results;
             if (nums[i - 1] == current_nums){
                 results.push_back(std::to_string(current_nums));
                 //neu khac thi in luon so phia tren
                 } else {
                     results.push_back(std::to_string(current_nums) + "->" + std::to_string(nums[i -1]));
                     }
            //neu cho if tren chay tuc nghia la so so khac nen doi vi tri
            if (i < nums.size()){
             current_nums = nums[i];
             }
             }        
     }
     return results;
    }
int main(){

    //tao vector;
    std::vector <int> nums = {1, 2, 1, 1, 3};

    //xu li o ham
    auto result = check(nums); //ham check return;
    //ans
   for (const auto& help : result){
        std::cout << help << "\n";
    }
    /*end*/
    return 0;
    }