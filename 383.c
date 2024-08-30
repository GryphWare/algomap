#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h> //true and false

#define table 26 //alphabet in english

int hash(char key){
    return key - 'a'; //convert to index in table
}

bool check(const char* ransomNote, const char* megazine){
    
    int *hashmap = (int*) calloc (table, sizeof(int)); //frequency
    
    for (size_t i = 0; megazine[i] != '\0'; i++){
        hashmap[hash(megazine[i])]++; //frequency
    }
    
    for (size_t i = 0; ransomNote[i] != '\0'; i++){
        if(hashmap[hash(ransomNote[i])] == 0){
            return false; //different or out of str
        }
        hashmap[hash(megazine[i])]--; //same
    }
    return true;
}

int main() {
    
    char ransomNote[] = "aa";//ran
    char megazine[] = "c"; //ran
    
    bool result = check(ransomNote, megazine); //function
    
    printf("%d", result);
    return 0;
}