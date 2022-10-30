#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

int main(){
    static int dwarfNum = 9;
    int dwarf[dwarfNum];
    int noDwarfFirst, noDwarfSecond;
    int sum=0;
    for(int i=0; i<dwarfNum; i++){
        cin >> dwarf[i];
        sum += dwarf[i];
    }
    sort(dwarf, dwarf+dwarfNum);
    
    for(int i=0; i< dwarfNum; i++)
        for(int j=i+1; j<dwarfNum; j++)
            if( sum-100 == dwarf[j]+dwarf[i]){
                noDwarfFirst = j;
                noDwarfSecond = i;
                break;
            }
    for(int i=0; i<dwarfNum;i++){
        if(i == noDwarfFirst || i == noDwarfSecond) continue;
        cout<<dwarf[i]<<endl;
    }
}
