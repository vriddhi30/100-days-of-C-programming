#include <stdio.h>
enum Months {JAN=1, FEB, MAR, APR, MAY, JUN, JUL, AUG, SEP, OCT, NOV, DEC};
int main() {
    enum Months m;
    int days[] = {31,28,31,30,31,30,31,31,30,31,30,31};
    for (m = JAN; m <= DEC; m++)
        printf("%d = %d days\n", m, days[m-1]);
    return 0;
}