#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){

int t;
cin >> t;
while(t--){
    int x,y;
    cin >> x >> y;
    int m = y/x,a=0,b=0;

    for(int i=1;i<100;i++){
        int temp =1;
        for(int j=1;j<100;j++){
            temp *= i;
            if(temp *x == y){
                a = j;
                b = i;
                break;
            }
        }
    }
    cout << a << ' ' << b << endl;

}
return 0;
}