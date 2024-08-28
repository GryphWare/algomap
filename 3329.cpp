#include <iostream>
#include <vector>
#include <climits>

//vector lam mag
//limits lam limit int to help
//help me :)))

int main(){

    //tao mag
    std::vector<int> arr;
    const int size = 5; //size = const
    int max = INT_MIN;

    //input arr 
    for (int i = 0; i < size; i++){
        int n;
        std::cin >> n;
        arr.push_back(n); //n them vao mag
        }
    //tao loop de so sanh dua va index 0
    //(i + 1) (i - 1);

    for (int i = 0; i < size; i++){
        if (arr[i] == 0){
            if ((i + 1) < size && arr[i + 1] > max){
                max = arr[i + 1];
                }
            if ((i - 1) >= 0 && arr[i - 1] > max){
                max = arr[i - 1];
                }
            }
        }
    std::cout << max << std::endl;
    return 0;
    }