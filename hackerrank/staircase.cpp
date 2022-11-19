#include <bits/stdc++.h>

using namespace std;



/*
 * Complete the 'staircase' function below.
 *
 * The function accepts INTEGER n as parameter.
 */

void staircase(int n) {
    
for(int i=1;i<=n;i++){
    int temp = n;
    for(int j=1;j<=n;j++){
        // n-i spaces
        if(temp-i>0){
            cout << " ";
        } else {
            cout << "#";
        }
        temp--;
    }
    cout << endl;
}
}

int main()
{
    
    staircase(5);

    return 0;
}

