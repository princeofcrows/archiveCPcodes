#include <bits/stdc++.h>

using namespace std;

int main(){
    //freopen("in.txt", "r", stdin);
    double ns, nc, nm;
    while(scanf("%lf%lf%lf", &nm, &nc, &ns)!=EOF){
        printf("%.5lf\n", (nc*(nc-1)+nm*nc)/((nc+nm)*(nm+nc-ns-1)));
    }
    return 0;
}
