#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(void){
    int n;
    cin>>n;
    string str;
    int num = 0;
    vector<int> v;
    for(int i=0; i<n;i++){
        cin >> str;
        if (str== "push"){
            cin >> num;
            v.push_back(num);
        }else if (str == "pop"){
            if(v.empty())
                cout << -1<<"\n";
            else {
                cout << v.back() << "\n";
                v.pop_back();
            }
        }else if (str=="size") {
            cout<< v.size() << "\n";
        }else if (str == "empty") {
            if (v.empty())
                cout<< 1 <<"\n";
            else
                cout<< 0 << "\n";
        }else if (str == "top") {
            if (v.empty())
                cout<<-1<<"\n";
            else
                cout<<v.back()<<"\n";
        }
    }
    
}

