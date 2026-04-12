#include <iostream>
using namespace std;
int main() {
    int n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    int l=1,h=n,ans=n;
    while(l<=h) {
        int mid=(l+h)/2;
        int c=0,ok=1;
        for(int i=0;i<n;) {
            if (s[i]=='1') {
                c++;
                if (c>k) {
                    ok=0;
                    break;
                }
                i+=mid;
            } 
			else
			i++;  
        }
        if (ok) {
            ans=mid;
            h=mid-1;
        } 
		else
        l=mid+ 1;
    }
    cout<<ans;
}
