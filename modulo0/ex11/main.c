#include <stdio.h>
# include "average.h"



 

int main(){ 
	int a=0;
	
	/// delcar o arry e inicilizar  aqui 
	int v [] = {1, 2, 3,10,5};
	int n=5;
	
	/// obter o tanamno do arry 
	
	///chamar a funcao de  calcular a media
	a=average(v,  n);
	printf("Media de numeros dento do array %d",a);

	return 0;
}



