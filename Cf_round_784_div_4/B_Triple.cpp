#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
int t;
cin >> t;
while(t--){
    int n;
    cin >> n;
    map<int,int> m;
    while(n--){
        int i;
        cin >> i;
        m[i]++;
    }
    int ans =-1;
    for(auto &it:m){
        if(it.second>=3){
                ans = it.first;
        }
    }
    cout << ans << "\n";
}
return 0;
}