#include <stdio.h>

void get_min_max(int* vec, int n, int* min, int* max,float* avg) {
	int sum=0;
    if (n <= 0) return;

    *min = *vec;
    *max = *vec;

    for (int i = 1; i < n; i++) {
		sum=sum+ *(vec+1);
		
        int valor = *(vec + i);

        if (valor > *max)
            *max = valor;
        else if (valor < *min)
            *min = valor;
    }
    *avg=sum/n;
}

int main() {
    int vec[] = {10, 5, 25, 7, 18};
    int menor, maior;
    float avg;

    get_min_max(vec, 5, &menor, &maior,&avg);

    printf("Menor = %d\n", menor);
    printf("Maior = %d\n", maior);
    printf("Medio = %.2f\n", avg);


    return 0;
}
