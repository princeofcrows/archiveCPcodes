#include <bits/stdc++.h>

using namespace std;

vector <pair <string, string> > xy;
vector <pair <long long, long long> > ab;
vector <long long> x;
vector <long long> y;

string str, str1, str2, star[200000];

long long ara[200005], ara2[200005];

bool flagar[200005], flagar2[200005];



//____________________________________________________________________________________//
//____________________________________________________________________________________//
//____________________________________________________________________________________//

string st11, st22, st21, st12;

int main() {
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    long long int n, temp, t, j, i, m, h, h2, m2, c, a, b, mx, d, ans;
    cin >> n >> a;
    temp = n;
    i = 2;
    while(temp!=1){
        if(temp%i==0){
            temp/=i;
            x.push_back(i);
        }
        else i++;
    }
    if(x.size()<a){
        cout <<-1;
        return 0;
    }
    i = 0;
    if(x.size()>a){
        i=1;
        t = x.size();
        b = x[0];
        while(t!=a){
            b *= x[i];
            i++;
            t--;
        }
        cout << b <<" ";
    }
    for(i=i;i<x.size();i++) cout << x[i] <<" ";
    return 0;
}











