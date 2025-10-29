#include <stdio.h>
/** declaration of global vareble */
int a=2; int b=3; int mu=0;

/** sum function where er gonns dum thr two value  a + b
 * */

 int cal_sum (int a ,int b){
	 int c=0;
	 c=a+b;
	 return c;
 }
 
 
 /** tenho qu fazer a mutipliccao usando soma sucessiva se usar a multiplicacao*/
 int mul(int a,int b){
	 int m=0;
	 for (int i=0;i<b;i++){
		m=cal_sum ( m ,a);
	}
		 
		return m ;
 }
 

int main(){
	
	
	/** here is whrere a gonna call my sum fution*/
	mu =mul(a,b);
	printf("mutiplicacao usando soma  of a + b= %d\n",mu);







	return 0;
}



