#include<bits/stdc++.h>
#include<iostream>//Optional
using namespace std;


//Basic Code

int main()
{
    cout << " Hello Angad" << "\n";
    cout << "Hello Angad" << endl;
    cout << "Hello Angad";
    return 0;
}

//NOte :-
          //1. "/n" & endl - New Line



// Take Input

int main()
{
    int x,y;
    cin >> x >> y;
    cout << "Value of x: " << x << " and y: " << y << endl;
    return 0;
}



//Data Types

int main()
{

    int x;
    cin >> x ;
    cout << "Value of x: " << x << endl;

    double y=10.3;
    float z=100.1;
    cout << "Value of y: " << y << endl;
    cout << "Value of z: " << z << endl;

    cin.ignore();//This Option in my case issue thet why
    string str ;
    getline(cin, str);
    cout <<  str << endl;


    char ch= 'g';
    cout << "Value of ch: " << ch << endl;
    return 0;
}


//Statements


    //1.if-else Statement

//Q.Take Input From User and Check Whether adult or Not

          int main()
                {

                    int age; 
                    cin>> age;

                    if( age >=18)
                    {
                        cout << "Your are adult." << endl;
                    }
                    else
                        {
                        cout << "Your are not adult." << endl;
                        }
                }

 /* A School has following grades based on marks:
        1. Below 25 -F
        2. 25 to 45 -E
        3. 45 to 50 -D
        4. 50 to 60 -C
        5. 60 to 80 -B
        6. Above 80 -A. */


                int main()
                    {

                    double marks; 
                    cin>> marks;

                    if( marks <= 24)
                    {
                        cout << "F" << endl;
                    }
                    else if( marks >= 25 && marks <= 44)
                        {
                        cout << "E" << endl;
                        }
                        else if( marks >= 45 && marks <= 49)
                        {
                        cout << "D" << endl;
                        }
                        else if( marks >= 50 && marks <= 59)
                            {
                            cout << "C" << endl;
                            }
                        else if( marks >= 60 && marks <= 79)
                            {
                                cout << "B" << endl;
                            }
                        else if( marks >= 80 && marks <= 100)
                                {
                                cout << "A" << endl;
                                }
                        else
                                {
                                cout << "Invalid Marks" << endl;
                                }
                    }
                                            










