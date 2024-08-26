#include <iostream>
#include <string>
#include <vector>

int main(){

    //tao mag
    std::vector <char> chr_1;
    std::vector <char> chr_2;
    std::vector <char> chr_main;

    //tao size cua sum 2 day
    int size;

    //cho 2 arr str bat ki
    std::string str_1;
    std::string str_2;

    //can input from user
    str_1 = "abcd";//ran
    str_2 = "efgj";//ran

    //tao loop tach ra
    for (int i = 0; i < str_1.length(); i++){
        //tach roi dat vao bien de them
        char chr = str_1[i];
        //bien chr chi ton tai trong day th nen yen tam :))))
        chr_1.push_back(chr);
        }
    //lan 2
    for (int i = 0; i < str_2.length(); i++){
        char chr = str_2[i];
        chr_2.push_back(chr);
        }
    //let me cook
    //o day lam sao in ra aebfcgdj
    //xac dinh so size lon nhat neu du
    //xet tung size them vao theo chr_1 den 2

    int size_1 = chr_1.size();
    int size_2 = chr_2.size();
    int main_size = std::max(size_1, size_2);

    for (int i = 0; i < main_size; i++){
        if (i < size_1){
            chr_main.push_back(chr_1[i]);
            }
        if (i < size_2){
            chr_main.push_back(chr_2[i]);
            }
        }

    //ans
    for(char c : chr_main){
        std::cout << c << " ";
        }

    /*end*/
    return 0;
    }