#include <stdio.h>
/** declaration of global vareble */
char letra='a';
int mu=0;



int get_ascii_code(char c) {
    

    return c;
}

 

int main(){
	
	
	/** here is whrere a gonna call my sum fution*/
	mu =  get_ascii_code(letra ) ;
    printf("O código ASCII de '%c' é %d\n", letra, mu);



	return 0;
}



