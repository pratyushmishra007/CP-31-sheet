#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using vll = vector<long long>;
using pii = pair<int,int>;
using pll = pair<long long,long long>;

void solve(){
    int n, k; cin>>n>>k;
    map<char, int> mp;
    string s; cin>>s;
    for(auto &it: s)
        mp[it]++;
    
    int odd = 0;
    for(auto &it: mp)
        odd+=(it.second&1);
    
    cout<<(odd-1 > k ? "NO\n" : "YES\n");
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