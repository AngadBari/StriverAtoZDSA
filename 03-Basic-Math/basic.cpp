
#include <bits/stdc++.h>
#include <iostream>//Optional 
using namespace std;

//Extraction 

void extraction(int n)
{ 
    
    while(n>0)
    {
        int lastDigit=n%10;
        n=n/10;
        cout<<"Extaction of Number is:"<<lastDigit<<endl;

    }
}

//Number of Digit

void digitCount(int n)
{ 
    int count=0;
    while(n>0)
    {
        n=n/10;
        count++; 
    }
    cout<<endl;
    cout<<"Number of Digit is:"<<count<<endl;
}

void digitCount2(int n)
{
    int count=(int)(log10(n)+1);
     cout<<"Number of Digit is:"<<count<<endl;
}

//Reverse of Number

void reverseOfNumber(int n)
{
    int revNum=0;
   while(n>0)
   {

     int lastdigit=n%10;
     revNum=(10*revNum)+lastdigit;
     n = n / 10;
   }
   cout<<revNum;
}

//This I try 
void reverseOfNumber2(int n)
{
   while(n>0)
   {
     int lastdigit=n%10;
       n = n / 10;
       if(lastdigit != 0)
       {
        cout<<lastdigit;
       }
   }
}