#include <stdio.h>
int ara[200005], ara2[200005];


int main() {
    int n, ans, temp, t, j, i, m, h, h2, m2, c, a, b, mx, d, c1, c2;
    scanf("%d%d%d", &n, &a, &b);
    for(i=0;i<n;i++) scanf("%d", &ara[i]);
    for(i=0;i<n;i++) scanf("%d", &ara2[i]);
    for(i=0;i<a-1;i++){
        if(ara2[i]!=ara[i]){
            printf("LIE");
            return 0;
        }
    }
    for(i=b;i<n;i++){
        if(ara2[i]!=ara[i]){
            printf("LIE");
            return 0;
        }
    }
    printf("TRUTH");
    return 0;
}



















