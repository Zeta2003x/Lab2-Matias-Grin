#include <stdio.h>

int keyGen(int num){
    return (( num * 786 * 17) / 12 ) + 1991;
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    int result = keyGen(num);
    printf("The result is: %d\n", result);
    return 0;
}