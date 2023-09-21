//price_of_crows
//revolution_for_redemption
//BUET_Mushroom

#include <bits/stdc++.h>

using namespace std;

vector <pair <string, string> > xy;
vector <pair <long long, long long> > ab;
vector <long long> x;
vector <long long> y;

string str, str1, str2, star[200000], rstar[200000];

long long ara[200005], ara2[200005], ara3[200005];

bool flagar[200005], flagar2[200005];

bool compare(pair <long long, long long> i, pair <long long, long long> j){
    return (i.first<j.first);
}
//____________________________________________________________________________________//
//____________________________________________________________________________________//
//____________________________________________________________________________________//


int main() {
    //freopen("in.txt", "r", stdin);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n, ans, temp, t, j, i, m, h, h2, m2, c, a, b, mx, d, k;
    cin >> n >> k;
    for(j=1;j<k;j++) ara[j] = j;
    for(i=k;i<=n;i++){
        cin >> str;
        if(str=="NO"){
            ara[i] = ara[i-k+1];
        }
        else{
            ara[i] = j++;
        }
    }
    for(i=1;i<=n;i++){
        cout << (char)(ara[i]/26+'A')<<(char)(ara[i]%26+'a')<<" ";
    }
    return 0;
}




















