#include <stdio.h>
#include <stdlib.h>

struct Time{
    int hours;
    int minutes;
    int seconds;
};

int main()
{ 
    int hdiff,mdiff,sdiff, int_t1, int_t2, tdiff;
    struct Time t1, t2;
    printf("Enter the time in hh:mm:ss in 24 hours format \n");
    printf("\nTime one: ");
    scanf("%d:%d:%d", &t1.hours, &t1.minutes, &t1.seconds);
    printf("\nTime two: ");
    scanf("%d:%d:%d", &t2.hours, &t2.minutes, &t2.seconds);
    int_t1 = t1.hours*3600 + t1.minutes*60 + t1.seconds;
    int_t2 = t2.hours*3600 + t2.minutes*60 + t2.seconds;
    tdiff = abs(int_t2 - int_t1);
    hdiff = tdiff/3600;
    tdiff %= 3600;
    mdiff = tdiff/60;
    tdiff %= 60;
    sdiff = tdiff;
    printf("\n%d:%d:%d\n", hdiff, mdiff, sdiff);
    return 0;
} 