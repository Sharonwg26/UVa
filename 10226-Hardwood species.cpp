#include <iostream>
#include <iomanip>
#include <map>
using namespace std;
 
int main() {
    int n;
    string s;
    cin >> n;
    getline(cin, s); //clear buffer
    getline(cin, s); //blank line
    while (n--){
        map <string, int> mp;
        int sum=0;
        while (getline(cin, s) && s!=""){
            mp[s]++;
            sum++;
        }
        for (auto i: mp){
            cout << i.first << " " <<fixed << setprecision(4) << (double)i.second/sum*100 << "\n";
        }
        cout << "\n";
    }
    return 0;
}