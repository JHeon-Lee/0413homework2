#include <stdio.h>

/*
void Fibonacci(int n)
{
    int f1 = 0, f2 = 1, f3;

    if (n == 1)
        printf("%d", f1);
    else
        printf("%d %d ", f1, f2);

    for (int i = 2; i < n; i++)
    {
        f3 = f1 + f2;
        printf("%d ", f3);

        f1 = f2;
        f2 = f3;
    }
}
*/

int Fibonacci(int n)
{
    if (n < 1)
        return 0;
    else if (n == 1)
        return 1;
    else
        return Fibonacci(n - 1) + Fibonacci(n - 2); 
}

void FibonacciShow(int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", Fibonacci(i));
    }
}

int main()
{
	int num;
	scanf_s("%d", &num);

	FibonacciShow(num);

	return 0;
}