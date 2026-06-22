#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using vll = vector<long long>;
using pii = pair<int,int>;
using pll = pair<long long,long long>;

void solve(){
    int n; cin>>n;
    map<int, int> mp;
    while(n--){
        int a; cin>>a;
        mp[a]++;
    }

    if(mp.size() > 2){
        cout<<"NO\n";
        return;
    }
    if(mp.size() == 2){
        auto it1 = mp.begin();
        auto it2 = mp.rbegin();
        if(abs(it1->second-it2->second)>1){
            cout<<"NO\n";
            return;
        }
    }
    cout<<"YES\n";
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