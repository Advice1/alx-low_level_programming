#include <stdio.h>
/**
 *main-printing the alphabet in lowercase in reverse
 *followed by line
 *Ruturns: Always 0 (success)
 */
int main(void)
{
char cha;

for (cha = 'z'; cha >= 'a'; cha--)
{
putchar(cha);
}
putchar('\n');
return (0);
}
