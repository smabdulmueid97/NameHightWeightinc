#include <stdio.h>
int main()
{
    float hight;
    float weight;
    char  name [20];

    printf("Please enter your name :");
    scanf ("%s", &name);
    printf("Please enter your hight in m:");
    scanf ("%3f", &hight);
    printf("Please enter your weight in kg :");
    scanf ("%3f", &weight);
    printf("your name is %s",name);
    printf("\nyour hight & weight is \n%3f \n%3f",hight,weight);
    return 0;
}