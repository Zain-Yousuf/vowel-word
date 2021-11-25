#include<stdio.h>
int main ()
{
char c;
printf("enter the operation :");
scanf("%c",&c);
switch (c) {
case'a':
printf("a is vowel\n"); 
break;
case'e':
printf("e  is vowel\n"); 
break;
case'i':
printf("i is vowel\n"); 
break;
case'o':
printf("o is vowel\n"); 
break;
case'u':
printf("u is vowel \n"); 
break;
default:
printf("it is not a vowel\n");
break;
}

}
