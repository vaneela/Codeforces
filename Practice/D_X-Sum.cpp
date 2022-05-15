#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){

int t;
cin >> t;
while(t--){
    vector<vector<int>>arr;
    int n,m;
    cin >> n >> m;
    for(int i=0;i<n;i++){
        vector<int>temp;
        for(int j=0;j<m;j++){
            int x;
            cin >> x;
            temp.push_back(x);
        }
        arr.push_back(temp);
    }
    ll max =0,sum=0;
    map<int,int> ml,mr;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            ml[i-j]+=arr[i][j];
            mr[i+j]+=arr[i][j];
        }
        
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            sum = mr[i+j]+ml[i-j]-arr[i][j];
            if(sum >max){
                max = sum;
            }
        }
        

    }
    cout << max << endl;
    
    
}
return 0;
}