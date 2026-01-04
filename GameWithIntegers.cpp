#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        bool win=false;
        for(int i=0;i<10;i++){
            if(n%3!=0) win=true;
        }
        if(win) cout << "First" << endl;
        else cout << "Second" << endl;
    }

    return 0;
}