
#include <bits/stdc++.h>
#include <iostream>//Optional 

using namespace std;

//Pattern-1

              void pattern1(int n)
              {
               {
                  for (int i = 0; i < n; i++)
                  {
                      for (int j = 0; j < n; j++)
                      {
                          cout << "* ";
                      }
                      cout << endl;
                  }
                }
              }


//Pattern-2

       void pattern2(int n)
       {
          for (int i = 0; i < n; i++)
          {
            for (int j = 0; j <= i; j++)
            {
             cout << "* ";
            }
             cout << endl;
         }
      }



//Pattern-3

        void pattern3(int n)
        {
            for (int i = 1; i <=n; i++)
            {
                for (int j = 1; j <= i; j++)
                {
                    cout << j;
                }
                cout << endl;
            }
        }


//Pattern-4


        void pattern4(int n)
          {
              for (int i = 1; i <=n; i++)
              {
                  for (int j = 1; j <= i; j++)
                  {
                      cout << i;
                  }
                  cout << endl;
              }
          }


//Pattern-5

          void pattern5(int n)
          {
              for (int i = 1; i <= n; i++)
              {
                  for (int j = 1; j <= n-i+1; j++)
                  {
                      cout << "* " ;
                  }
                  cout << endl;
              }
          }


//Pattern-6

            void pattern6(int n)
            {
                for (int i = 1; i <= n; i++)
                {
                    for (int j = 1; j <= n-i+1; j++)
                    {
                        cout << j ;
                    }
                    cout << endl;
                }
            }


//Pattern-7



                void pattern7(int n)
                {
                    for (int i = 1; i <= n; i++)
                    {
                        // spaces
                        for (int j = 1; j <= n - i; j++)
                        {
                            cout << " ";
                        }

                        // stars
                        for (int j = 1; j <= 2 * i - 1; j++)
                        {
                            cout << "*";
                        }

                        cout << endl;
                    }
                }


//Pattern-8

        void pattern8(int n)
        {
            for (int i = 1; i <= n; i++)

            {

                for (int j = 1; j <=  i; j++)
                {
                    cout << " ";
                }

                for (int j = 1; j<=2*n-(2*i +1) ; j++)
                {
                    cout << "*";
                }
                // spaces
                for (int j = 1; j <=  i; j++)
                {
                    cout << " ";
                }
                cout << endl;
            }
        }


//Pattern-9

    //Look At Pattern-8 & 9 and OR what You Can Do !!!!



//Pattern-10 --Check  Pattern-2 & 5


void pattern10(int n)
{
    for (int i = 1; i <= 2 * (n - 1); i++)
    {
        int star = i;

        if (i > n)
        {
            star = 2 * n - i;
        }

        for (int j = 1; j <= star; j++)
        {
            cout << "*";
        }

        cout << endl;
    }
}