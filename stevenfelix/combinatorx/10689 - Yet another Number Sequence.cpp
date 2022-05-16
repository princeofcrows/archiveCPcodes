#include <bits/stdc++.h>

using namespace std;

#define int long long
int m;

struct matrix1{
    int dat1[2][2];
};

matrix1 matmul1(matrix1 a, matrix1 b, int m){
    matrix1 c;
    c.dat1[0][0] = (a.dat1[0][0]*b.dat1[0][0] + a.dat1[0][1]*b.dat1[1][0])%m;
    c.dat1[0][1] = (a.dat1[0][0]*b.dat1[0][1] + a.dat1[0][1]*b.dat1[1][1])%m;
    c.dat1[1][0] = (a.dat1[1][0]*b.dat1[0][0] + a.dat1[1][1]*b.dat1[1][0])%m;
    c.dat1[1][1] = (a.dat1[1][0]*b.dat1[0][1] + a.dat1[1][1]*b.dat1[1][1])%m;
    return c;
}

matrix1 bigmod(matrix1 a, int b, int m){
    if(b==1) return a;
    matrix1 x = bigmod(a, b/2, m);
    x = matmul1(x, x, m);
    if(b%2) x = matmul1(x, a, m);
    return x;
}

int32_t main(){
    //freopen("in.txt", "r", stdin);
    int n, i, j, c, f1, f2;;
    cin >> c;
    while(c--){
        cin >>f1 >> f2 >> n >> j;
        m = 1;
        while(j){
            m*=10;
            j--;
        }
        if(n==0){
            cout << f1%m << endl;
            continue;
        }
        if(n==1){
            cout << f2%m << endl;
            continue;
        }
        matrix1 a, b;
        a.dat1[0][0] = a.dat1[0][1] = a.dat1[1][0] = 1;
        a.dat1[1][1] = 0;
        a = bigmod(a, n-1, m);
        b.dat1[0][1] = b.dat1[1][1] = 0;
        b.dat1[0][0] = f2;
        b.dat1[1][0] = f1;
        a = matmul1(a, b, m);
        cout << a.dat1[0][0] << endl;
    }
    return 0;
}
