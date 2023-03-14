#include <stdio.h>
int main()
{

int i; //int 변수 i 초기화
int *ptr; //int 포인터 변수 ptr 초기화
int **dptr;// int 이중 포인터 변수 dptr 초기화
i = 1234; //i 에 1234 집어넣기

printf("----- [유도현]  [2022041001] -----\n\n");//이름 출력

printf("[checking values before ptr = &i] \n"); //[checking values before ptr = &i] 출력
printf("value of i == %d\n", i); //value of i == (i의 값 = 1234) 출력
printf("address of i == %p\n", &i); //address of i == (i의 주소) 출력
printf("value of ptr == %p\n", ptr); //value of ptr == (ptr의 값 = 무작위 주소) 출력
printf("address of ptr == %p\n", &ptr);//address of ptr == (ptr 자체의 주소) 출력

ptr = &i; /* ptr is now holding the address of i */
printf("\n[checking values after ptr = &i] \n"); //[checking values after ptr = &i] 출력
printf("value of i == %d\n", i);//value of i == (i의 값 = 1234)
printf("address of i == %p\n", &i);//address of i == (i의 주소)
printf("value of ptr == %p\n", ptr);//value of ptr == (ptr의 값 = i의 주소) 출력
printf("address of ptr == %p\n", &ptr);//address of ptr == (ptr 자체의 주소) 출력
printf("value of *ptr == %d\n", *ptr);//value of *ptr == (ptr을 역참조 한 값 = i의 값 = 1234)
dptr = &ptr; /* dptr is now holding the address of ptr */
printf("\n[checking values after dptr = &ptr] \n");//[checking values after dptr = &ptr]출력
printf("value of i == %d\n", i);//value of i == (i의 값 = 1234) 출력
printf("address of i == %p\n", &i);//address of i == (i의 주소) 출력
printf("value of ptr == %p\n", ptr);//value of ptr == (ptr의 값 = i의 주소) 출력
printf("address of ptr == %p\n", &ptr);//address of ptr == (ptr 자체의 주소) 출력
printf("value of *ptr == %d\n", *ptr);//value of *ptr == (ptr을 역참조 한 값 = i의 값 = 1234)
printf("value of dptr == %p\n", dptr);//value of dptr == (dptr의 값 = ptr의 주소)
printf("address of dptr == %p\n", &dptr);//address of dptr == (dptr 자체의 주소)
printf("value of *dptr == %p\n", *dptr);//value of *dptr == (dptr을 역참조 = ptr의 값 = i의 주소)
printf("value of **dptr == %d\n", **dptr);//value of **dptr == (dptr을 두번 역참조 = ptr을 역참조 = i의 값 = 1234)
*ptr = 7777; /* changing the value of *ptr */
printf("\n[after *ptr = 7777] \n");//[after *ptr = 7777] 출력
printf("value of i == %d\n", i); //value of i == (i의 값 = 7777)
printf("value of *ptr == %d\n", *ptr);//value of *ptr == (ptr을 역참조 = i의 값 = 7777)
printf("value of **dptr == %d\n", **dptr);//value of **dptr == (dptr을 두번 역참조 = ptr을 역참조 = i의 값 = 7777)
**dptr = 8888; /* changing the value of **dptr */
printf("\n[after **dptr = 8888] \n");//[after *ptr = 8888] 출력
printf("value of i == %d\n", i);//value of i == (i의 값 = 8888)
printf("value of *ptr == %d\n", *ptr);//value of *ptr == (ptr을 역참조 = i의 값 = 8888)
printf("value of **dptr == %d\n", **dptr);//value of **dptr == (dptr을 두번 역참조 = ptr을 역참조 = i의 값 = 8888)
return 0;

}