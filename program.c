#include <stdio.h>

int fib(int n)
{
    if (n <= 1) return n;  // main 브랜치에서 간단히 변경
    return fib(n-1) + fib(n-2);
}

int main()
{
    printf("Hello world!\n");
    printf("%d\n", fib(5));
    return 0;
}
