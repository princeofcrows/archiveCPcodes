
#include <queue>
#include <iostream>
#include <algorithm>
#include <vector>
#include <utility>
#include <fstream>
#include <climits>
#include <cstring>
#include <cmath>
using namespace std;
vector <pair <long long, long long> > v;
vector <pair <long long, long long> > v2;
vector <pair <long long, long long> > x;
vector <pair <long long, long long> > y;
string str;

bool compare(pair <long long, long long> i, pair <long long, long long> j){
    return (i.first<j.first);
}
bool compare2(pair <long long, long long> i, pair <long long, long long> j){
    return (i.first>j.first);
}

long long ara[55][55];

int main() {
    //freopen("in.txt", "r", stdin);
    long long int n, ans, temp, t, j, i, m, h, h2, m2, c, a, b ,v;
    cin >> n;
    bool flag = false;
    a = b = c = 0;
    for(i=0;i<n;i++){
        cin >> h;
        if(h==25) a++;
        else if(h==50){
            if(a==0){
                cout << "NO";
                return 0;
            }
            a--;
            b++;
        }
        else if(h==100){
            if((a<3&&b==0)||(a==0)){
                cout << "NO";
                return 0;
            }
            if(a&&b){
                c++;
                a--;
                b--;
            }
            else if(a&&!b){
                c++;
                a-=3;
            }
        }
        //cout << a <<" " <<b <<" "<< c << endl;
    }
    cout << "YES";
    return 0;
}















