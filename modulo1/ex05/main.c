#include <stdio.h>
void copy_vec(int *vec1, int n ,int *vec2){
	for (int i=0;i<n;i++){
		*(vec2 + i) = *(vec1 + i);
	
	
	}
}




int main(){
	
int origem[] = {10, 20, 30, 40};
int destino[4]; ///vazio, mas com espaço

copy_vec(origem, 4, destino);

for (int i = 0; i < 4; i++) {
        printf("  %d ", destino[i]);
        
                ///printf("  %d ", origem[i]);

    }


	return 0;
}
