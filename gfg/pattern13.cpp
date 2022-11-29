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
        int x=1;
        for(int i=1;i<=n;i++){
            for(int j=1;j<=i;j++){
                cout << x << " ";
                x++;
            }
            cout << endl;
        }
    }

/*

sample output for input 5
1 
2 3 
4 5 6 
7 8 9 10 
11 12 13 14 15

*/
