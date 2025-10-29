#include <stdio.h>
/** declaration of global vareble */
int a=2;int b=2; int mu=0;

/** sum function where er gonns dum thr two value  a + b
 * */

int cmp(int a ,int b){
	if(a<b){ 
		return -1;
	}else if(a==b){
		return 0;
		}else { return 1;
		}
}
 

int main(){
	
	
	/** here is whrere a gonna call my sum fution*/
	mu = cmp( a , b);
	printf(" %d",mu);







	return 0;
}



