#include <stdio.h>
#include <cs50.h>

// Spaces = Height - 1


int main(void)
{
    int height;
    do
    {
        printf("Hi! This program creates a Mario-style pyramid.\n");
        printf("How tall should the pyramid be (it can be up to 23 blocks high) ");
        height = GetInt();
    }
    while (height < 0 || height > 23);
   
    {
        //Loop will run "height" times
        for (int i = 0; i < height; i++)
        {
            //Within main loop, print spaces equal to current drawing height - 1 
            for (int j = 0; j < (height - 1) - i; j++)
            {
                printf(" ");
            }
            
            //Within main loop, print spaces equal to current loop + 2
            for (int m = 0; m < i + 2; m++)
            {
                printf("#");
            }
            
            printf("\n");
            
        }
    }
    return 0;
}
