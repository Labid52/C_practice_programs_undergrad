#include<stdio.h>
main( )
{
int a;
static char c [ ] = "Programming with C can be great fun!";
for (a =0; c[a]!='\0'; ++a)
if((a % 2) == 0)
printf ( "%c%c" , c [a],c[a]) ;
}
