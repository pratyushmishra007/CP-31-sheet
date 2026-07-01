// RADHA VALLABH SHRI HARIVANSH
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using vll = vector<long long>;
using pii = pair<int,int>;
using pll = pair<long long,long long>;

void solve(){
    int n; cin>>n;
    int maxi = 0; map<int, int> mp;
    int temp = n;
    while(temp--){
        int a; cin>>a;
        mp[a]++;
        maxi = max(maxi, mp[a]);
    }

    int len = n-maxi, ans = 0, prev = maxi;
    while(len){
        ans++, ans+=(min(prev, len));
        len-=min(prev, len);
        prev*=2;
    }

    cout<<ans<<"\n";
}

static auto fast_io = []() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    return nullptr;
}();

int main() {
    int T = 1;
    if constexpr (true) {
        cin >> T;
    }
    while (T--) {
        solve();
    }
    return 0;
}