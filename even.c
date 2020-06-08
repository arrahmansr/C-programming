#include<stdio.h>
/*returntype FuncName(para1, para2)
{
             
             statements;
             
             
             return val;
             
}*/
void checkEven(int a);

int main()
{
     int x;
     printf("Enter a Number whose type is check: \t");
     scanf("%d",&x);
     checkEven(x);
     getch();
     return 0;
}

void checkEven(int a)
{
     if(a%2==0)
     {
               printf("The number is Even !\n");
     }
     else 
     {
              printf("The number is Odd !\n");
     }
     
     
}
