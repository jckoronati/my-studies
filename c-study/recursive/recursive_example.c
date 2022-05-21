#include <stdio.h>

void prints(int number) 
{
    if (number == 0)
        printf("\n%d\n", number);
    else 
    {
        printf("%d ", number);
        prints(number - 1);
        printf("%d ", number);
    }    
}

int main()
{
    int number;
    printf("Enter a number greater than 0: ");
    scanf("%d",&number);
    prints(number);
    printf("\n");
    return 0;
}