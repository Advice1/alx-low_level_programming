#include <stdio.h>
  /** 
   *main-prints all the numbers of base 16 in lowercase,
   *followed by line
   *Ruturns: Always 0 (success) 
   */
int main(void)  
{
  
int N;
char cha;
 
for (N = 48; N < 58; N++)
{
putchar(N);
}
for (cha = 'a'; cha <= 'f'; cha++)
{
putchar(cha);
}
putchar('\n');
return (0);
} 
