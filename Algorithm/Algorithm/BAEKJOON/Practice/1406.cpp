#include <iostream>
#include <string>
#include <stack>

using namespace std;

int main(){
    string leftWord;
    cin>>leftWord;
    stack<char> rightWord;
    int m;
    char command;
    cin >> m;
    for(int i=0; i<m; i++) {
        cin>> command;
        switch (command) {
            case 'L':
                if(leftWord.empty()) break;
                rightWord.push(leftWord.back());
                leftWord.pop_back();
                break;
            case 'D':
                if(rightWord.empty()) break;
                leftWord.push_back(rightWord.top());
                rightWord.pop();
                break;
            case 'B':
                if(leftWord.empty()) break;
                leftWord.pop_back();
                break;
            case 'P':
                cin>>command;
                leftWord.push_back(command);
                break;
            default:
                break;
        }
    }
    for(int i=0; i<leftWord.size();i++)
        cout<<leftWord[i];
    for(int i=rightWord.size()-1;i>=0;i--) {
        cout<<rightWord.top();
        rightWord.pop();
    }
}
