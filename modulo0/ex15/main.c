#include <stdio.h>
#include "count_words.h"
 
int main(){
    char w[]="jose maria joao";
     
    /// vai buscar  o numero de   que esta no arry chamando a funcao
    int  n=count_words(w);
    ///  now im going to show th result 
    printf(" tha number of word is %d",n);



    return 0;
}