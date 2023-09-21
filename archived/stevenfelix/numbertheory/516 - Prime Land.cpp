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

string star[200000], str, str1;
long long ara[200006];
vector < pair <long long, long long> > ab;
vector <long long> x;
vector <long long> y;
long long dig[400][800];

void seive(){
    memset(ara, 0, sizeof ara);
    for(long long i=2;i<=40000;i++){
        if(ara[i]==0){
            x.push_back(i);
            for(long long j=i*2;j<=40000;j+=i){
                ara[j] = 1;
            }
        }
    }
}

int main() {
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n, ans, temp, t, j, i, m, h, h2, m2, c, a, b, mx, d, k, l, mn;
    seive();
    reverse(x.begin(), x.end());
    while(getline(cin, str)){
        if(str=="0") break;
        str+=" ";
        a = b = c = ans = 0;
        ans = 1;
        for(i=0;i<str.length();i++){
            if(str[i]==' '){
                if(c==0) continue;
                if(a==0){
                    b = c;
                    c = 0;
                    a = 1;
                }
                else{
                    ans*=pow(b, c);
                    b = c = a = 0;
                }
                continue;
            }
            c = c*10+(str[i]-'0');
        }
        ans--;

        for(i=0;i<x.size();i++){
            a = 0;
            while(ans%x[i]==0){
                ans/=x[i];
                a++;
            }
            if(a)ab.push_back({x[i],a});
        }
        for(i=0;i<ab.size();i++){
            cout << ab[i].first <<" "<<ab[i].second;
            if(i!=ab.size()-1) cout <<" ";
        }
        ab.clear();
        cout << endl;
    }
    return 0;
}
















