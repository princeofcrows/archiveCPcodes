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
long long ara[10000006], ara2[10000006];
vector < pair <long long, long long> > ab;
vector <long long> x;
vector <long long> y;
vector <long long> z;

void seive(){
    memset(ara, 0, sizeof ara);
    for(long long i=2;i<=10000;i++){
        if(ara[i]==0){
            x.push_back(i);
            for(long long j=i*2;j<=10000;j+=i){
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
    long long int n, ans, temp, t, j, i, m, h, h2, m2, c, a, b, mx, d, k, l, mn, temp2;
    seive();
    cin >> t;
    while(t--){
        cin >> a >> c;
        temp = c;
        temp2 = a;
        if(c%a){
            cout <<"NO SOLUTION\n";
            continue;
        }
        b = 1;
        for(i=0;i<x.size();i++){
            if(x[i]>temp) break;
            m = n = 1;
            while(temp%x[i]==0){
                temp/=x[i];
                m*=x[i];
            }
            while(temp2%x[i]==0){
                temp2/=x[i];
                n*=x[i];
            }
            if(m>n) b*=m;
        }
        if(temp!=temp2) b*=temp;
        cout << b << endl;
    }
    return 0;
}
















