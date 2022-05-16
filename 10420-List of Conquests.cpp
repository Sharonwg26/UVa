#include <iostream>
#include <map>
using namespace std;


int main(){
    int n;
    string s,name;
    map<string,int> count;
    cin>>n;
    while (n--) {
        cin>>s;
        cin.ignore();
        getline(cin, name);
        count[s]++; 
    }
    for (auto i: count) {
        cout << i.first << " " << i.second << "\n";
    }
    return 0;
}