#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number, smallest, second_smallest, counter=0;

    do
    {
        printf("Please enter a positive number : "); scanf("%d", &number);

        if(number == -1)
            continue;

        if(counter == 0)
        {
            smallest=number;
        }
        else if( counter == 1)
        {
            if(number < smallest)
            {
                second_smallest = smallest;

                smallest = number;
            }
            else
            {
                second_smallest=number;
            }
        }
        else if(counter>1)
        {
            if(number<smallest)
            {
                second_smallest=smallest;

                smallest= number;
            }
            else
            {
                if(number<second_smallest)
                {
                    second_smallest = number;
                }
            }
        }
        counter++;
    }while(number != -1);


    printf("The second smallest number is %d", second_smallest);

    return 0;
}
