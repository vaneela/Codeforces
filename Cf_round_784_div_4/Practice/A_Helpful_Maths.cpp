#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
string s;
cin >> s;
ll one =0, two=0, three = 0;
for(auto c: s){
    if(c=='1'){
        one ++;
    }
    else if(c=='2'){
        two ++;
    }
    else if(c=='3'){
        three ++;
    }
}
for(ll i=0;i<s.length();i++){
    if(one!=0){
        s[i]='1';
        one--;
    }else if(two!=0){
        s[i]='2';
        two--;
    }else if(three!=0){
        s[i]='3';
        three --;
    }
    if(i!=s.size()-2){
        s[i+1]='+';
        i++;
    }
    
}
cout << s;
return 0;
}