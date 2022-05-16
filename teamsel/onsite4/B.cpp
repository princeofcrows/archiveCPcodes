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
int ara[10000005], ara2[10000005], n;
vector < pair <long long, long long> > ab;
vector < int > x;
vector < int > y;
int dat[10000005];

void seive(){
    memset(ara, 0, sizeof ara);
    memset(ara2, 0, sizeof ara2);
    for(int i=2;i<=10000000;i++){
        if(ara[i]==0){
            for(int j=i;j<=10000000;j+=i){
                ara2[i]+=dat[j];
                ara[j] = 1;
            }
        }
    }
}


int main() {
    //freopen("in.txt", "r", stdin);
    int ans, temp, t, j, i, m, h, h2, m2, c, a, b, mx, d, k, l;
    scanf("%d", &n);
    memset(dat, 0, sizeof dat);
    for(i=0;i<n;i++){
        scanf("%d", &a);
        dat[a]++;
    }
    seive();
    for(i=1;i<=10000000;i++){
        ara2[i]+=ara2[i-1];
    }
    scanf("%d", &m);
    c = 10000000;
    while(m--){
        scanf("%d%d", &a, &b);
        if(a>c){
            printf("0\n");
            continue;
        }
        b = min(b, c);
        ans = ara2[b]-ara2[a-1];
        printf("%d\n", ans);
    }
    return 0;
}







