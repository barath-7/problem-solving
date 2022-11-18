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
        for(int i=1;i<=n;i++){
            for(int j=0;j<i;j++){
                cout << i << " ";
            }
            cout << endl;
        }
    }

/*

sample output for input 5
1
2 2 
3 3 3 
4 4 4 4 
5 5 5 5 5

*/
