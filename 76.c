#include <stdio.h>
int main()
{
    int nu, i, flag = 0;

    printf("Enter a positive integer: ");
    scanf("%d",&nu);

    for(i=2; i<=nu/2; ++i)
    {
        
        if(nu%i==0)
        {
            flag=1;
            break;
        }
    }

    if (flag==1)
        printf("%d is a composite number.",nu);
    else
        printf("%d is not a composite number.",nu);
    
    return 0;
}
