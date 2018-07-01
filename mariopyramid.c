//  This simple program prints the Mario's pyramid on the 
//  terminal at an arbitrary height and respectively width.

#include <stdio.h>

int main(void)
{
    int height;     //  Necessary declarations and
    int k = 1;      //  an assignment.
    
    printf("Enter the height of the pyramid..\n");
    scanf("%d", &height);
    
    //  Inside of a for loop, while trying
    //  to control the number of repeats
    //  of each different operation at each
    //  step it's convenient to
    //  focus on the right side of the 
    //  inequality by declaring a unique
    //  variable.
    
    for (int i = 0; i < height; i++)          
    {                                          
        for (int a = 0; a < height - k; a++)   
        {                                     
            printf(" ");                       
        }
        
        for (int a = 0; a < k; a++)
        {
            printf("#");
        }
        
        printf("  ");
        
        for (int a = 0; a < k; a++)
        {
            printf("#");
        }
        
        k++;
        
        printf("\n");
    }
    
    return 0;
}