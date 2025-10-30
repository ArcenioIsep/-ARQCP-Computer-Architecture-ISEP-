#include <stdio.h>

int main(){
int vec[] = {10, 20, 30, 40};
int* ptr_vec = vec;
 int i;
for(i = 0; i < 4; i++){
printf("1: %p, isso %d\t", &vec[i], vec[i]);
}
printf("\n");
for(ptr_vec = vec; ptr_vec < vec + 4; ptr_vec++){
printf("2: %p,  %d\t", ptr_vec,*ptr_vec);
}
printf("\n");
for(ptr_vec = vec + 3; ptr_vec >= vec; ptr_vec--){
printf("3: %p,%d\t", ptr_vec,*ptr_vec);
printf("\n");

printf("\n");
unsigned int d = 0xAABBCCDD;
printf("10: %p,%x\t", &d,d);
printf("\n");
unsigned char* ptr_d = (unsigned char*)&d;
unsigned char* p;
for(p = ptr_d; p < ptr_d + sizeof(unsigned int); p++){
printf("11: %p,%x\t", p,(unsigned char)*p);}

}

 
        



	return 0;
}
