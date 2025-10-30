#include <stdio.h>
void swap_nums(int *x, int *y){
int tmp;
tmp = *x;
*x = *y;
*y = tmp;
}

void swap_pointers(const char **x, const char **y){
    const char *tmp = *x;
    *x = *y;
    *y = tmp;
}


int main(){
int a=3,b=4;
const char *s1,*s2;
swap_nums(&a,&b);
printf("a is %d\n", a);
printf("b is %d\n", b);

  s1 = "I should print second";
  s2 = "I should print first";
    printf("ANTES DA TROCA:\n");
    printf("s1 = %s\n", s1);
    printf("s2 = %s\n", s2);
    printf("endereço s1 -> %p\n", (void *)s1);
    printf("endereço s2 -> %p\n", (void *)s2);

swap_pointers(&s1,&s2);
printf("s1 is %s\n", s1);
printf("s2 is %s\n", s2);
printf("endereço s1 -> %p\n", (void *)s1);
printf("endereço s2 -> %p\n", (void *)s2);


	return 0;
}
