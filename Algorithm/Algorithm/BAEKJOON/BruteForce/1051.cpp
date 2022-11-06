#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

int main(){
    int n, m, side;
    
    cin >>n >>m;
    int squre[n][m];
    char dum;
    if(n>m) side = m;
    else side = n;
    
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin >> dum;
            squre[i][j] = dum - '0';
        }
    }
    
    while(side > 0){
        for(int i=0; i <= n-side; i++)
            for(int j=0; j<=m-side ; j++)
                if( squre[i][j] == squre[i][j+side-1] && squre[i][j]==squre[i+side-1][j] && squre[i][j]==squre[i+side-1][j+side-1]){
                    cout << side*side << endl;
                    return 0;
                }
        side--;
    }
}
