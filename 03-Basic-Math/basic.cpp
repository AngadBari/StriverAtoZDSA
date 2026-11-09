
#include <bits/stdc++.h>
#include <iostream> //Optional
using namespace std;

// Extraction

void extraction(int n)
{

    while (n > 0)
    {
        int lastDigit = n % 10;
        n = n / 10;
        cout << "Extaction of Number is:" << lastDigit << endl;
    }
}

// Number of Digit

void digitCount(int n)
{
    int count = 0;
    while (n > 0)
    {
        n = n / 10;
        count++;
    }
    cout << endl;
    cout << "Number of Digit is:" << count << endl;
}

void digitCount2(int n)
{
    int count = (int)(log10(n) + 1);
    cout << "Number of Digit is:" << count << endl;
}

// Count only odd digit
void oddDigitCount(int n)
{
    int count = 0;
    while (n > 0)
    {
        int ld = n % 10;
        n = n / 10;
        if (ld % 2 != 0)
            count++;
    }
    cout << "Number of odd Digit is:" << count << endl;
}

// Reverse of Number

void reverseOfNumber(int n)
{
    int revNum = 0;
    while (n > 0)
    {

        int lastdigit = n % 10;
        revNum = (10 * revNum) + lastdigit;
        n = n / 10;
    }
    cout << revNum;
}

// This I try
void reverseOfNumber2(int n)
{
    while (n > 0)
    {
        int lastdigit = n % 10;
        n = n / 10;
        if (lastdigit != 0)
        {
            cout << lastdigit;
        }
    }
}

void palindrome(int n)
{
    int orignal = n;
    int revNumber = 0;
    while (n > 0)
    {
        int ld = n % 10;
        revNumber = (revNumber * 10) + ld;
        n = n / 10;
    }
    if (revNumber == orignal)
        cout << "True";
    else
        cout << "False";
}


void armstrong(int n)
{
    int origanl = n;
    int sum = 0;
    while (n > 0)
    {
        int ld = n % 10;
        sum = sum + (ld * ld * ld);
        n = n / 10;
    }

    if (origanl == sum)
        cout << "Number is Armstrong";
    else
        cout << "Number not Armstrong";
}

//Print Divisors of Number

void divisors(int n)
{
    for (int i = 1; i < n; i++)
    {
        if (n % i == 0)
        {
            cout << i << " ";
        }
    }
}

//Best for  TC

void divisors1(int n)
{
    vector<int> ls;
    //O(sqrt(n))
    for (int i = 1; i * i <= n; i++)
    {

        if (n % i == 0)
        {
            ls.push_back(i);

            if (n / i != i)
            {
                ls.push_back((n / i));
            }
        }
    }
    //O(no of factors * log( nu.of factors)) :n=no of  factors
    sort(ls.begin(), ls.end());
    //O(no.factors)
    for (auto it : ls)
        cout << it << " ";
}

//Prime Number

//TC=O(n)
void prime(int n)
{
    int count = 0;

    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            count++;
        }
    }
    if (count == 2)
    {
        cout << "Number is PRIME";
    }
    else
    {
        cout << "NOT PRIME";
    }
}

//Tc=O(sqrt(n))
void prime2(int n)
{
    int count=0;

    for(int i=1;i*i<=n;i++)
    {
        if(n % i == 0)
        {
            count ++;
            if(  n % i == 0)
             count++;
        }
    }
     if (count == 2)
    {
        cout << "Number is PRIME";
    }
    else
    {
        cout << "Number is NOT PRIME";
    }


}

//GCD/HCD

void GCD(int n1, int n2)
{
    int gcd=1;
    for(int i = 1; i <= min(n1,n2); i++)
    {
        if( n1%i==0 && n2%i ==0)
        {
            gcd=i;
        }
    }
    cout<<"GCD IS:-"<<gcd;
}


//TC= O(log5(min(a,b)))
void gcd1(int a ,int b)
{
   while (a>0 && b>0)
   {
     if( a> b) a=a% b;
     else b=b%a;
   }

   if(a==0) cout <<"GCD/HCD:-"<<b;
   if(b==0) cout <<"GCD/HCD:-"<<a;
}

