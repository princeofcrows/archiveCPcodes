#include <stdio.h>
#include <string.h>

char star[40][40];
char str[20004], s1[20005], s2[20005];
int dp[20005][20005];
char d1[20005], d2[20005];

void dfs(int a, int b, int i, int l){
    s1[i]=star[a-1][b-1];
    if(i==l) return;
    if(d1[i]=='E'){
        dfs(a, b+1, i+1, l);
    }
    else if(d1[i]=='W'){
        dfs(a, b-1, i+1, l);
    }
    else if(d1[i]=='S'){
        dfs(a+1, b, i+1, l);
    }
    else if(d1[i]=='N'){
        dfs(a-1, b, i+1, l);
    }
}

void dfs2(int a, int b, int i, int l){
    s2[i]=star[a-1][b-1];
    if(i==l) return;
    if(d2[i]=='E'){
        dfs2(a, b+1, i+1, l);
    }
    else if(d2[i]=='W'){
        dfs2(a, b-1, i+1, l);
    }
    else if(d2[i]=='S'){
        dfs2(a+1, b, i+1, l);
    }
    else if(d2[i]=='N'){
        dfs2(a-1, b, i+1, l);
    }
}

int lcs(int i, int j, int n, int m){
    if(i==n||j==m) return 0;
    if(dp[i][j]!=-1) return dp[i][j];
    int ans = 0;
    int r1, r2;
    if(s1[i]==s2[j]){
        ans = lcs(i+1, j+1, n, m)+1;
    }
    else{
        r1 = lcs(i+1, j, n, m);
        r2 = lcs(i, j+1, n, m);
        if(r1>r2) ans = r1;
        else ans = r2;
    }
    return dp[i][j] = ans;
}

int main() {

    int temp, t, j, i, m, h2, m2, c, a, b, mx, d, k, l, n, ans, h, w;
    scanf("%d", &t);
    d = 1;
    while(t--){
        scanf("%d%d", &h, &w);
        for(i=0;i<h;i++){
            scanf("%s", star[i]);
        }

        scanf("%d%d%d", &n, &a, &b);
        scanf("%s", d1);
        dfs(a, b, 0, n);

        scanf("%d%d%d", &m, &a, &b);
        scanf("%s", d2);
        dfs2(a, b, 0, m);

        for(i=0;i<=n+2;i++){
            for(j=0;j<=m+2;j++) dp[i][j] = -1;
        }
        ans = lcs(0, 0, n+1, m+1);
        printf("Case %d: %d %d\n", d++, n-ans+1, m-ans+1);
    }
    return 0;
}

















