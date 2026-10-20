#include <iostream>
#include <vector>
#include <algorithm>

#define ll long long
#define fastios cin.tie(nullptr); ios_base::sync_with_stdio(false);

using namespace std;

ll n;

vector<bool>p(1005,true);

void sieve(){
    p[0] = p[1] = false;

    for(int i = 2; i * i <= 1000; i++){
        if(p[i] == false) continue;

        for(int j = i * i; j <= 1000; j += i){
            p[j] = false;
        }
    }
}

int main(){
    fastios;
    
    cin >> n;
    //sieve();

    vector<ll>res;

    if(n % 2 == 1){
        res.push_back(3);
        n -= 3;
    }

    while(n > 0){
        n -= 2;
        res.push_back(2);
    }

    // reverse(res.begin(), res.end());

    cout << res.size() << endl;

    for(auto &v: res){
        cout << v << endl;
    }
}