#include <iostream>
#include <map>
using namespace std;


int main(){
    string s[] = {"~!@#$%^&*()_+",
        "`1234567890-=",
        "qwertyuiop[]\\",
        "asdfghjkl;'",
        "zxcvbnm,./"};
    map<char,char> mp;
    for(int i=0;i<5;i++){
        for(int j=2;j<s[i].length();j++) mp[s[i][j]]=s[i][j-2];
    }
    string str;
    while(getline(cin,str)){
        for(int i=0;i<str.length();i++)
            (str[i]==' ')?cout<<" ":cout<<mp[str[i]];
        cout<<endl;
    }
    return 0;
}