#include <stdio.h>
/**
 *main-printing the alphabet in lowercase
 *followed by line
 *Ruturns: Always 0 (success)
 */
int main(void)
{
char cha;

for (cha = 'a';cha <= 'z';cha++)
{
putchar(cha);
}
putchar('\n');
return (0);
}
