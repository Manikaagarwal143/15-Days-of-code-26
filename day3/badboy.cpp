#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n , m , x , y ;
        cin>>n>>m>>x>>y;
        if(x<=n/2 || y <= m /2){
            cout<<m<<" "<<n;
            while(m>=2 || n>=2){
            m-- , n--;
            }
            cout<<m <<" "  <<n;
        }
        else {
            cout<< 1 <<" "<< 1;
            cout<<m<<" "<<n;
        }
        cout<<endl;
    }
    return 0;
}