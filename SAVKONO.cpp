#include<iostream>
#include<queue>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        long long int z;
        cin>>z;
        priority_queue<int> solders;
        for(int i=0;i<n;i++) {
            int x;
            cin>>x;
            solders.push(x);
        }
        int maximum = solders.top();
        solders.pop();
        int ans=0;
        while(z > 0 && maximum > 0) {
            z = z - maximum;
            maximum = maximum /2;
            solders.push(maximum);
            maximum = solders.top();
            solders.pop();
            ans++;
        }
        if(ans == 0) {
            cout<<"Evacuate"<<endl;
        }
        else{
            cout<<ans<<endl;
        }
    }
}