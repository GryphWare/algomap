#include <iostream>
#include <vector>
#include <algorithm>

int help (std::vector <int>& arr_prices){

    //kiem gia tri nho va lon nhat
    int min = INT_MAX;
    int max = 0;

    //tao loop
    for (int i : arr_prices){
        if(i < min){
            min = i;
        } else if ((i - min) > max){
            max = i - min;
        }
    }
    return max;
}

int main(){

    //tao vector luu gia
    std::vector <int> prices;
    const int size = 5;//so size co dinh

    std::cout << "Nhap 5 gia tien bat ki: " << std::endl;

    //nhap gia theo size
    for (int i = 0; i < size; i++){
        int input;
        std::cin >> input;
        prices.push_back(input);
    }

    //check day
    int result = help(prices);

    //ans
    std::cout << result << "\n";
    return 0;
}