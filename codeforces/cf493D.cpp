#include <bits/stdc++.h>

using namespace std;

vector <pair <string, string> > xy;
vector <pair <long long, long long> > ab;
vector <long long> x;
vector <long long> y;

string str, str1, str2, star[200000];

long long ara[1000005], ara2[205];

bool flagar[200005], flagar2[200005];

//____________________________________________________________________________________//
//____________________________________________________________________________________//
//____________________________________________________________________________________//

void seive(){
    memset(ara, 0, sizeof ara);
    for(int i=2;i<1000001;i++){
        if(ara[i]==0){
            x.push_back(i);
            for(int  j=i*2;j<1000001;j+=i){
                ara[j] = 1;
            }
        }
    }
}

int main() {
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    long long int n, temp, t, j, i, m, h, h2, m2, c, a, b, mx, d, ans;
    cin >> n;
    if(n%2){
        cout <<"black";
    }
    else{
        cout <<"white\n1 2";
    }
    return 0;
}











