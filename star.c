#include<stdio.h>
#include<conio.h>
void main()
{

    int line,star;
    for(line=1;line<=5;line++)
    {
        for(star=1;star<=9;star++)
        {

            if(star<=6-line || star>=4+line)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
}
