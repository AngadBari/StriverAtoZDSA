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