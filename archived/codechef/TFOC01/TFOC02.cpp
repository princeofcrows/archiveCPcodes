//price_of_crows
//revolution_for_redemption
//BUET_Mushroom

#include <bits/stdc++.h>
#define MAXC 505

using namespace std;

int len, n;
vector <int> A;

int minStepToDeleteString(){

    int N = A.size();

    int dp[N + 1][N + 1];
    for (int i = 0; i <= N; i++)
        for (int j = 0; j <= N; j++)
            dp[i][j] = 0;

    for (int len = 1; len <= N; len++){
        for (int i = 0, j = len - 1; j < N; i++, j++){
            if (len == 1)
                dp[i][j] = 1;
            else{
                dp[i][j] = 1 + dp[i + 1][j];
                if (A[i] == A[i + 1])
                    dp[i][j] = min(1 + dp[i + 2][j], dp[i][j]);
                for (int K = i + 2; K <= j; K++)
                    if (A[i] == A[K])
                        dp[i][j] = min(dp[i+1][K-1] + dp[K+1][j], dp[i][j]);
            }
        }
    }

    return dp[0][N - 1];
}
int main() {
    //freopen("in.txt", "r", stdin);
    ios_base::sync_with_stdio(0);   cin.tie(0);
    int temp, t, j, i, m, h, h2, m2, c, a, b, mx, d, f,s, k;
    cin >> n;
    j = n-1;
    for(i=0;i<n;i++){
        cin >> a;
        A.push_back(a);
    }
    cout << minStepToDeleteString();
    return 0;
}




















