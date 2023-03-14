#include <stdio.h>
int main()
{
int i, *p; // 정수형 변수 i 와 정수형 포인터변수 p 선언
i = 10; // i 에 10 집어넣기
printf("value of i = %d\n", i); //"value of i = (i의 값 = 10)(개행)" 출력
printf("address of i = %p\n", &i);//"address of i = (i의 주소)(개행)" 출력
printf("value of p = %p\n", p);//"value of p = (p가 가리키는 주소)(개행)" 출력
printf("address of p = %p\n", &p);//"address of p = (p의 주소)(개행)" 출력
p = &i; //포인터 p에 i의 주소 넣기
printf("\n\n----- after p = &i ------------\n\n"); //"(개행 두번)----- after p = &i ------------(개행 두번)" 출력
printf("value of p = %p\n", p); //"value of p = (i의 주소)(개행)" 출력
printf("address of p = %p\n", &p);//"address of p = (p의 주소)(개행)" 출력
printf("dereferencing *p = %d\n", *p);// dereferencing *p = (p를 참조한 값 = i 의 값)(개행)" 출력
return 0;
}