#include<bits/stdc++.h>
using namespace std;
class Bank{
    unordered_map<string,long long>mp;
public:
    bool create(string x,long long y){
        if(mp.count(x)){
            mp[x]+=y;
            return false;
        }
        mp[x]=y;
        return true;
    }
    bool debit(string x,long long y){
        if(!mp.count(x)||mp[x]<y)return false;
        mp[x]-=y;
        return true;
    }
    bool credit(string x,long long y){
        if(!mp.count(x))return false;
        mp[x]+=y;
        return true;
    }
    long long balance(string x){
        if(!mp.count(x))return -1;
        return mp[x];
    }
};
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int q;
    cin>>q;
    Bank b;
    while(q--){
        string s,x;
        long long y;
        cin>>s;
        if(s=="CREATE"){
            cin>>x>>y;
            cout<<(b.create(x,y)?"true":"false")<<"\n";
        }
        else if(s=="DEBIT"){
            cin>>x>>y;
            cout<<(b.debit(x,y)?"true":"false")<<"\n";
        }
        else if(s=="CREDIT"){
            cin>>x>>y;
            cout<<(b.credit(x,y)?"true":"false")<<"\n";
        }
        else{
            cin>>x;
            cout<<b.balance(x)<<"\n";
        }
    }
    return 0;
}
