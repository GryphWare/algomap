#include <stdio.h>

//da function
int compare(const char* j, const char* s){
    
    //cuz ascii have 128 str?
    bool False[128] = {false};
    
    //in j str -> true (change)
    for (size_t i = 0; j[i] != '\0'; i++){
        False[(int)j[i]] = true;
        }
    
    //check if key in s == j    
    int count = 0;
    for (size_t i = 0; s[i] != '\0'; i++){
        if(False[(int)s[i]]){ //true
            count++;
            }
        }
    return count;
    }

int main(){
    
    char j[] = "aA";//ran
    char s[] = "aAABbbb"; //ran
    
    int result = compare(j, s); //work in function w/ return
    
    printf("%d", result); //result
    
    
    return 0;
    }