#include<bits/stdc++.h>
using namespace std;
class MovieTicket{
    unordered_map<string,unordered_set<string>>mp;
public:
    bool book(string x,string y){
        if(mp[y].count(x)||mp[y].size()==100)return false;
        mp[y].insert(x);
        return true;
    }
    bool cancel(string x,string y){
        if(!mp[y].count(x))return false;
        mp[y].erase(x);
        return true;
    }
    bool is_booked(string x,string y){
        return mp[y].count(x);
    }
    int available_tickets(string y){
        return 100-mp[y].size();
    }
};
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int q;
    cin>>q;
    MovieTicket m;
    while(q--){
        string s,x,y;
        cin>>s;
        if(s=="BOOK"){
            cin>>x>>y;
            cout<<(m.book(x,y)?"true":"false")<<"\n";
        }
        else if(s=="CANCEL"){
            cin>>x>>y;
            cout<<(m.cancel(x,y)?"true":"false")<<"\n";
        }
        else if(s=="IS_BOOKED"){
            cin>>x>>y;
            cout<<(m.is_booked(x,y)?"true":"false")<<"\n";
        }
        else{
            cin>>y;
            cout<<m.available_tickets(y)<<"\n";
        }
    }
    return 0;
}
