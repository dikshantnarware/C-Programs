/***********Increment Decrement Oprations
****/

#include <stdio.h>

int
main ()
{

  int x = 17;
  int y = 12;
////Increment
  printf ("x=%d\n", x);
  x++;
  printf ("x=%d\n", x);
    printf("x=%d\n",x);
    
  ++x;
      printf("x=%d\n",x);
/////Decrement

    printf("y=%d\n",y);
    y--;
        printf("y=%d\n",y);
        --y;
            printf("y=%d\n",y);
           ///both veribles use 
            
            
            y=++x;
                printf("x=%d\n",x);
                    printf("y=%d\n",y);
            x=--y;
            printf("x=%d\n",x);
                    printf("y=%d\n",y);
                    
                    
                   
  return 0;
}
