#include <iostream>
#include <string>
#include <stack>

using namespace std;

int main() {
    int n;
    cin >> n;
    cin.ignore();
    string str;
    stack<char> converse;
    for(int i=0; i<n; i++){
        getline(cin, str);
        str += " ";1
        for (int j=0; j<str.length(); j++) {
            if(str[j] != ' ')
                converse.push(str[j]);
            else {
                while (!converse.empty()) {
                    cout<<converse.top();
                    converse.pop();
                }
                cout<<" ";
            }
        }
    }
}
