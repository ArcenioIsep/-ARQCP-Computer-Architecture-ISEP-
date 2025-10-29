#include "count_words.h"

int count_words(char str[]){
    int count =0;
    for (int i=0;str[i]!='\0';i++){
        ///  if had space cont 
        if(str[i]==' '){
            count ++;
        }
    }
            return count;


}