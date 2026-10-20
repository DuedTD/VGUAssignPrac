#include <iostream>
#include <cctype>

#define ll long long
#define fastios cin.tie(nullptr); ios_base::sync_with_stdio(false);

using namespace std;

string s;
int l = 0, u = 0;

int main(){
    cin >> s;

    string sl = s;
    for (auto &c: sl){
        c = tolower(c);
    }
    string su = s;
    for (auto &c: su){
        c = toupper(c);
    }

    for(int i = 0; i < s.size(); i++){
        if(s[i] == sl[i]) l++;
        else u++;
    }

    cout << (u > l ? su : sl);
}