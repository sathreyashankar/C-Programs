#include <stdio.h>
void main()
{
    int num, rem, rev = 0, temp;
    printf("Enter an Integer Number: \n");
    scanf("%d", &num);
    temp = num;

    while (num > 0)
    {
        rem = num % 10;
        rev = rev * 10 + rem;
        num = num / 10;
    }
    if (temp == rev)
    {
        printf("%d is a palindrome!!!", temp);
    }
    else
    {
        printf("%d is not a palindrome!!!\nThe reverse of %d is %d\n", temp, temp, rev);
    }
}
