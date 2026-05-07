#include<bits/stdc++.h>
using namespace std;
string solve (int n, vector<int> arr) {
   sort(arr.begin(), arr.end(), greater<int>());
   long long alex = 0, bob = 0;
   int turn = 0;
   for(int i = 0; i < n; ) {
      int val = arr[i], cnt = 0;
      while(i < n && arr[i] == val) {
         cnt++;
         i++;
      }
      if(cnt >= 2) {
         alex += val;
         bob += val;
      }
      else {
         if(turn == 0) {
            alex += val;
            turn = 1;
         }
         else {
            bob += val;
            turn = 0;
         }
      }
   }
   return alex > bob ? "Alex" : "Bob";
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T;
    cin >> T;
    for(int t_i = 0; t_i < T; t_i++)
    {
        int n;
        cin >> n;
        vector<int> arr(n);
        for(int i_arr = 0; i_arr < n; i_arr++)
        {
            cin >> arr[i_arr];
        }
        string out_;
        out_ = solve(n, arr);
        cout << out_;
        cout << "\n";
    }
}
