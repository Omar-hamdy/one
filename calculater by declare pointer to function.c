#include <stdio.h>

void add(int a, int b);
 void subtract(int a, int b);
  void multiply(int a, int b);

int main(){

void (*fun_ptr_arr[])(int, int) = {add, subtract,multiply};
 unsigned ch, a = 15, b =10;

printf("Enter choice operator Add = 1, subtract = 2, and multiply = 3\n");
 scanf("%d", &ch);


if (ch > 2) return 0;

 (*fun_ptr_arr[ch])(a,b);

 return 0;
}

void add(int a, int b){

printf("the value for add is :%d", a+b);

}

void subtract(int a, int b){
printf("the value for subtract is :%d", a-b);

}

void multiply(int a, int b){
printf("the value for multiply is :%d", a*b);

}
