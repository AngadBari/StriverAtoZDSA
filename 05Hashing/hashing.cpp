#include <bits/stdc++.h>
#include <iostream> // Optional
using namespace std;

int main()
{
    // 1. Number Hashing (Using Array)
    {
        int n;
        cin >> n;

        int arr[n];

        for(int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        // Precompute
        int hasharr[13] = {0};

        for(int i = 0; i < n; i++)
        {
            hasharr[arr[i]]++;
        }

        // Fetch
        int q;
        cin >> q;

        while(q--)
        {
            int number;
            cin >> number;

            cout << hasharr[number] << endl;
        }
    }

    // 2. Character Hashing (Using Array)
    {
        string s;
        cin >> s;

        // Precompute
        int hash[256] = {0};

        for(int i = 0; i < s.size(); i++)
        {
            hash[s[i]]++;
        }

        // Fetch
        int q;
        cin >> q;

        while(q--)
        {
            char c;
            cin >> c;

            cout << hash[c] << endl;
        }
    }

    // 3. Number Hashing (Using Map)
    {
        int n;
        cin >> n;

        int arr[n];

        map<int, int> mpp;

        for(int i = 0; i < n; i++)
        {
            cin >> arr[i];
            mpp[arr[i]]++;
        }

        // Precompute
        for(auto it : mpp)
        {
            cout << it.first << " -> " << it.second << endl;
        }

        // Fetch
        int q;
        cin >> q;

        while(q--)
        {
            int number;
            cin >> number;

            cout << mpp[number] << endl;
        }
    }

    // 4. Character Hashing (Using Map)
    {
        string s;
        cin >> s;

        map<char, int> mpps;

        // Precompute
        for(int i = 0; i < s.size(); i++)
        {
            mpps[s[i]]++;
        }

        // Fetch
        int q;
        cin >> q;

        while(q--)
        {
            char c;
            cin >> c;

            cout << mpps[c] << endl;
        }
    }

    return 0;
}