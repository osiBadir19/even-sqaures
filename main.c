#include <stdio.h>

int main() {
    int N = 0;

    printf("enter value for N: ");
    scanf("%d", &N);

    for (int i = 2; i <= N; i = i + 2){
            printf("%d\n", i * i);
    }
    return 0;
}
