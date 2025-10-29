#include <stdio.h>
/** declaration of global vareble */
int num=10; int mu=0;

/** sum function where er gonns dum thr two value  a + b
 * */

int cmp(int a ,int b){
	if(a<b){ 
		return  -1;
	}else if(a==b){
		return 0;
		}else { return 1;
		}
}



int get_greatest_digit(int num) {
    int great = 0;

    while (num > 0) {
        int digit = num % 10;
        if (cmp(digit, great) == 1) {
            great = digit;
        }
        num /= 10;
    }

    return great;
}

 

int main(){
	
	
	/** here is whrere a gonna call my sum fution*/
	mu = get_greatest_digit( num);
	printf(" %d",mu);







	return 0;
}



