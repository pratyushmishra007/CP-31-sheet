#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using vll = vector<long long>;
using pii = pair<int,int>;
using pll = pair<long long,long long>;


void solve(){
    int n, k; cin>>n>>k;
    vector<int> a(n), b(n);
    while(n--){
        int ele; cin>>ele;
        a.push_back(ele), b.push_back(ele);
    }
    sort(b.begin(), b.end());
    if(a!=b && k == 1){
        cout<<"NO\n";
    }
    else{
        cout<<"YES\n";
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