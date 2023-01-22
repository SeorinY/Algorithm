#include <iostream>
#include <queue>
#include <string>

using namespace std;

int main() {
    int n;
    cin>> n;
    string command;
    queue<int> numQueue;
    for(int i =0; i<n; i++){
        cin >> command;
        if(command == "push") {
            int num;
            cin>>num;
            numQueue.push(num);
        } else if (command == "pop") {
            if (numQueue.empty())
                cout<<-1<<"\n";
            else {
                cout << numQueue.front()<<"\n";
                numQueue.pop();
            }
        } else if (command == "size") {
            cout<<numQueue.size()<<"\n";
        } else if (command == "empty") {
            if (numQueue.empty())
                cout<<1<<"\n";
            else
                cout<<0<<"\n";
        } else if (command == "front") {
            if (numQueue.empty())
                cout<<-1<<"\n";
            else {
                cout << numQueue.front()<<"\n";
            }
        } else {
            if (numQueue.empty())
                cout<<-1<<"\n";
            else {
                cout << numQueue.back()<<"\n";
            }
        }
    }
}
