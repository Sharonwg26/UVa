#include <iostream>
using namespace std;


int main(){
    string a,b;
    while (getline(cin, a)){
        getline(cin, b);
        int count_a[26]={0},count_b[26]={0};
        for (int i = 0; i < a.length(); i++) count_a[a[i]-'a']++;
        for (int i = 0; i < b.length(); i++) count_b[b[i]-'a']++;

        for (int i = 0; i < 26; i++){
            for (int j = min(count_a[i],count_b[i]); j>0; j--){
                cout << (char)('a'+i);
            }
        }
        cout << "\n";
    }
    return 0;
}