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
        char alphabet = 'A';
        alphabet= alphabet+(n-1);
        for (int i = 0; i < n; i++)
        {
        char temp =alphabet;
            
            for (int j = 0; j<=i; j++)
            {
            
                cout <<temp;
                temp=temp-1;
                
            }
            
            cout << endl;
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
