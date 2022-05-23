#include <iostream>
#include <string>
using namespace std;

int main(){
	string R,dic="0123456789"
		"ABCDEFGHIJKLMNOPQRSTUVWXYZ"
		"abcdefghijklmnopqrstuvwxyz";
	int num[62];
	for(int i=0;i<62;i++) num[i]=i;
	while(cin>>R){
		int sum=0,max=0; //sum每個位數總和，max最大的數的值 
		for(int i=0;i<R.length();i++){
			for(int j=0;j<62;j++){
				if(R[i]==dic[j]){
					sum=sum+num[j];//每個位數相加 
					if(num[j]>max) max=num[j];
					break;
				}
			}
		}
		for(int i=max;i<=62;i++){
			if(sum==0){
				cout<<"2\n";
				break;
			}
			else if(sum%i==0){
				cout<<i+1<<endl;
				break;
			}
			if(i==62)cout<<"such number is impossible!\n";
		}
		
	}
		
	return 0;
}