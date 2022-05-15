#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
int t;
cin >>t;
while(t--){
    int n;
    cin >> n;
    vector<int>v;
    int f,s;
    for(int i=0;i<n;i++){
        int x;
        cin >> x;
        v.push_back(x);
    }
    bool ans = false;
    f = v[0]%2;
    s = v[1]%2;
    for(int i=0;i<n;i++){
        if(i%2==0 && v[i]%2==f){
            ans = true;
        }else 
        if(i%2!=0 && v[i]%2==s){
            ans = true;
        }else {
            ans = false;
            break;
        }
    }
    string a =(ans)?"YES":"NO";
    cout << a << '\n';
}
return 0;
}