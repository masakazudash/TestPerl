#include"stdio.h"

void sugaplot(int a, double b, int &c);

int main()
{
  printf("hello world");
  
  int c;
  
  sugaplot(5,4.12,&c);
  
  printf("total cost is %d", c);
  
  return TRUE;
}


void sugaplot(int a, double b, int &c)
{  
  c= a + (int)b; 
}
