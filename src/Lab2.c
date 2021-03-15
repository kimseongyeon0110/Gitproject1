/*
 ============================================================================
 Name        : Lab2.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
int main()
{
printf("[----- [김성연] [2020039003] -----]\n\n");
char charType; // 문자형 변수 선언
int integerType; // 정수형 변수 선언
float floatType; // 실수형 변수 선언
double doubleType; // 실수형 변수 선언
printf("Size of char: %ld byte\n",sizeof(charType)); //문자형 변수 크기 1바이트 출력
printf("Size of int: %ld bytes\n",sizeof(integerType)); //정수형 변수 크기 4바이트 출력
printf("Size of float: %ld bytes\n",sizeof(floatType)); //실수형 변수 크기 4바이트 출력
printf("Size of double: %ld bytes\n",sizeof(doubleType)); //실수형 변수 크기 8바이트 출력
printf("-----------------------------------------\n");
printf("Size of char: %ld byte\n",sizeof(char)); //문자형 크기 1바이트 출력
printf("Size of int: %ld bytes\n",sizeof(int)); //정수형 크기 4바이트 출력
printf("Size of float: %ld bytes\n",sizeof(float)); //실수형 크기 4바이트 출력
printf("Size of double: %ld bytes\n",sizeof(double)); //실수형 크기 8바이트 출력
printf("-----------------------------------------\n");
printf("Size of char*: %ld byte\n",sizeof(char*)); //포인터 변수는 자료형에 상관없이 4바이트 크기로 할당되므로 4바이트 출력
printf("Size of int*: %ld bytes\n",sizeof(int*)); //위와 같음
printf("Size of float*: %ld bytes\n",sizeof(float*)); //위와 같음
printf("Size of double*: %ld bytes\n",sizeof(double*)); //위와 같음
return 0;
}
