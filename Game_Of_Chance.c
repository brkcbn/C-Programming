#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int die1,die2, sum, counter=0, result;
    int run;

    there :

    do
    {
        printf("To roll enter '0' and press 'Enter' : "); scanf("%d", &run);

        srand(time(NULL));

        die1= 1 + rand()%6;
        die2= 1 + rand()%6;

        sum=die1+die2;

        printf("\nYou roll %d + %d = %d \n\n", die1,die2, sum);

        if(counter>0)
        {
            if(sum == result)
            {
                printf("Congurulations ! You win with find your point !\n");
                break;
            }
            else if(sum == 7)
            {
                printf("You lose. House win\n");
                break;
            }
        }

    }while(counter>0);

    if(counter == 0)
    {
            if(sum==7 || sum==11)
            {
                printf("Congurulations ! You win ! \n");
            }

            else if(sum==2 || sum==3 || sum==12)
            {
                printf("You lose ! House win ! \n");
            }

            else
            {
                printf("You have %d point. To win, you should roll %d \n\n", sum, sum);

                counter++;

                result = sum;

                sum=0;

                goto there;

            }

    }

    return 0;
}
