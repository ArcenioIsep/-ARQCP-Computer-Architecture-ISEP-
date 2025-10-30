#include <stdio.h>

int main(){
int vec[] = {10, 20, 30, 40};
int* ptr_vec = vec;
int z = *ptr_vec;
int h = *(ptr_vec + 3);

    printf("x = %d e y = %d\n", z, h);
    printf("hexadecimal address: %p\n", &ptr_vec);
    printf("hexa deimal of vec %p\n",&vec[0]);
      printf(" The values of ptr_vec %p\n", ptr_vec);
            printf("The values of vec %p\n",&vec[0]);

        




	return 0;
}
