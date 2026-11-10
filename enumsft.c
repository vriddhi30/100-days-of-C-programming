#include <stdio.h>
enum Status {SUCCESS, FAILURE, TIMEOUT};
int main() {
    enum Status s;
    for (s = SUCCESS; s <= TIMEOUT; s++) {
        if (s == SUCCESS)
            printf("Success\n");
        else if (s == FAILURE)
            printf("Failure\n");
        else
            printf("Timeout\n");
    }
    return 0;
}