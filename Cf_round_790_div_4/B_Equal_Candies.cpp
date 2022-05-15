#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){

int t;
cin >> t;
while(t--){
    int n;
    cin >> n;
    vector<int>v;
    for(int i=0;i<n;i++){
        int x;
        cin >> x;
        v.push_back(x);
    }
    int min = *min_element(v.begin(),v.end());
    ll ans =0;
    for(int i=0;i<v.size();i++){
        ans+=(v[i]-min);
    }
    cout << ans << endl;
}
return 0;
}