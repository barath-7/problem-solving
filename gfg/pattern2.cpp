#include <bits/stdc++.h>
#include <stdio.h>
using namespace std;

int printTriangle(int n);
int main()
{
    int n;
    cin >> n;
    
    printTriangle(n);
    return 0;
}

int printTriangle(int n)
    {
        // code here
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < 1 + i; j++)
            {
                cout << "* ";
            }
            cout << "\n";
        }
    }

/*

sample output for input 5
* 
* * 
* * * 
* * * * 
* * * * *

*/
