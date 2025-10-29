#include <stdio.h>
/** declaration of global vareble */
int num=55; int mu=0;

/** sum function where er gonns dum thr two value  a + b
 * */

 int cal_sum (int a ,int b){
	 int c=0;
	 c=a+b;
	 return c;
 }
 
 
 /** tha a funtion tha  gnna  su the digt  usismg the fuctio  cal_sum*/
 int sum_dig(int num){ 
	 int m=0;
	  
	 int r=num%10;
	 int n=num/10;
	
		m=cal_sum (n,r);

		 
		return m ;
 }
 

int main(){
	
	
	/** here is whrere a gonna call my sum fution*/
	mu =sum_dig( num);
	printf(" Soma dos digitos de uma numero %d\n",mu);







	return 0;
}



