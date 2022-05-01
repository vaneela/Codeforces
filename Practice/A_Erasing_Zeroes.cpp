#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){

int t;
cin >> t;
while(t--){
    string str;
    cin >> str;
    int s=0,e=0;
    for(int i=0;i<str.size();i++){
        if(str[i]=='1'){
            s=i;
            break;
        }
    }
    for(int i=str.size()-1;i>-1;i--){
        if(str[i]=='1'){
            e=i;
            break;
        }
    }
    int count =0;
    for(int i=s;i<e;i++){
        if(str[i]=='0'){
            count++;
        }
    }
    cout << count << '\n';
    }
return 0;
}