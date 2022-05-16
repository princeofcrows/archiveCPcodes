#include <bits/stdc++.h>

using namespace std;

vector <pair <string, string> > xy;
vector <pair <long long, long long> > ab;
vector <long long> x;
vector <long long> y;

string str, str1;;

long long ara[200005], ara2[200005];

bool flagar[200005], flagar2[200005];

//____________________________________________________________________________________//
//____________________________________________________________________________________//
//____________________________________________________________________________________//

bool check(long long p){
    long long n = str.length();
    for(long long i=0;i<n;i++){
        ara2[i] = 0;
    }
    for(long long i=0;i<p;i++){
        ara2[ara[i]-1] = 1;
    }
    int j = 0;
    for(long long i=0;i<n;i++){
        if(str[i]==str1[j]&&ara2[i]==0){
            j++;
            if(j==str1.length()) return true;
        }
    }
    return false;
}


int main() {
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    long long int n, temp, t, j, i, m, h, h2, m2, c, a, b, mx, d, ans;
    cin >> str >> str1;
    n = str.length();
    for(i=0;i<n;i++){
        cin >> ara[i];
    }
    a = 1; b = n;
    d = 0;
    while(b>=a){
        c = (a+b)/2;
        if(check(c)){
            d = c;
            a = c+1;
        }
        else{
            b = c-1;
        }
    }
    cout << d;
    return 0;
}











