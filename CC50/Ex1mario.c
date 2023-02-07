#include <stdio.h>

void buildPyramid(int );

int main()
{
    int number;
    
    do
    {
        printf("\ninsira um numero: ");
        scanf("%i", &number);
        
    } while(number < 1 || number > 8);
    
    buildPyramid(number);
}
    
void buildPyramid(int number)
{
    int i, j, k;
    
    for(i = 0; i < number; i++)
    {
        for(j = number - i; j > 1; j--)
        {
            printf(" ");
        }
        for(k = 0; k <=i; k++){
            printf("#");
        }
        printf("\n");
    }
}
