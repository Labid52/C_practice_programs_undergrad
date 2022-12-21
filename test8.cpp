#include<stdio.h>
main()
{ 	int i = 12345, j = -13579, k = -24680;
long ix = 123456789;
short sx = -2222;
unsigned ux = 5555;
printf("%08d %08d \n%d %ld %d %U", i, j, k, ix, sx, ux);
}
