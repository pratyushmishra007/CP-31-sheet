#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using vll = vector<long long>;
using pii = pair<int,int>;
using pll = pair<long long,long long>;

void solve(){
    int n; cin>>n;
    vector<int> a(n);
    for(int i = 0; i<n; ++i)
        cin>>a[i];
    sort(a.begin(), a.end());
    if(a[0] == a[n-1]){
        cout<<"-1\n";
        return;
    }

    int maxi = *max_element(a.begin(), a.end());
    int count = std::count(a.begin(), a.end(), maxi);
    int i = 0;
    cout<<n-count<<" "<<count<<"\n";
    for(; i<n-count; ++i)
        cout<<a[i]<<" ";
    cout<<"\n";
    for(; i<n; ++i)
        cout<<a[i]<<" ";
    cout<<"\n";
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