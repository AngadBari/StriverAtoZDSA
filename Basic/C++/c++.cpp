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
                          
//Nested if-else Statement      

/* Q. Take Input From User and Check Whether he is eligible for job or not.

     condition:
       1. Age  18 >=- Eligible for job
       2. Age 50>=  && <= 57 - Eligible for job but retirement soon .
       3. Age >= 57 - Retirement time  */


                    int main()
                    {

                    int age;
                    cin>> age;

                    if(age<=18)
                    {
                        cout<<"Your are eligible for job"<<endl;
                    }
                    else if (age<=57)
                    {
                        cout<<"Your are eligible for job"<<endl;
                        if(age>=50)
                        {
                        cout<<"but retirement soon"<<endl;
                        }
                    }
                    else
                    {
                        cout<<"retirement time"<<endl;
                    }

                    
             }



//Switch Statement

/* 
     Q.Take Input from user day no and print day name.
        for 1 - Monday 
        for 2 - Tuesday...
*/

\
            int main()
            {

            int day;
            cin>>day;

            switch(day)
            {
                case 1:
                cout <<"Monday";
                break;

                case 2:
                    cout <<"Tuesday";
                    break;

                case 3:
                    cout <<"Wednesday";
                    break;
                case 4:
                    cout <<"Thursday";
                    break;
                case 5: 
                    cout <<"Friday";
                    break;
                case 6: 
                    cout <<"Saturday";
                    break;
                case 7:
                    cout <<"Sunday";
                    break;      
                default:
                    cout <<"Enter no between 1 to 7";
            }


  
}


//Arrays

int main()
        {

        //1-D Array
        int arr[5];
        cin >> arr[0] >> arr[1] >> arr[2] >> arr[3] >> arr[4];
        cout << arr[4];


        //2-D Array
        int arr2[3][3];
        arr2[0][1]=5;
        cout << arr2[0][1];
          
        }
/* Note 1.Indexing  
        2. 2-D--> arr[row][col] */



// String
     
int main()
        {
           string s="Angad";
           cout<<s[3];

           int l=s.size();
           cout<<s[l-1];
        }









