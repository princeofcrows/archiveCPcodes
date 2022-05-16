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

#include <stdio.h>
int ara[10005], ara2[10005], ara3[10005], n, m;

void seive(){
    for(int i=2;i<=10000;i++){
        ara[i] = 0;
    }
    m = 0;
    for(int i=2;i<=10000;i++){
        if(ara[i]==0){
            ara3[m++] = i;
            for(int j=i;j<=10000;j+=i){
                ara[j] = 1;
            }
        }
    }
}


int main() {
    //freopen("in.txt", "r", stdin);
    int ans, temp, t, j, i, h, h2, m2, c, a, b, mx, d, k, l;
    scanf("%d", &t);
    seive();
    while(t--){
        scanf("%d", &n);
        a = 0;
        ara2[0] = 0;
        for(i=1;i<=n;i++){
            scanf("%d", &ara2[i]);
            if(ara2[i]<ara2[i-1]){
                a+= ara2[i-1]-ara2[i];
                ara2[i] = ara2[i-1];
            }
        }
        ans = 99999999;
        for(i=0;i<m;i++){
            mx = a;
            for(j=1;j<=n;j++){
                c = 1;
                if(ara2[j]%ara3[i]==0){
                    c = 0;
                }
                b = (ara2[j]/ara3[i]+c)*ara3[i]-ara2[j];
                mx += b;
            }
            if(mx<ans) ans = mx;
        }
        printf("%d\n", ans);
    }
    return 0;
}







