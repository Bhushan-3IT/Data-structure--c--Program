1) Factorial of number

#include <stdio.h>

int recursion(int n) {
    if (n == 0 || n == 1)
        return 1;
    else
        return n * recursion(n - 1);
}

int nonrecursion(int n) {
    int pro = 1;
    if (n == 0 || n == 1)
        return 1;
    else
        for (int i = 2; i <= n; i++) {
            pro *= i;
        }
    return pro;
}

int main() {
    int n = 5;
    printf("factorial of %d is %d using recursive function", n, recursion(n));
    printf("\nfactorial of %d is %d using nonrecursive function", n, nonrecursion(n));
    return 0;
}

2)Fibonacci series

#include <stdio.h>

int recursive(int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;

    int a = 0, b = 1, next;
    for (int i = 2; i <= n; i++) {
        next = a + b;
        a = b;
        b = next;
    }
    return b;
}

int nonrecursive(int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;
    return nonrecursive(n - 1) + nonrecursive(n - 2);
}

int main() {
    int n;
    printf("enter positive number:");
    scanf("%d", &n);

    printf("fibonacci series of %d is using recursive:", n);
    for (int i = 0; i <= n; i++) {
        printf("%d ", recursive(i));
    }

    printf("\nfibonacci series of %d is using nonrecursive:", n);
    for (int i = 0; i <= n; i++) {
        printf("%d ", nonrecursive(i));
    }

    return 0;
}

3)sum upto n term of fibonacci series

#include <stdio.h>

int recursive(int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;

    int a = 0, b = 1, next;
    for (int i = 2; i <= n; i++) {
        next = a + b;
        a = b;
        b = next;
    }
    return b;
}

int nonrecursive(int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;
    return nonrecursive(n - 1) + nonrecursive(n - 2);
}

int main() {
    int n, sumr = 0, sumnr;
    printf("enter positive number:");
    scanf("%d", &n);
    for (int i = 0; i <= n; i++) {
        sumr += recursive(i);
        sumnr += nonrecursive(i);
    }
    printf("sum of series upto %d term is %d using recursive:", n, sumr);
    printf("\nsum of series upto %d term is %d using nonrecursive:", n, sumnr);
    return 0;
}


4) power a^b

  #include <stdio.h>

int recursive(int a, int b) {
    if (b == 0)
        return 1;
    else
        return a * recursive(a, b - 1);
}

int nonrecursive(int a, int b) {
    int pro = 1;
    for (int i = 0; i < b; i++) {
        pro *= a;
    }
    return pro;
}

int main() {
    int a, b;
    printf("enter base and power:");
    scanf("%d %d", &a, &b);
    printf("%d to the power %d is %d  using recursive", a, b, recursive(a, b));
    printf("\n%d to the power %d is %d  using nonrecursive", a, b, nonrecursive(a, b));
    return 0;
}
