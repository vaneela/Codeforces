#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        string str;
        cin >> str;
        vector<int> v;
        for (auto i : str)
        {
            v.push_back(48 - i);
        }
        int s1=0,s2=0;
        for(int i=0;i<3;i++){
            s1+=v[i];
        }
        for(int i=3;i<6;i++){
            s2+=v[i];
        }
        if(s1==s2){
            cout << "YES\n";
        }
        else{
            cout << "NO\n";
        }
    }
    return 0;
}