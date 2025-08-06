#include <stdio.h>

int main()
{
    float weight,height,bmi;
    printf("Please enter your weight in kg\n");
    scanf("%f",&weight);
    printf("Please enter your height in meter\n");
	scanf("%f",&height);

    bmi = weight / (height * height);
    printf("Your BMI is %f\n",bmi);
    printf("Name: Megh Rana\nBranch: CE CSPIT\nStudent ID: 25TCE3FA\n");
    return 0;
}
