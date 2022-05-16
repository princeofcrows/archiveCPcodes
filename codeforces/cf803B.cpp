//price_of_crows
//revolution_for_redemption
//BUET_Mushroom

#include <bits/stdc++.h>

using namespace std;

vector <pair <string, string> > xy;
vector <pair <long long, long long> > ab;
vector <long long> x;
vector <long long> y;

string str, str1, str2, star[200000];

long long ara[200005], ara2[200005];

bool flagar[200005], flagar2[200005];

bool compare(pair <long long, long long> i, pair <long long, long long> j){
    return (i.first<j.first);
}
//____________________________________________________________________________________//
//____________________________________________________________________________________//
//____________________________________________________________________________________//

long long dp[105][105];

int main() {
    //freopen("in.txt", "r", stdin);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n, ans, temp, t, j, i, m, h, h2, m2, c, a, b, mx, d, k;
    cin >> n;
    for(i=0;i<n;i++){
        cin >> ara[i];
        ara2[i] = 99999999999;
        if(ara[i]==0){
            x.push_back(i);
            ara2[i] = 0;
        }
    }
    for(i=0;i<x[0];i++){
        ara2[i] = x[0]-i;
    }
    for(i=0;i<x.size()-1;i++){
        temp = 1;
        for(j=x[i]+1;j<x[i+1];j++){
            ara2[j] = min(temp, ara2[j]);
            temp++;
        }
        if(i>0){
            temp = 1;
            for(j=x[i]-1;j>x[i-1];j--){
                ara2[j] = min(temp, ara2[j]);
                temp++;
            }
        }
    }
    temp = 1;
    for(j=x[i]-1;j>x[i-1];j--){
        ara2[j] = min(temp, ara2[j]);
        temp++;
    }
    for(i=x[x.size()-1]+1;i<n;i++){
        ara2[i] = i-x[x.size()-1];
    }
    for(i=0;i<n;i++){
        cout << ara2[i] <<" ";
    }
    return 0;
}




















