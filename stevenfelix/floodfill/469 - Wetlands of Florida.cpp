#include <bits/stdc++.h>

using namespace std;

vector <pair <long long, long long> > xy;
vector <pair <long long, long long> > ab;
vector <long long> x;
vector <long long> y;

string str, str1, str3;

int arsz, n, m;
vector <int> ara;
string star[205];

bool compare(pair <long long, long long> i, pair <long long, long long> j){
    return (i.first<j.first);
}

//____________________________________________________________________________________//
//____________________________________________________________________________________//

bool vis[205][205];
int al, aw;

void dfsW(int i, int j){
    if(vis[i][j]) return;
    if(star[i][j]=='L') return;
    vis[i][j] = true;
    if(i>0&&j>0){
        dfsW(i-1, j-1);
    }
    if(i>0){
        dfsW(i-1, j);
    }
    if(j>0){
        dfsW(i, j-1);
    }
    if(i<n-1){
        dfsW(i+1, j);
    }
    if(j<m-1){
        dfsW(i, j+1);
    }
    if(i<n-1&&j<m-1){
        dfsW(i+1, j+1);
    }
    if(i>0&&j<m-1){
        dfsW(i-1, j+1);
    }
    if(i<n-1&&j>0){
        dfsW(i+1, j-1);
    }
    aw++;
}
int main() {
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    int ans, temp, t, j, i, h, h2, m2, c, a, b, mx, k;
    cin>>t;
    n = 0;
    while(t--){
        while(1){
            cin >> str;
            if(str[0]-'0'>=0&&str[0]-'0'<=9){
                a = str[0]-'0';
                break;
            }
            star[n] = str;
            //cout << star[n]<<endl;
            n++;
        }
        a = 0;
        for(i=0;i<str.length();i++){
            if(str[i]-'0'>=0&&str[i]-'0'<=9){
                a = a*10 + (str[i]-'0');
            }
        }
        cin >> b;
        m = star[0].length();
        //cout << n <<m<<endl;
        memset(vis, false, sizeof vis);
        aw = 0;
        dfsW(a-1, b-1);
        cout <<aw<< endl;
        while(cin >> str){
            bool flag = false;
            a = 0;
            for(i=0;i<str.length();i++){
                if(str[i]-'0'>=0&&str[i]-'0'<=9){
                    a = a*10 + (str[i]-'0');
                }
                else{
                    star[0] = str;
                    flag = true;
                    n = 1;
                    break;
                }
            }
            if(flag) break;
            cin >> str1;
            b = 0;
            for(i=0;i<str1.length();i++){
                if(str1[i]-'0'>=0&&str1[i]-'0'<=9){
                    b = b*10 + (str1[i]-'0');
                }
                else{
                    star[0] = str;
                    star[1] = str1;
                    flag = true;
                    n = 2;
                    break;
                }
            }
            if(flag) break;
            memset(vis, false, sizeof vis);
            aw = 0;
            dfsW(a-1, b-1);
            //cout << a <<" "<< b <<endl;
            cout <<aw<< endl;
        }
        if(t!=0)cout <<endl;
    }
    return 0;
}















