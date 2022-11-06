#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

void getSequence(int n, int m, int sequenceNum, int sequence[], int isNumInSequence[]){
    if (sequenceNum == m){
        for(int i=0; i<m; i++){
            cout<< sequence[i]<< " ";
        }
        cout<<"\n";
        return;
    }

    for(int i=1; i<=n; i++){
        if(isNumInSequence[i-1] == 0){
            sequence[sequenceNum] = i;
            isNumInSequence[i-1] = 1;
            getSequence(n, m, sequenceNum+1, sequence, isNumInSequence);
            isNumInSequence[i-1] = 0;
        }
    }
}

int main(){
    int n, m;
    cin>> n>> m;
    int sequence[m];
    int isNumInSequence[n];
    for(int i=0; i<n; i++)
        isNumInSequence[i]=0;
    getSequence(n, m, 0, sequence, isNumInSequence);
}
