#include <stdio.h>

int main() {
    int years, days_per_year, total_days;
    years = 3;
    days_per_year = 365;
    total_days = years * days_per_year;
    printf("YEARS = %d\nDAYS_PER_YEAR = %d\nTOTAL_DAYS = %d\n", years, days_per_year, total_days);

    return 0;
}