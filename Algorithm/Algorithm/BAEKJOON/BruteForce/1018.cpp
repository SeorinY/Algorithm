#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

int main(){
    int m, n;
    cin >> m >> n;
    char board[m][n];
    for(int i=0 ; i< m; i++)
        for(int j=0; j<n; j++)
            cin>> board[i][j];
    
    char BBoard[m][n], WBoard[m][n];
    
    for(int i=0; i<m; i++)
        for(int j=0; j<n; j++)
            if((i+j)%2== 0)
                if (board[i][j]=='W'){
                    WBoard[i][j] = 'W';
                    BBoard[i][j] = '!';
                } else {
                    WBoard[i][j] = '!';
                    BBoard[i][j] = 'B';
                }
            else
                if (board[i][j]=='W'){
                    WBoard[i][j] = '!';
                    BBoard[i][j] = 'W';
                } else {
                    WBoard[i][j] = 'B';
                    BBoard[i][j] = '!';
                }
    
    int WsquareNum = 0, BsquareNum = 0;
    int leastNum = m*n;
    for(int i=0; i <=m-8; i++){
        for(int j=0; j<=n-8; j++){
            WsquareNum = 0;
            BsquareNum = 0;
            for(int x=i; x<i+8; x++){
                for(int y=j;y<j+8;y++){
                    if(WBoard[x][y] == '!') WsquareNum++;
                    if(BBoard[x][y] == '!') BsquareNum++;
                }
            }
            if(leastNum > WsquareNum) leastNum = WsquareNum;
            if(leastNum > BsquareNum) leastNum = BsquareNum;
        }
    }
    
    cout<<leastNum << endl;
}
