#include <stdio.h>

int main() {
    int num = 7, count = 0;

    for(int i = 1; i <= num; i++) {
        if(num % i == 0)
            count++;
    }

    if(count == 2)
        printf("Prime Number");
    else
        printf("Not Prime");

    return 0;
}
