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
  if (per>85)
  {
      printf("Grade A\n");
  }
  else if (per>65)
  {
      printf("Grade B\n");
  }
  else if (per>45)
  {
      printf("Grade C\n");
  }
  else if (per>33)
  {
      printf("Fail\n");
  }
  

  
 
  return 0;
}