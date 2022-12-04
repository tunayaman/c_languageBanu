#include <stdio.h>
#include <math.h>


void powerNumbers(float baseNumber, int exponent)
{
    float result;
    result = pow(baseNumber,exponent);

    printf("result = %.3f",result);
}

int main()
{
    int baseNumber,exponent;

    printf("enter the base number: ");
    scanf("%d",&baseNumber);
    printf("enter the exponent: ");
    scanf("%d",&exponent);

    powerNumbers(baseNumber,exponent);

}
