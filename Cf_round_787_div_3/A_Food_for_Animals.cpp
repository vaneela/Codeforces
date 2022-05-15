#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c, x, y;
        cin >> a >> b >> c >> x >> y;
        ll cat,dog;
        dog = a-x;
        if(dog<0){
            dog=abs(dog);
            c-=dog;
        }
        cat = b-y;
        if(cat<0){
            cat = abs(cat);
            c-=cat;
        }
        if(c>-1){
            cout << "YES\n";
        }else{
            cout << "NO\n";
        }
    }
    return 0;
}