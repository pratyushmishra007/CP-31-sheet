#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using vll = vector<long long>;
using pii = pair<int,int>;
using pll = pair<long long,long long>;

void solve(){
    int n; cin>>n;
    vector<int> vec(n);
    for(auto &it: vec)
        cin>>it;

    int counter = 0; bool flag = false;
    for(auto &it: vec){
        if(it>0 && flag == false){
            flag = true;
            counter++;
        }
        else if(it == 0)
            flag = false;
    }
    if(counter == 0){
        cout<<"0\n";
        return;
    }
    cout<<(counter == 1 ? "1\n" : "2\n");
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