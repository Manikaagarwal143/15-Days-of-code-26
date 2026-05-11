#include <bits/stdc++.h>
using namespace std;

int main() {
    long long  t;
    cin >> t;
    while(t--) {
        long long x , n ;
        long long k ;
        cin>>x>>n;
        if(n%4==0)
        cout<<x;
        else {
        k = n/4;
        for(long long i =k*4+1 ; i<=n;i++){
            if(x%2!=0)
            x+=i;
            else 
            x-=i;
        }
cout<<x;
    }
    cout<<endl;
}
    return 0;
}