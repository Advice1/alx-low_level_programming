#include<stdio.h>
/**
 *main : main fuction
 *return - (0) runs successfully
 */
int main(void)
{
  
int i;
long int ll;
long long lg;
float fl;
char c;

printf("Size of an int: %ul byte(s)\n", sizeof(i));
printf("Size of an long int: %ul byte(s)\n", sizeof(ll));
printf("Size of an long long: %ul byte(s)\n", sizeof(lg));
printf("Size of an float: %ul byte(s)\n", sizeof(fl));
printf("Size of an char %ul byte(s)\n", sizeof(c));
return (0);
}
