//prince_of_crows
//revolution_for_redemption
//BUET_Mushroom

/*This is beginning to feel like the long
winded blues of the never
Barely controlled locomotive consuming the picture
and blowing the crows, the smoke

This is beginning to feel like the long
winded blues of the never
Static explosion devoted to crushing the broken
and shoving their souls to ghost

Eternalised. Objectified.
You set your sights so high.
But this is beginning to feel like
the bolt busted loose from the lever

Never mind
Death professor
Your structure's fine
My dust is better
Your victim flies so high
All to catch a bird's eye view of who's next*/

#include <bits/stdc++.h>

using namespace std;
vector <long long> x;
long long ara[1000];
string str;

int main() {
    //freopen("in.txt", "r", stdin);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int temp, t, j, i, m, h, h2, m2, c, a, mx, b, l, d, ans, n;
    cin >> str;
    n = str.length();
    a = b = 0;
    char ch = str[0];
    for(i=0;i<n;i++){
        if(str[i]==ch) a++;
        else{
            x.push_back(a);
            a = 1;
            ch = str[i];
        }
        if(str[i]=='0') b++;
    }
    x.push_back(a);
    ans = 0;
    if(str[0]=='0'){
        ans = max(x[0], ans);
        for(i=0;i<x.size();i+=2){
            if((i+1<x.size())&&(x[i+1]==1)){
                a = x[i]+x[i+1];
                if(i+2<x.size()){
                    a += x[i+2];
                }
                ans = max(a, ans);
            }
            else if((i+1<x.size())){
                ans = max(ans, x[i]+1);
            }
        }
    }
    d = 1;
    if(str[0]=='1'){
        if(x.size()>1)ans = max(1+x[1], ans);
        else ans = max(d, ans);
        for(i=1;i<x.size();i+=2){
            if((i+1<x.size())&&(x[i+1]==1)){
                a = x[i]+x[i+1];
                if(i+2<x.size()){
                    a += x[i+2];
                }
                ans = max(a, ans);
            }
            else {
                ans = max(ans, x[i]+1);
            }
        }
    }
    cout << min(ans, b);
    return 0;
}













