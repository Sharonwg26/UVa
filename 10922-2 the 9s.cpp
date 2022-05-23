#include <iostream>
#include <string>
using namespace std;


int main(){
    string s;
    while(cin>>s && s!="0"){
        int num=0,degree=1;
        for(int i=0;i<s.length();i++)
            num+=s[i]-'0';
        while(num%9==0 && num!=9){
            int sum=0;
            for(;num;num/=10)
                sum+=num%10;
            num=sum;
            degree++;
        }
        if(num%9) cout<<s<<" is not a multiple of 9.\n";
        else cout<<s<<" is a multiple of 9 and has 9-degree "<<degree<<".\n";
    }
    return 0;
}