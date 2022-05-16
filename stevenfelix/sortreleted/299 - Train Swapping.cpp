#include <bits/stdc++.h>

using namespace std;

vector <pair <long long, long long> > xy;
vector <pair <long long, long long> > ab;
vector <long long> x;
vector <long long> y;

string str, str1, str3;

int arsz, ara[1000005];
vector <string> star;

bool compare(pair <long long, long long> i, pair <long long, long long> j){
    return (i.first<j.first);
}

//____________________________________________________________________________________//
//____________________________________________________________________________________//


int main() {
    //freopen("in.txt", "r", stdin);
    int n, ans, temp, t, j, i, m, h, h2, m2, c, a, b, mx, k;
    cin >> t;
    while(t--){
        cin >> n;
        ans = 0;
        for(i=0;i<n;i++) cin >> ara[i];
        for(i=0;i<n;i++){
            for(j=0;j<n-i-1;j++){
                if(ara[j]>ara[j+1]){
                    swap(ara[j], ara[j+1]);
                    ans++;
                }
            }
        }
        //for(i=0;i<n;i++) cout << ara[i] <<" ";
        printf("Optimal train swapping takes %d swaps.", ans);
        cout << endl;
    }
    return 0;
}















