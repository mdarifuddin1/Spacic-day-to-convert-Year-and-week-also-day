#include<stdio.h>
int main (){

    int year,week,day=1330;

    year = day/365;
    week = (day % 365) / 7;
    day = day - ((year *365) + (week *7));


    printf("\n Year %d", year);
    printf("\n Week %d", week);
    printf("\n Day %d", day);


    return 0;
}
