#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){

int t;
cin >> t;
vector<string>str;
while(t--){
    string s;
    cin >> s;
    str.push_back(s);
}
int ans =0;
for(auto i : str){
    if(i[1]=='+'){
        ans++;
    }else{
        ans--;
    }
    
}
cout << ans << endl;
return 0;
}