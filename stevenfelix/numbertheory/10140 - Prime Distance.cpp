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
long long ara[1000006], ara2[1000006];
vector < pair <long long, long long> > ab;
vector <long long> x;
vector <long long> y;

void seive(){
    memset(ara, 0, sizeof ara);
    long long i, j;
    for(i=2;i<=1000000;i++){
        if(ara[i]==0){
            x.push_back(i);
            for(j=2*i;j<=1000000;j+=i){
                ara[j] = 1;
            }
        }
    }
}

int main() {
    //freopen("in.txt", "r", stdin);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n, ans, temp, t, j, i, m, h, h2, m2, c, a, b, mx, d, k, l, mn;
    seive();
    while(cin >> a >> b){
        y.clear();
        memset(ara2, 0, sizeof ara2);
        for(j=0;j<x.size();j++){
            i = a-a%x[j];
            if(a%x[j]!=0) i+=x[j];
            if(i==x[j]) i*=2;
            for(l=i-a;l<=b-a;l+=x[j]){
                ara2[l] = 1;
            }
        }
        for(i=a;i<=b;i+=1){
            if(ara2[i-a]==0) y.push_back(i);
        }
        if(y.size()<=1){
            printf("There are no adjacent primes.\n");
            continue;
        }
        d = 9999999999;
        c = 0;
        for(i=0;i<y.size()-1;i++){
            if(y[i+1]-y[i]<d){
                d = y[i+1]-y[i];
                a = y[i];
                b = y[i+1];
            }
            if(y[i+1]-y[i]>c){
                c = y[i+1]-y[i];
                n = y[i];
                m = y[i+1];
            }
        }
        printf("%lld,%lld are closest, %lld,%lld are most distant.\n", a, b, n, m);
    }
    return 0;
}
















