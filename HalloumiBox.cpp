#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n,k;
        cin >> n >> k;
        vector<int> a(n);
        int flag=0;
        for(int i=0;i<n;i++){
            cin >> a[i];
            if(i>0 && a[i-1]>a[i]){
                flag=1;
            }
        }
        
        if(k==1){
            if(flag==1){
                cout << "No" << endl;
                continue;
            }
            else{
                cout << "Yes" << endl;
            }
        }
        else{
            cout << "Yes" << endl;
        }
    }
    
    
}