#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float up_side=1, down_side=0, result=0;
    float n,r,s;
    float i,k,j;

    start : printf("Please enter the positive value of 'N' : "); scanf("%f", &n);

    printf("Please enter the positive value of 'R' : "); scanf("%f", &r);

    printf("Please enter the positive value of 'S' : "); scanf("%f", &s);



    if(s<=0 || r<=0 || n<=0 )
    {
        printf("Error ! You should go to start ! \n");
        goto start;
    }

    for( i=1; i<=n; i++)
    {
        for( k=1; k<=r; k++)
        {
            up_side = (up_side) *  ((3*(pow(k,3))+5) / (pow(k,2)) );
        }
        for( j=1; j<=s; j++)
        {
            down_side =  (down_side) + ( sqrt( (3*pow(j,3))+j+2 ) / (2*j) );
        }

        result =  (result) + ( up_side  / down_side );

    }


    printf("Result is : %.2f ", result);
    return 0;
}
