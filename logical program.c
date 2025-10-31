#include <stdio.h>
int main(){
int year,days,is_leapyear; 
    if (year % 4==0)
    { printf("it is a leap year\n=");
    }
    else
    { printf("it is not a leap year\n=");
    }
int month;
    printf("Enter month number (1-6): ");
    scanf("%d", &month);
    printf("Enter year: ");
    scanf("%d", &year);

    if (month == 12) {
        while (1) {
            printf("It's December! \n");
        }
    }

    printf("Days in the first six months:\n");

    for (int i = 1; i <= 6; i++) {
        switch (i) {
            case 1: days = 31; break;
            case 2:
                if(is_leapyear)
                    days = 29;
                else
                    days = 28;
                break;
            case 3: days = 31; break;
            case 4: days = 30; break;
            case 5: days = 31; break;
            case 6: days = 30; break;
        }
        printf("Month %d = %d days\t", i, days);
    }

    if (month == 10) {
        printf("Holidays during Diwali (18-26): ");
        for (int d = 18; d <= 26; d++) {
            printf("%d ", d);
        }
    return 0;
}}
