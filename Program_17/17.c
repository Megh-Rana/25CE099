#include <stdio.h>
#include <unistd.h>

int main()
{
    int minutes=0;
    float distance=0;
    printf("Welcome to Marathon.\n");
    while (1)
    {
        printf("Minute %d : Distance Covered : %.1f km\n",minutes,distance);
        distance = distance + 0.5;
        minutes++;
        sleep(1);
        if(distance>10)
        {
            break;
        }
    }
    printf("Marathon Complete!\n");
    printf("Name: Megh Rana\nBranch: CE CSPIT\nStudent ID: 25TCE3FA\n");

    return 0;
}
