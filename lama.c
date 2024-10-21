#include <stdio.h>
#include <string.h>

//ham cau truc
typedef struct {
    int value;
    char key;
} roman;

//ham converted
int converted(const char *str){
    
    int current, next, total = 0;
    int size = strlen(str);
    
    roman key_value[] = {
        {1, 'I'}, 
        {5, 'V'},
        {10, 'X'},
        {50, 'L'},
        {100, 'C'},
        {500, 'D'},
        {1000, 'M'}
    };
    int sizeRoman = sizeof(key_value) / sizeof(key_value[0]);
    
    for (size_t i = 0; i < size; i++){
        
        for (size_t j = 0; j < sizeRoman; j++){
            if (str[i] == key_value[j].key){
                current = key_value[j].value;
            }
        }
        for (size_t j = 0; j < sizeRoman; j++){
            if (str[i + 1] == key_value[j].key){
                next = key_value[j].value;
            }
        }
        if (current < next){
            total -= current;
        } else {
            total += current;
        }
    }
    return total;
}

int main(){
    
    char user[1000];
    //user nhap o day
    scanf("%s", user);
    
    //in
    printf("%s la %d\n", user, converted(user));
    return 0;
}