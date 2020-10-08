#include <stdio.h>  
int main()
{
    int prn, marks;

    printf("Enter Your PRN\n");
    scanf("%d",&prn);
    
    printf("Enter Your marks\n");
    scanf("%d",&marks);
    switch (prn)
    {
    case 9:
        printf("Your PRN Is 9\n");
        switch (marks)
        {
        case 40:
            printf("Your Marks Are 40\n");
            break;
        
        default:
            printf("Your Marks Are Not 40\n");
            break;
        }
        break;
    case 29:
        printf("Your PRN Is 29\n");
         switch (marks)
        {
        case 40:
            printf("Your Marks Are 40\n");
            break;
        
        default:
            printf("Your Marks Are Not 40\n");
            break;
        }
        break;
    default:
        printf("Enter Your Valid PRN\n");
        break;
    }
    return 0;
}
