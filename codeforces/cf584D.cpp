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
    temp = n-1;
    seive();
    if(n==3){
        cout << 1<<"\n"<<3;
        return 0;
    }
    while(1){
        temp--;
        bool flag = true;
        for(i=0;x[i]*x[i]<=temp;i++){
            if(temp%x[i]==0){
                flag = false;
                break;
            }
        }
        if(flag){
            break;
        }
    }
    y.push_back(temp);
    a = n-temp;
    if(a==2||ara[a]==0){
        cout << 2 <<"\n"<<temp<<" "<<a;
        return 0;
    }
    for(i=0;i<x.size();i++){
        if(a-x[i]>=2&&ara[a-x[i]]==0){
            y.push_back(x[i]);
            y.push_back(a-x[i]);
            break;
        }
    }
    cout << y.size()<<endl;
    for(i=0;i<y.size();i++){
        cout << y[i] <<" ";
    }
    return 0;
}











