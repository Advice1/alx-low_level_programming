#include <stdio.h>
  /** 
   *main-print prints all possible combinations of single-digit numbers
   *Numbers must be separated by ,, followed by a space followed by line
   *Ruturns: Always 0 (success) 
   */
int main(void)  
{
  
int N;
 
for (N = 48; N < 58; N++)
{
putchar(N);
if (N != 57)
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
} 
