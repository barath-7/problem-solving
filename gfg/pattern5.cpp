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
            for(int j=n-i;j>0;j--){
                cout << "*";
            }
            cout << endl;
        }
    }

/*

sample output for input 5
* * * * *
* * * * 
* * * 
* *  
* 

*/
