#include<iostream>
#include<unordered_set>
#include<vector>
#include<algorithm>
#define ll long long int
using namespace std;

int main() {
    ll n;
    cin>>n;
    ll m;
    cin>>m;
    vector<pair<ll,ll>> N(n);
    vector<pair<ll,ll>> M(m);
    for(int i=0;i<n;i++) {
        ll a;
        cin>>a;
        N[i].first = a;
        N[i].second = i;
    }

    for(int i=0;i<m;i++) {
        ll a;
        cin>>a;
        M[i].first = a;
        M[i].second = i;
    }
    // return 0;
    sort(N.begin(),N.end());
    sort(M.begin(),M.end());
    for(int i=0;i<m;i++) {
        cout<<N[0].second<<" "<<M[i].second<<endl;
    }
    for(int i=1;i<n;i++){
        cout<<N[i].second<<" "<<M[m-1].second<<endl;
    }
}
///////TLE////////////
// int main() {
//     unordered_set<ll> sums;
//     ll n;
//     cin>>n;
//     ll m;
//     cin>>m;
//     ll N[n];
//     ll M[m];
//     for(ll i=0;i<n;i++) {
//         cin>>N[i];
//     }
//     for(ll i=0;i<m;i++) {
//         cin>>M[i];
//     }
//     ll x = n+m-1;
//     ll i=0;
//     ll j=0;

//     // cout<<x;
//     while(x) {
//         ll a = N[i]+M[j];
//         // cout<<"--------"<<a<<" ";
//         if(sums.find(a) == sums.end()) {
//             sums.insert(a);
//             cout<<i<<" "<<j<<" "<<a<<endl;
//             x--;
//             j++;
//             if(j>=m) {
//                 i++;
//                 j=0;
//             }
            
//         }
//         else{
//             j++;
//             if(j>=m) {
//                 i++;
//                 j=0;
//             }
//         }
//     }

// }