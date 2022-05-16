//price_of_crows
//revolution_for_redemption
//BUET_Mushroom

#include <bits/stdc++.h>
#define MAXC 505

using namespace std;
int dp[MAXC][MAXC];
bool visited[MAXC][MAXC];
int A[MAXC], B[MAXC], len, n;

int calcLCS(int i,int j)
{
	if(i==n || j== n) return 0;
	if(visited[i][j])return dp[i][j];

	int ans=0;
	if(A[i]==B[j]){
        if(A[i]!=INT_MAX) ans=1+calcLCS(i+1,j+1);
        else ans = calcLCS(i+1,j+1);
	}
	else
	{
		int val1=calcLCS(i+1,j);
		int val2=calcLCS(i,j+1);
		ans=max(val1,val2);
	}
	visited[i][j]=1;
	dp[i][j]=ans;
	return dp[i][j];
}

void printLCS(int i,int j)
{
    if(i==n || j== n) return;

    if(A[i]==B[j]){
        A[i] = B[j] = INT_MAX;
        printLCS(i+1,j+1);
    }
    else
    {
        if(dp[i+1][j]>dp[i][j+1]) printLCS(i+1,j);
        else printLCS(i,j+1);
    }
}

int main() {
    freopen("in.txt", "w", stdout);
    ios_base::sync_with_stdio(0);   cin.tie(0);
    int temp, t, j, i, m, h, h2, m2, c, a, b, mx, d, f,s, k;
    cout << 500 << endl;
    for(i=1;i<=500;i++){
        cout << i <<" ";
    }
    return 0;
}




















