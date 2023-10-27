#include <stdio.h>
void print_binary(unsigned long int n)
{
if (n == 0)
{
putchar('0');
return;
}
int bit_position = sizeof(unsigned long int) * 8 - 1;
int bit_mask = 1 << bit_position;
while (bit_mask > 0)
{
if (n & bit_mask)
{
putchar('1');
}
else
{
putchar('0');
}
bit_mask >>= 1;
}
}
int main()
{
unsigned long int number = 42;
printf("Binary representation of %lu: ", number);
print_binary(number);
printf("\n");
return 0;
}
