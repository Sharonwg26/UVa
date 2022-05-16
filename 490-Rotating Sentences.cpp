#include <iostream>
using namespace std;


int main(){
    string str[105];
    int col=0,row=0;
    while (getline(cin,str[col])){
        row = max(row, (int)str[col].size());
        col++;
    }
    for (int i=0; i<row; i++){
        for (int j = col-1; j>= 0; j--){
            if (i >= str[j].size()) cout << " ";
            else cout << str[j][i];
        }
        cout << "\n";
    }
    
    return 0;
}