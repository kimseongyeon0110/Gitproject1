#include <stdio.h>
int main(){
printf("[----- [김성연] [2020039003] -----]\n\n");
int i; //int형 변수 i 선언
int *ptr; //포인터 ptr 선언
int **dptr; //이중포인터 dptr 선언
i = 1234; //i에 1234 대입
printf("[checking values before ptr = &i] \n");
printf("value of i == %d\n", i); //i 출력
printf("address of i == %p\n", &i); //i의 주소 출력
printf("value of ptr == %p\n", ptr); //ptr값 출력
printf("address of ptr == %p\n", &ptr);//ptr의 주소 출력
ptr = &i; /* ptr is now holding the address of i */
printf("\n[checking values after ptr = &i] \n");
printf("value of i == %d\n", i); //i 출력
printf("address of i == %p\n", &i); //i의 주소 출력
printf("value of ptr == %p\n", ptr); //i의 주소를 담는 ptr값 출력
printf("address of ptr == %p\n", &ptr);//ptr의 주소 출력
printf("value of *ptr == %d\n", *ptr);//ptr이 가리키는 값인 I값 출력
dptr = &ptr; /* dptr is now holding the address of ptr */
printf("\n[checking values after dptr = &ptr] \n");
printf("value of i == %d\n", i); //i 출력
printf("address of i == %p\n", &i);//i의 주소 출력
printf("value of ptr == %p\n", ptr);//i의 주소를 담는 ptr값 출력
printf("address of ptr == %p\n", &ptr);//ptr의 주소 출력
printf("value of *ptr == %d\n", *ptr);//ptr이 가리키는 값인 i값 출력
printf("value of dptr == %p\n", dptr);//ptr의 주소가 담긴 dptr값 출력
printf("address of dptr == %p\n", &dptr); //dptr의 주소 출력
printf("value of *dptr == %p\n", *dptr); //dptr이 가리키는 값인 ptr값 출력
printf("value of **dptr == %d\n", **dptr);//이중포인터 dptr이 가리키는 i값 출력
*ptr = 7777; /* changing the value of *ptr */
printf("\n[after *ptr = 7777] \n"); //포인터 ptr이 가리키는 i값에 7777 대입
printf("value of i == %d\n", i); //바뀐 i 값 출력 7777
printf("value of *ptr == %d\n", *ptr); //ptr이 가리키는 i값 출력
printf("value of **dptr == %d\n", **dptr);//이중포인터 dptr가 가리키는 i값 출력
**dptr = 8888; /* changing the value of **dptr */
printf("\n[after **dptr = 8888] \n"); //이중 포인터 dptr이 가리키는 i값에 8888 대입
printf("value of i == %d\n", i); //바뀐 i값 출력 8888
printf("value of *ptr == %d\n", *ptr);//ptr이 가리키는 i값 출력 8888
printf("value of **dptr == %d\n", **dptr);//이중포인터dptr 가 가리키는 i값 출력
return 0;
}
