#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using vll = vector<long long>;
using pii = pair<int,int>;
using pll = pair<long long,long long>;

void solve(){
    int n; cin>>n;
    string s; cin>>s;
    int ans = 1, count = 1; 
    for(int i = 1; i<n; ++i){
        if(s[i] != s[i-1])
            count = 1;
        else    
            count++;
        ans = max(ans, count);
    }

    cout<<ans+1<<"\n";
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