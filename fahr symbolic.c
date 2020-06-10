#include<stdio.h>
#define low 0
#define  upp 300
#define step 20

main()
{
      int fahr,celsius;
      fahr=low;
      while (fahr<=upp){
            celsius=(5*(fahr-32))/9;
            printf("%d \t %d \n",fahr,celsius);
            fahr += step;
            
                    }
getch();   
//return 0;                 
            }
