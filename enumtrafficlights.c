#include <stdio.h>
enum Traffic {RED, YELLOW, GREEN};
int main() {
    enum Traffic t;
    for (t = RED; t <= GREEN; t++) {
        if (t == RED)
            printf("Stop\n");
        else if (t == YELLOW)
            printf("Wait\n");
        else
            printf("Go\n");
    }
    return 0;
}