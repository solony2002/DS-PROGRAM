//C Program to Check Prime Number By Creating a Function 
#include <stdio.h>
int isPrime(int N) {
  
    for (int i = 2; i < N; i++) {
        if (N % i == 0) {
            return 0;
        }
    }
    return 1;
}

int main() {
    int N;
    printf("enter the number:");
    scanf("%d", &N);
    printf("Is %d prime?\n", N);
    if (isPrime(N)) {
        printf("Yes\n");
    }
    else {
        printf("No\n");
    }

    return 0;
}
