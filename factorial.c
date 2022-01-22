#include <stdio.h>
#include <math.h>
void main()
{
    int num, i, fact = 1;
    printf("Enter a number: \n");
    scanf("%d", &num);

    if (num < 0)
    {
        printf("Error!!");
    }
    if (num >= 0)
    {
        while (num != 0)
        {
            i = num;
            fact = fact * i;
        }
    }
    printf("Fcatorial of %d is %d\n", num, fact);
}