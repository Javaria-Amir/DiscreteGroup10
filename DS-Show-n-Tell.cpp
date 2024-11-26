#include <iostream>
#define cap 1000
using namespace std;

int fibonacciRecursion(int n)
{
    if (n <= 1)
    {
        return n;
    }
    return fibonacciRecursion(n - 1) + fibonacciRecursion(n - 2);
}

void FibonacciIterative(int n)
{
    long long curr = 1;
    long long prev = 0;
    long long next = 0;
    for (int i = 0; i <= n; i++)
    {
        cout << "Fibonacci No on " << i << " Index is: " << prev << endl;
        next = prev + curr;
        prev = curr;
        curr = next;
    }
}

void FibonacciDP(int n)
{
    if (n < 0)
        return;
    int D[cap] = {};

    D[0] = 0;

    if (n >= 1)
        D[1] = 1;

    for (int i = 2; i <= n; i++)
    {
        D[i] = D[i - 1] + D[i - 2];
    }

    for (int i = 0; i <= n; i++)
    {
        cout << "Fibonacci No.on " << i << " Index is : " << D[i] << endl;
    }
}

int mainDP()
{
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    FibonacciDP(n);
    return 0;
}

int mainiterative()
{
    int N;
    cout << "Enter Index to Find that Fibonacci Number: ";
    cin >> N;
    FibonacciIterative(N);
    return 0;
}

int mainwithrecursion()
{
    int n;
    cout << "How many Fibonacci Numbers: ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << "Fibonacci " << i << ": " << fibonacciRecursion(i) << endl;
    }
    return 0;
}
