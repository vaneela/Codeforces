#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){

int t;
cin >> t;
while(t--){
    string str;
    cin >> str;
    ll ans , sum=0, alice =0;
    for(auto i:str){
        sum += (i-96);
    }
    int n = str.size();
    if(n == 1){
        cout << "Bob ";
        ans = sum;
    }else if(n%2==0){
        cout << "Alice ";
        ans = sum;
    }else{
        ans = sum - 2*(min(str[0],str[n-1])-96);
        cout << "Alice ";
    }
    cout << ans << endl;
}
return 0;
}