#include <iostream>
#include <iomanip>

#define ll long long
#define fastios cin.tie(nullptr); ios_base::sync_with_stdio(false);

using namespace std;

ll cnt = 0, s = 0;
string v;

ll stoi(string &z){
    ll res = 0;
    
    int i = 0;
    while(i < z.size()){
        res *= 10;
        res += (z[i] - '0');
    
        i++;
    }

    return res;
}

int main(){
    fastios;
    
    while(true){
        cin >> v;
        if(v == "stop"){
            if(cnt != 0){
                cout << "Count: " << cnt << ", Average: " << fixed << setprecision(2) << (float(s)/float(cnt))<< endl;
            }
            else{
                cout << "Count: 0, No Data" << endl;
            }
            break;
        }

        ll val = stoi(v);
        if( -20 <= val && val <= 80){
            cnt++;
            s+=val;
        }
    }

    return 0;
}