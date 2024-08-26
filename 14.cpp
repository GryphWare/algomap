#include <iostream>
#include <vector>
#include <string>

int main() {

    //tao vector luu str
    std::vector <std::string> arr_user;
    arr_user = {"Hello", "Hell", "Help"};

    //tach bang vector trong vector
    std::vector <std::vector <char>> arr_word;

    for (const auto& word : arr_user){
        //tach tung chu mot thanh char 
        std::vector <char> char_word (word.begin(), word.end());
        arr_word.push_back(char_word);
    }

    std::string results;
    bool stopLoop = false;
    //cho no chay be ngoai
    //kiem tra xem co phan tu ko
    if (!arr_word.empty()){
        //neu ko thi chay vector ngoai lay tu 1 va chu 1
        for (size_t i = 0; i < arr_word[0].size(); i++){
            char tu_hien_tai = arr_word[0][i];
            //chay tu 2 chu 1
            for (size_t j = 1; j < arr_word.size(); j++){
                //neu i ma bang size hoac chu khac nhau thi dung
                if (i >= arr_word[j].size() || arr_word[j][i] != tu_hien_tai){
                    stopLoop = true;
                    break;
                }
                }
            if (stopLoop){
                    break;
            }
            results += tu_hien_tai;
        }
    }

    //ans
    std::cout << results;
    /*end*/
    return 0;
}