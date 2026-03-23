#include <stdio.h>
int main() {
    int x=1,y=2,z=3;
    x+=y+=z+=7;
    printf("The value of \nx is: %d.\ny is: %d.\nz is: %d.\n",x,y,z);
    return 0;
}