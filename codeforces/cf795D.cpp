//price_of_crows
//revolution_for_redemption
//BUET_Mushroom

#include <stdio.h>

using namespace std;

long long ara[200005], ara2[200005];

bool flagar[200005], flagar2[200005];
//____________________________________________________________________________________//
//____________________________________________________________________________________//
//____________________________________________________________________________________//

int main() {
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdin);
    long long n, ans, temp, t, j, i, m, h, h2, m2, c, a, b, mx, d, c1, c2;
    scanf("%d%d%d", &n, &a, &b);
    for(i=0;i<n;i++) scanf("%d", &ara[i]);
    for(i=0;i<n;i++) scanf("%d", &ara[i]);
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



















