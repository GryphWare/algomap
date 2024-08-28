#include <stdio.h>
#include <string.h>

//tao struct de tao hashmaop
typedef struct {
    char key; //hashmap <int>
    int index; //hashmap <char>
    } hashmap;

//tao ham nhan gia tri
int check (char key, int size, hashmap *Map){
    //xet gia tri co trong hashmap hay ko
    for (int i = 0; i < size; i++){
        if (Map[i].key  == key){
            return Map[i].index; //co chu do
            }
        }
        return -1; //neu ko co chu do 
    }
//ham return roman2int
int roman2int (char *roman){
    //tao mang luu so la ma va so
    hashmap Map[] = {
        {'I', 1}, {'V', 5}, {'X', 10}, {'L', 50},
        {'C', 100}, {'D', 500}, {'M', 1000}
        };
    int size = sizeof(Map) / sizeof(Map[0]);//tinh size
    int total = 0;  //ket qua
    int after = 0;  //tao so sau
    //tao loop de xet
    for (int i = strlen(roman) - 1; i >= 0; i--){

        int currient = check(roman[i], size, Map); //nhan check xem chu do co thuoc hashmap?

        //xet vi tri so
        if (currient >= after){
            total += currient; //neu chu sau
            } else {
                total -= currient; //neu chu truoc
                }
        after = currient; //thay doi so tu cuoi toi dau
        }
    //tra ve ket qua
    return total;
    }

int main(){

    //tao so la ma
    char Roman[] = "XX";

    //ans
    printf("%d", roman2int(Roman));
    return 0;
    }