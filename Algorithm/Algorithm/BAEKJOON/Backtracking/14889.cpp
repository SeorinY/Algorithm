#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

int getMinGap(int n, int startMemNum, int preMem, int minGap, int start[], int isStart[], int s[][20]){
    if(startMemNum == n/2){
        int link[n/2], linkIndex = 0;
        for(int i=1; i<n+1;i++){
            if(isStart[i-1] == 0) {
                link[linkIndex] = i;
                linkIndex++;
            }
        }
        int startSum=0, linkSum =0;
        for(int i=0; i<n/2; i++){
            for(int j=i+1; j<n/2; j++){
                startSum += s[start[i]-1][start[j]-1];
                linkSum += s[link[i]-1][link[j]-1];
            }
        }
        if(minGap > abs(startSum - linkSum)) minGap = abs(startSum - linkSum);
        return minGap;
    }
    
    for(int i= preMem+1; i< n/2 + 2 + startMemNum; i++){
        start[startMemNum] = i;
        isStart[i-1]= 1;
        int gap = getMinGap(n, startMemNum+1, i, minGap, start, isStart, s);
        if(minGap > gap) minGap = gap;
        isStart[i-1]= 0;
    }
    return minGap;
}

int main(){
    int n;
    cin >> n;
    int s[n][20];
    int start[n/2];
    int isStart[n];

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin >> s[i][j];
        }
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(j<i){
                s[i][j] = 0;
                continue;
            }
            s[i][j] += s[j][i];
        }
        isStart[i] = 0;
    }
    cout<< getMinGap(n, 0, 0, 10*n, start, isStart, s) << endl;
}
