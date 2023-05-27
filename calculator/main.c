#include <stdio.h>
#include <stdlib.h>

void addition(float *operand1, float operand2);
void subtraction(float *operand1, float operand2);
void multiplication(float *operand1, float operand2);
void division(float *operand1, float operand2);

int main()
{

  printf

    return 0;
}
void addition(float *operand1, float operand2){
    printf("%f+%f", *operand1,operand2);
    *operand1+=operand2;
    printf("%f",*operand1);

}
void subtraction(float *operand1, float operand2){
    printf("%f-%f", *operand1,operand2);
    *operand1-=operand2;
    printf("%f",*operand1);

}
void multiplication(float *operand1, float operand2){
    printf("%f*%f", *operand1,operand2);
    *operand1+=operand2;
    printf("%f",*operand1);

}
void division(float *operand1, float operand2){
    printf("%f/%f", *operand1,operand2);
    *operand1/=operand2;
    printf("%f",*operand1);

}

