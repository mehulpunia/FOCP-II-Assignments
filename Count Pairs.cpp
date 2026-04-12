#include <iostream>
using namespace std;
int main() {
    int t;
    cin>>t;
    while (t--) {
        int n;
        cin>>n;
        int c=0;
        for (int i=2;i*i<=n;i++){
            if (n%i==0){
                c++;
                while(n%i==0)
                n/=i;
            }
        }
        if (n>1)
        c++;
        int ans = 1;
        for (int i=0;i<c;i++)
        ans*=2;
        cout << ans << endl;
    }
}
