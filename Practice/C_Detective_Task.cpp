#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){

int t;
cin >> t;
while(t--){
    string str;
    cin >> str;
    int ans , s=0,e=str.size()-1;
    for(int i=0;i<str.size();i++){
       if(str[i]=='1'){
           s=i;
       }
       if(str[i]=='0'){
           e = i;
           break;
       }
    }
    ans = e-s+1;
    cout << ans << endl;
}
return 0;
}