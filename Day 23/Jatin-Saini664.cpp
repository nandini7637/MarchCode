#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> a(n, 0);

    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    int odd=0, even=0;
    for(int i=0;i<n;i++){
        if(a[i]%2==0)
            even++;
        else
            odd++;
    }

    cout<<odd<<" "<<even;
}