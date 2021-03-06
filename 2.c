#include<stdio.h>

int Fib(int n) {
    if(n==1) return 1;
    if(n==2) return 2;
    return Fib(n-1)+Fib(n-2);
}

int main () {
    int sum = 0;
    for (int i=1; Fib(i)<=4000000; i++) {
        if (Fib(i) % 2) continue;
        sum+=Fib(i);
    }
    printf("%d", sum);
    return 0;
}
