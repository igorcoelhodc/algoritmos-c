#include <stdio.h>
int main() {
    int i = 0;
    do {
        switch (i) {
            case 0:
                printf("%d", i);
                i++;
                break;
            case 9:
                printf(" - %d\n", i);
                i++;
                break;
            default:
                printf(" - %d", i);
                i++;
                break;
            
        }
     } while (i < 10);

    return 0;
}