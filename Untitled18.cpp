#include<stdio.h>
 
int main()
{
    int input;
    int i, j;
     
    printf("Enter number : ");
    scanf("%d", &input);
     
	 for(j = 0; j < input; j++)
        {
            printf("*");
        }
        printf("\n");
    
    return 0;
}
