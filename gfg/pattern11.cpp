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
            for(int j=0;j<=i;j++){
                //when rows are even even column prits 1,  -----------when rows are odd odd clumn prits 1

                if(i%2==0){
                    if(j%2==0){
                        cout<<1;
                    }else {
                        cout<<0;
                    }
                }else {
                    if(j%2==0){
                        cout<<0;
                    }else {
                        cout<<1;
                    }
                }
            }
            cout << endl;
        }
    }

/*

sample output for input 5

*/
