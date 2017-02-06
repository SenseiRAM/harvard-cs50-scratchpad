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
    
    int drawHeight = height;
   
    {
        //Loop will run "height" times
        for (int i = 0; i < height; i++)
        {
            //Within main loop, print spaces equal to current drawing height - 1 
            for (int n = 1; n < drawHeight; n++)
            {
                printf(" ");
            }
            
            //Within main loop, print spaces equal to (pyramid height - current draw height) + 2
            for (int m = 0; m < (height - drawHeight) + 2; m++)
            {
                printf("#");
            }
            
            printf("\n");
            
            drawHeight--;
        }
    }
    return 0;
}
