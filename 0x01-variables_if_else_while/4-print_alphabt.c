#include <stdio.h>
  /** 
   *main-printing the alphabet in lowercase
   *followed by line except for q and e
   *Ruturns: Always 0 (success) 
   */
int main(void)  
{
  
char cha;
 
for (cha = 'a'; cha <= 'z'; cha++)
{
if(cha != 'e' && cha !='q')
{
putchar(cha);
}
}
putchar('\n'); 
return (0);
}         
