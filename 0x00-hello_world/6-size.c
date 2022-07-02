#include<stdio.h>
/**
 *main : main fuction
 *program that prints the size of data types
 *return - (0) runs successfully
 */
int main(void)
{

int i;
long int ll;
long long lg;
float fl;
char c;
 
printf("Size of a char: %lu byte(s)\n", sizeof(c));
printf("Size of an int: %lu byte(s)\n", sizeof(i));
printf("Size of a long int: %lu byte(s)\n", sizeof(ll));
printf("Size of a long long: %lu byte(s)\n", sizeof(lg));
printf("Size of a float: %lu byte(s)\n", sizeof(fl));
return (0);
}
