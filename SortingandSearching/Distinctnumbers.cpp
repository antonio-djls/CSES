#include <bits/stdc++.h>
#define ll long long
using namespace std;


int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll int x{}; cin >> x;
    vector<int> vi(x);
    for(int i = 0; i < x; i++){cin >> vi[i];}
    set<int> si(vi.begin(),vi.end());
    cout << si.size() << endl;

    return 0;
}
