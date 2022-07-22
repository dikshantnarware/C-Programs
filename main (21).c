/***********************Switch Case******************************/

#include <stdio.h>

int main()
{
    int c;
    int x,y;
    printf("...............Menu.............\n");
    printf("1.sum\n"); 
    printf("2.sub\n");
    printf("3.multi\n");
    printf("4.div\n");
     scanf("%d\n",&c);
    printf("Enter Your Choice\n");
   
    scanf("%d\n",&x);
    printf("Enter No-1\n");
   
    printf("Enter No-2\n");
    scanf("%d\n",&y);
    
    
    switch(3){
        case 1:
        printf("sum=%d\n",x+y);
        break;
        case 2:
        printf("sub=%d\n",x-y);  
        break;
        case 3:
        printf("multi=%d\n",x*y);
        break;
        case 4:
        printf("div=%d\n",x/y);
        break;
        default:
        printf("Invalid Caracter\n");
    }
   
    return 0;
}
