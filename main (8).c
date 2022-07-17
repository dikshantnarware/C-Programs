/***********Increment Decrement Oprations
****/

#include <stdio.h>

int
main ()
{

  int x = 97;
  int y;
////Increment
  printf ("x=%d\n", x);
 y= x++ + ++x + ++x + x++;
  printf ("x=%d\n", x);
    printf("x=%d\n",x);
    
  y=x-- + --x + --x + x--;
      printf("x=%d\n",x);
/////Decrement

    printf("y=%d\n",y);
   x= y--;
        printf("y=%d\n",y);
       x= --y;
            printf("y=%d\n",y);
          
    
                   
  return 0;
}
