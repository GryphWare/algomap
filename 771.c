#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>

//lam theo kieu hashmap

//struct chu cai
typedef struct {
    char word; //chu cai thuong
    char word_cap;  //in hoa
    } hashmap;

//ham diff nay se tra ve true or false neu chu trong user != vs map thi false;
bool diff (hashmap *Map, char key, int size){
    //tao loop
    for (size_t i = 0; i < size; i++){
        if (key == Map[i].word || key == Map[i].word_cap){
            return true;
            }
        }
        return false;
    }

//ham tra ve result;
int result (const char* user, const char* match){
    //tao hashmap voi size
    int size = strlen(match);
    hashmap Map[size];
    //tao bien ket qua
    int total = 0;
    
    //tao vong lap tao hash map voi thuong va in hoa thong qua match
    for (int i = 0; i < size; i++){
        //xet xem co phai in hoa ko
        if (match[i] == toupper(match[i])){
            Map[i].word = tolower(match[i]);
            Map[i].word_cap = match[i];
            } else {
                Map[i].word = match[i];
            Map[i].word_cap = toupper(match[i]);
                }
    }
        //tao xong r xet user vs match;
        for (int i = 0; i < strlen(user); i++){
            int addOrNot = diff(Map, user[i],size);
            //neu no tra 1 thi cong vao add
            if (addOrNot){
               total++;
               }   
        }
    
    return total;
    }

int main(){
    
    //tao bien cho user nhap
    char user[] = "Abc";
    
    //tao match de check user;
    char match[] = "AvB";
    
    int results = result(user, match);
    
    //ans 
    printf("%d\n", results);
    return 0;
    }