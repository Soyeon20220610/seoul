#include <stdio.h>
#include "ft_abs.h"

int main() 
{
    int num = -5;
    int abs_num = ABS(num);
    
    printf("The absolute value of %d is %d\n", num, abs_num);

    return 0;
}