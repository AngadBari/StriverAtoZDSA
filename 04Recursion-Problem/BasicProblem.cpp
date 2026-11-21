#include <bits/stdc++.h>
#include <iostream> //Optional
using namespace std;

void print(int i ,int n)
{
    if(i>n) return;
    cout<<"Angad"<<endl;
    print(i+1,n);
}

void OnetoN(int i,int n)
{
    if(i>n) return;
    cout<<i<<"  ";
    OnetoN(i+1,n);
}

void NtoOne(int i,int n)
{
    if(i<1) return;
    cout<<i<<"  ";
    NtoOne(i-1,n);
}

//Not Allow i+1 (BackTraking)


void OnetoNB(int i,int n)
{
    if(i<1) return;
    OnetoNB(i-1,n);
    cout<<i<<"  ";
}


void NtoOneB(int i,int n)
{
    if( i>n) return;
     NtoOneB(i+1,n);
     cout<<i<<"  ";
  
   
}



void sum(int n)
{
    int sum=0;
    for(int i=0;i<=n;i++)
    {
        sum=sum+i;
    }
    cout<<"sum is"<<sum;
}


void sunN(int i,int sum)
{
    if(i<1)
    {
        cout<<sum;
        return;
    }

    sunN(i-1,sum+i);
}

void sunN1(int i,int sum,int n)
{
    if(i>n)
    {
        cout<<sum;
        return;
    }

    sunN1(i+1,sum+i, n );
}


int sumNf(int n)
{
    if(n==0)
    {
        return 0;
    }
    return n+sumNf(n-1);


}

int facto(int n)
{
    if(n==0)
    {
        return 1;
    
    }

    return n*facto(n-1);
}


void factop(int n, int fct)
{
    if(n == 0)
    {
        cout << fct;
        return;
    }

    factop(n - 1, fct * n);
}

void arrRev(int a[], int l,int r)
{
   if (l>=r) return ;
    swap(a[l],a[r]);
    arrRev(a,l+1,r-1);
}

void arrRevSP(int i ,int n,int a[])
{
    if ( i>=n/2) return;

    swap(a[i],a[n-i-1]);
    arrRevSP(i+1,n,a);

}

bool spalindrom(int i, string &s )
{
    if(i>=s.size()/2)
    {
        return true;
    }

    if(s[i]!= s[s.size()-i-1])
    {
        return false;
    }
    return spalindrom(i+1,s);
}



int fobona(int n)
{
    if(n<=1)
    {
        return n;
    }

    int l=fobona(n-1);
    int sl=fobona(n-2);
    return l+sl;

}
