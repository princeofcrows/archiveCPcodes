#include <bits/stdc++.h>

using namespace std;

vector <pair <long long, long long> > xy;
vector <pair <long long, long long> > ab;
vector <long long> x;
vector <long long> y;

string str, str1, str2, str3, stgm;

int arsz;
vector <int> ara;
vector <string> star;

bool compare(pair <long long, long long> i, pair <long long, long long> j){
    return (i.first<j.first);
}

//____________________________________________________________________________________//
//____________________________________________________________________________________//

struct cont{
    int con;
    int sol;
    int time;
    int ara[13];
    bool solp[13];
};

map <int, int> dat2;
map <int, int> dat3;
vector <cont> inf;

bool compare2(cont i, cont j){
    if(i.sol==j.sol){
        if(i.time==j.time){
            return (i.con<j.con);
        }
        return (i.time<j.time);
    }
    return (i.sol>j.sol);
}

int main() {
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    int n, ans, temp, t, j, i, m, h, h2, m2, c, a, b, mx, k;
    char ch;
    cin >> t;
    getchar();
    getchar();
    k = 1;
    while(t--){
        while(getline(cin, str1)){
            //cout << str1 <<endl;
            if(str1.length()<3){
                break;
            }
            n = str1.length();
            //cout << n;
            i = a = b = c = 0;
            while(str1[i]!=' '){
                a = a*10+(str1[i]-'0');
                i++;
            }
            i++;
            while(str1[i]!=' '){
                b = b*10+(str1[i]-'0');
                i++;
            }
            i++;
            while(str1[i]!=' '){
                c = c*10+(str1[i]-'0');
                i++;
            }
            //cout << a << " "<<b <<" "<<c <<endl;
            ch = str1[n-1];
            if(dat2[a]==0){
                dat2[a] = k++;
                cont da;
                da.con = a;
                da.sol = da.time = 0;
                memset(da.ara, 0, sizeof da.ara);
                memset(da.solp, false, sizeof da.solp);
                inf.push_back(da);
            }
            if(ch=='C'&&inf[dat2[a]-1].solp[b]==false){
                inf[dat2[a]-1].time += c;
                inf[dat2[a]-1].time += inf[dat2[a]-1].ara[b]*20;
                inf[dat2[a]-1].sol++;
                inf[dat2[a]-1].solp[b] = true;
            }
            else if(ch=='I'&&inf[dat2[a]-1].solp[b]==false){
                inf[dat2[a]-1].ara[b]++;
            }
            //cout << da.team <<endl;
        }
        sort(inf.begin(), inf.end(), compare2);
        for(i=0;i<inf.size();i++){
            cout << inf[i].con <<" "<<inf[i].sol <<" "<<inf[i].time<<endl;
        }
        if(t!=0) cout << endl;
        inf.clear();
        dat2.clear();
        k = 1;
    }
    return 0;
}















