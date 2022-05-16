#include <iostream>
#include <string>
using namespace std;


int main(){
    string s;
    while (cin>>s && s!="0"){
        long odd=0,even=0;
        for (int i=0; i <s.size(); i++){
            (i%2)?odd+=s[i]-'0':even+=s[i]-'0';
        }
        cout<<s<<" is "<<((abs(odd-even)%11)?"not ":"");
        cout<<"a multiple of 11.\n";
    }
    
    return 0;
}