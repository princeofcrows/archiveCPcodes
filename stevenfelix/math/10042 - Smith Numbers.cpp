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

string star[200000], str2, str1;
long long ara[200005];
vector < pair <long long, long long> > ab;
vector <long long> x;
vector <long long> y;
vector <string> dat;

long long digitsum(long long n){
    long long ans = 0;
    while(n!=0){
        ans+=n%10;
        n/=10;
    }
    return ans;
}

void seive(){
    memset(ara, 0, sizeof ara);
    for(long long i=2;i<=200000;i++){
        if(ara[i]==0){
            x.push_back(i);
            for(long long j=2*i;j<=200000;j+=i){
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
    long long n, ans, temp, t, j, i, m, h, h2, m2, c, a, b, mx, k, l, d;
    cin >> t;
    seive();
    while(t--){
        cin>>n;
        for(i=n+1;;i++){
            if(i<=200000){
                if(!ara[i]){
                    continue;
                }
            }
            temp = i;
            a = digitsum(i);
            b = 0;
            for(j=0;j<x.size();j++){
                if(temp<x[j]) break;
                while(temp%x[j]==0){
                    temp/=x[j];
                    b+=digitsum(x[j]);
                }
            }
            if(temp!=1) b+=digitsum(temp);
            if((a==b)&&(temp!=i)){
                cout << i;
                cout << endl;
                break;
            }
        }
    }
    return 0;
}







