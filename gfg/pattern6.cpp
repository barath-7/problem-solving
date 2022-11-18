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
        for(int i=0;i<n;i++){
            for(int j=1;j<=n-i;j++){
                cout << j << " ";
            }
            cout << endl;
        }
    }

/*
sample output for input 5

1 2 3 4 5
1 2 3 4
1 2 3 
1 2  
1 


*/
