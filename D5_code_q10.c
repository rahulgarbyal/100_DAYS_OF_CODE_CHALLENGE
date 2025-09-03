#include <stdio.h>

int main()
{
    int inp_sec,secs,hrs,mins;

    printf("Enter time in seconds : ");
    scanf("%d", &inp_sec);

    hrs = inp_sec / 3600;
    mins = (inp_sec % 3600) / 60;
    secs = inp_sec % 60;

    printf("The time is %02d:%02d:%02d\n", hrs, mins, secs);

    return 0;
}

