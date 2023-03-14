#include <stdio.h>
int main()
{
char charType; //char 변수 charType 초기화
int integerType; //int 변수 integerType 초기화
float floatType;//float 변수 floatType 초기화
double doubleType;//double 변수 doubleType 초기화

printf("----- [유도현]  [2022041001] -----\n\n");//이름 출력
printf("Size of char: %ld byte\n",sizeof(charType)); //char변수 charType이 차지하는 용량 출력
printf("Size of int: %ld bytes\n",sizeof(integerType));//int 변수 integerType이 차지하는 용량 출력
printf("Size of float: %ld bytes\n",sizeof(floatType));//float 변수 floatType이 차지하는 용량 출력
printf("Size of double: %ld bytes\n",sizeof(doubleType));//double 변수 doubleType가 차지하는 용량 출력

printf("-----------------------------------------\n");// 줄 출력
printf("Size of char: %ld byte\n",sizeof(char));//char 자료형이 차지하는 용량 출력
printf("Size of int: %ld bytes\n",sizeof(int));//int 자료형이 차지하는 용량 출력
printf("Size of float: %ld bytes\n",sizeof(float));//float 자료형이 차지하는 용량 출력
printf("Size of double: %ld bytes\n",sizeof(double));//double 자료형이 차지하는 용량 출력
printf("-----------------------------------------\n");//줄 출력
printf("Size of char*: %ld byte\n",sizeof(char*));//char 자료형 포인터 변수가 차지하는 용량 출력
printf("Size of int*: %ld bytes\n",sizeof(int*));//int 자료형 포인터 변수가 차지하는 용량 출력
printf("Size of float*: %ld bytes\n",sizeof(float*));//float 자료형 포인터 변수가 차지하는 용량 출력
printf("Size of double*: %ld bytes\n",sizeof(double*));//double 자료형 포인터 변수가 차지하는 용량 출력
return 0;
}