#include <iostream>
#include <stack>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;
    stack<int> numStack;
    vector<char> signVector;
    int seq;
    int num=1;
    
    for(int i=0; i<n; i++) {
        cin>>seq;
        while(num<=seq) {
            signVector.push_back('+');
            numStack.push(num);
            num++;
        }
        if(numStack.top() ==seq) {
            signVector.push_back('-');
            numStack.pop();
        } else {
            cout<<"NO\n";
            return 0;
        }
    }
    
    for(int i=0; i< signVector.size(); i++) {
        cout<< signVector[i] <<"\n";
    }
}
