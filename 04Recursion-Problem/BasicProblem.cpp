
#include <bits/stdc++.h>
#include <iostream> // Optional
using namespace std;


// 1. Print Name N Times
void print(int i, int n)
{
    if(i > n) return;

    cout << "Angad" << endl;
    print(i + 1, n);
}


// 2. Print 1 to N
void OnetoN(int i, int n)
{
    if(i > n) return;

    cout << i << "  ";
    OnetoN(i + 1, n);
}


// 3. Print N to 1
void NtoOne(int i, int n)
{
    if(i < 1) return;

    cout << i << "  ";
    NtoOne(i - 1, n);
}


// 4. Print 1 to N (Backtracking)
void OnetoNB(int i, int n)
{
    if(i < 1) return;

    OnetoNB(i - 1, n);
    cout << i << "  ";
}


// 5. Print N to 1 (Backtracking)
void NtoOneB(int i, int n)
{
    if(i > n) return;

    NtoOneB(i + 1, n);
    cout << i << "  ";
}


// 6. Sum of N Numbers (Using Loop)
void sum(int n)
{
    int sum = 0;

    for(int i = 0; i <= n; i++)
    {
        sum = sum + i;
    }

    cout << "sum is" << sum;
}


// 7. Sum of N Numbers (Parameterized Recursion)
void sumN(int i, int sum)
{
    if(i < 1)
    {
        cout << sum;
        return;
    }

    sumN(i - 1, sum + i);
}


// 8. Sum of N Numbers (Using i+1)
void sumNto1(int i, int sum, int n)
{
    if(i > n)
    {
        cout << sum;
        return;
    }

    sumNto1(i + 1, sum + i, n);
}


// 9. Sum of N Numbers (Functional Recursion)
int sumNf(int n)
{
    if(n == 0)
    {
        return 0;
    }

    return n + sumNf(n - 1);
}


// 10. Factorial of Number (Functional Recursion)
int facto(int n)
{
    if(n == 0)
    {
        return 1;
    }

    return n * facto(n - 1);
}


// 11. Factorial of Number (Parameterized Recursion)
void factop(int n, int fct)
{
    if(n == 0)
    {
        cout << fct;
        return;
    }

    factop(n - 1, fct * n);
}


// 12. Reverse Array (Using Two Pointers)
void arrRev(int a[], int l, int r)
{
    if(l >= r) return;

    swap(a[l], a[r]);
    arrRev(a, l + 1, r - 1);
}


// 13. Reverse Array (Using Single Pointer)
void arrRevSP(int i, int n, int a[])
{
    if(i >= n / 2) return;

    swap(a[i], a[n - i - 1]);
    arrRevSP(i + 1, n, a);
}


// 14. Check Palindrome (Using Recursion)
bool spalindrom(int i, string &s)
{
    if(i >= s.size() / 2)
    {
        return true;
    }

    if(s[i] != s[s.size() - i - 1])
    {
        return false;
    }

    return spalindrom(i + 1, s);
}


// 15. Fibonacci Number (Using Recursion)
int fobona(int n)
{
    if(n <= 1)
    {
        return n;
    }

    int l = fobona(n - 1);
    int sl = fobona(n - 2);

    return l + sl;
}
