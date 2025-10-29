#include <stdio.h>
/** declaration of global vareble */
int a=5; int b=9; int sum=0;

/** sum function where er gonns dum thr two value  a + b
 * */

 int cal_sum (int a ,int b){
	 int c=0;
	 c=a+b;
	 return c;
 }

int main(){
	
	
	/** here is whrere a gonna call my sum fution*/
	sum =cal_sum(a,b);
	printf("Sum of a + b= %d\n",sum);







	return 0;
}



