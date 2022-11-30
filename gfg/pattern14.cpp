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
        // const char* alphabet[26]= { "A","B","C","D","E","F","G","H","I","J","K","L","M","N","O","P","Q","R","S","T","U","V","W","X","Y","Z" };
        
        for (int i = 0; i < n; i++)
        {
            char alphabet = 'A';
            for (int j = 0; j < 1 + i; j++)
            {
                cout <<alphabet;
                alphabet+=1;
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
