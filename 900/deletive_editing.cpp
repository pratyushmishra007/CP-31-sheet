// RADHA VALLABH SHRI HARIVANSH
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using vll = vector<long long>;
using pii = pair<int,int>;
using pll = pair<long long,long long>;

void solve(){
    string a, b; cin>>a>>b;
    map<char, int> mp;
    int i = a.size(), j = b.size();
    
    while(i>=0 && j>=0){
        mp[a[i]]++;
        if(mp.find(b[j]) != mp.end() && mp[b[j]] > 0){
            cout<<"NO\n";
            return;
        }
        if(a[i] == b[j]){
            mp[b[j]]--;
            
        }
        i--;
    }


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