#include <bits/stdc++.h>

using namespace std;

vector <pair <long long, long long> > xy;
vector <pair <long long, long long> > ab;
vector <long long> x;
vector <long long> y;

string str, str1, str3;

int arsz;
vector <int> ara;
vector <string> star;

bool compare(pair <long long, long long> i, pair <long long, long long> j){
    return (i.first<j.first);
}

//____________________________________________________________________________________//
//____________________________________________________________________________________//


int main() {
    //freopen("in.txt", "r", stdin);
    int n, ans, temp, t, j, i, m, h, h2, m2, c, a, b, mx, k;
    char cot;
    cin >> n;
    //getchar();
    for(j=0;j<n;j++){
        cin >> m;
        map <char, int> dat;
        while(m--){
            cin >> cot >> a;
            dat[cot] = a;
        }
        cin >> m;
        double pay;
        getchar();
        pay = 0;
        while(m--){
            getline(cin, str);
            for(i=0;i<str.length();i++){
                pay+=dat[str[i]];
            }
            //cout <<str <<endl;
            str.clear();
        }
        printf("%.2lf$\n", pay/100);
    }
    return 0;
}















