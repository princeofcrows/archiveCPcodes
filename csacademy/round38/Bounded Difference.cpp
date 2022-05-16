#include <stdio.h>

int ara[100005], ara2[100005], n;
int x[100005];

int mabs(int a, int b){
    if(a-b<0) return b-a;
    return a-b;
}

bool check(int k){
    for(int i=0;i<n-1;i++){
        if(mabs(ara[i], ara[i+1])>k){
            return false;
        }
    }
    return true;
}

int main() {
    //freopen("in.txt", "r", stdin);
    //ios_base::sync_with_stdio(0);
    //cin.tie(0);
    int ans, temp, t, j, i, m, h, h2, m2, c, a, b, mx, d, k, l;
    scanf("%d%d", &n, &k);
    for(i=0;i<n;i++){
        scanf("%d", &ara[i]);
    }
    c = 1;
    for(i=0;i<n;i++){
       ara2[i] = 0;
    }
    j = 0;
    for(i=0;i<n-1;i++){
        if(mabs(ara[i],ara[i+1])>k){
            c = 0;
            if(!ara2[i]){
                x[j++] = i;
                ara2[i] = 1;
            }
            if(!ara2[i+1]){
                x[j++] = i;
                ara2[i] = 1;
            }
        }
    }
    if(c){
        printf("0");
        return 0;
    }
    if(j>=10){
        printf("-1");
        return 0;
    }
    b = j;
    for(i=0;i<b;i++){
        a = x[i];
        for(j=0;j<n;j++){
            if(j==a) continue;
            temp = ara[a];
            ara[a] = ara[j];
            ara[j] = temp;
            if(check(k)){
                printf("%d %d", a+1, j+1);
                return 0;
            }
            temp = ara[a];
            ara[a] = ara[j];
            ara[j] = temp;
        }
    }
    printf("-1");
    return 0;
}













