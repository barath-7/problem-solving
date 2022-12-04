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
        
        for (int i = 0; i < n; i++)
        {
            char alphabet = 'A';
            alphabet+=i;
            for (int j = 0; j<=i; j++)
            {
                
                cout <<alphabet;
                
            }
            cout << "\n";
        }
    }

/*

sample output for input 5
Output:
A
AB
ABC
ABCD
ABCDE

*/
