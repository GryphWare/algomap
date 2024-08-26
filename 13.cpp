#include <iostream>
#include <unordered_map>
#include <string>

int main(){

    //khai bao str
    std::string user;
    user = "IV"; //ran
    //luu tru cac cap gia tra so la ma    
    //kai bao hashmap

    std::unordered_map <char, int> arr_roman = {
        //gan chu gan so
        {'I', 1}, {'V', 5}, {'X', 10},
        {'L', 50}, {'C', 100}, {'D', 500}, {'M', 1000}
        };

    //giai quyet
    int total = arr_roman[user.back()];

    //tao loop de xem chu nao dung truoc -- sau++
    for (int i = user.length() - 2; i >= 0; i--){
        //neu chu sau nho hon chu truoc thi cong vo so cho truoc do co so bien total lam mau
        if(arr_roman[user[i]] > arr_roman[user[i + 1]]){
            total += arr_roman[user[i]];
            } else {
                //ngu chet rang chiu
                total -= arr_roman[user[i]];
                }
        }

    //ans
    std::cout << total;

    /*end*/
    return 0;
    }