#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){

ll n;
cin >> n;
ll ans =0;
vector<int>v;
while(n){
    ll x = n%10;
    if(x<=(9-x)){
        v.push_back(x);
    }else{
        v.push_back(9-x);
    }
    n /= 10;
}
reverse(v.begin(),v.end());
if(v[0]==0){
    v[0]=9;
}
for(int i=0;i<v.size();i++){

    ans = ans*10+v[i];
}
cout << ans;
return 0;
}