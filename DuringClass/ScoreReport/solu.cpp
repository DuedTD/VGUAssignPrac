//#include <bits/stdc++.h>
#include <iostream>
#include <iomanip>

#define ll long long
#define fastios cin.tie(nullptr); ios_base::sync_with_stdio(false);

using namespace std;

ll n, a, cnt = 0, s = 0;

int main(){
    fastios;

    cin >> n;
    
    for(int i = 0; i < n; i++){
        cin >> a;
        s+=a;
        if(a >= 50){
            cnt++;
        }
    }

    cout << "Total: " << s << ", Passed: " << cnt << ", Average: " << fixed << setprecision(2) << float(s)/float(n) << endl;

    return 0;
}