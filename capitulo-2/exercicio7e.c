#include <stdio.h>
int main() {
    int a=5,b=10,c,d=4,e=2;
    c=a+(b%d)/e;
    printf("The value of c is: %d",c);
    return 0;
}