#include <iostream>
#include <string>
#include <vector>
#include <map>

//string de tach str -> chr
//vector cho ok

std::vector <char> tach (const std::string& str){
    std::vector <char> chr_tach;
    for (int i = 0; i < str.length(); i++){
        chr_tach.push_back(str[i]);
        };
    return chr_tach;
    };

bool check (std::vector <char> *c_1, std::vector <char> *c_2){

    int size_1 = c_1 -> size();
    int size_2 = c_2 -> size();
    int main_size = std::max(size_1, size_2);
    int min_size = std::min(size_1, size_2);

    std::map <int, char> map1;
    std::map <int, char> map2;

    for (int i = 0; i < size_1; i++){
        map1[i] = (*c_1)[i];
        };
    for (int i = 0; i < size_2; i++){
        map2[i] = (*c_2)[i];
        };

    int check = 0;

    for (int i = 0; i < main_size; i++){
        if (map1[i] == map2[i]){
            check++;
            if (check == min_size){
                return true;
                break;
                }
            }        
        }
        return false;
    };

int main(){

    std::string str_1, str_2; //tao bien

    str_1 = "hello";//ran
    str_2 = "hiworld"; //ran

    //tao arr de tach
    //thuc hien ham return
    std::vector <char> chr_1;
    std::vector <char> chr_2;

    //tach
    chr_1 = tach(str_1);
    chr_2 = tach(str_2);

    //let me cook
    //dat mot so de lam moc de count
    //neu so do == so size cua chr_1 thi true
    //lam loop de xet xem neu giong ++ count

    bool results = check(&chr_1, &chr_2);

    //ans
    std::cout << results;

    /*end*/
    return 0;
    }