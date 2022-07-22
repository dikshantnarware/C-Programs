/**********  Student grade Program Program
******************************/


#include <stdio.h>

int main() {
  int p,c,m;
  int t;
  int per;
  
  printf("Enter Marks in 3 Subjects (p,c,m) :-\n");
  
  scanf("%d%d%d",&p,&c,&m);
  t=p+c+m;
  per=t/3;
  
  printf("Percentage=%d\n",per);

  
 
  return 0;
}