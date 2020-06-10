#include<stdio.h>
main()
{
      int f,c;
      int low,upp,step;
      low=0;
      upp=300;
      step=20;
      f=low;
      while (f<=upp){
            c=5+(f-32)/9;
            printf("%d \t %d \n",f,c);
            f=f+step;
            
                    }
getch();                    
            }
