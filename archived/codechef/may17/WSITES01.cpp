/////////////////////////////////////////////////////////////////////////
//.....................................................................//
///////////__jasper_skywalker__fsociety()__BUET_mushroom__///////////////
//.....................................................................//
/////////////////////////////////////////////////////////////////////////

#include <map>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>

using namespace std;

vector <pair <long long, long long> > xy;
vector <pair <long long, long long> > ab;
vector <long long> x;
vector <long long> y;

string str, str1, str2, star[2000];

long long ara[200005], ara2[200005], ara3[200005];

bool flagar[200005], flagar2[200005];

bool compare(pair <long long, long long> i, pair <long long, long long> j){
    return (i.first<j.first);
}

bool compare2(pair <long long, long long> i, pair <long long, long long> j){
    return (i.first>j.first);
}

long long gcd(long long a, long long b){
    if(a%b==0) return b;
    return gcd(b, a%b);
}

//____________________________________________________________________________________//
//____________________________________________________________________________________//
//____________________________________________________________________________________//
vector <string> pst;
vector <string> nst;
vector <string> ast;
vector <string> stt;
map <string, bool> dat;
map <string, bool> dat2;

typedef struct trie{
    map <char, trie*> child;
}trie;

void prfset(trie* root, string word){
    trie* cur = root;
    for(int i=0; i<word.length(); i++){
        if(!cur->child[word[i]]){
            cur->child[word[i]] = new trie;
        }
        cur = cur->child[word[i]];
    }
    return;
}

long long checkprfset(trie* root, string word){
    trie* cur = root;
    for(int i=0; i<word.length(); i++){
        if(!cur->child[word[i]]){
            return i;
        }
        cur = cur->child[word[i]];
    }
    return -1;
}

int main() {
    //freopen("in.txt", "r", stdin);
    long long int n, ans, temp, t, j, i, m, h, h2, m2, c, a, b, mx, d, p, pk, k;
    cin >> n;
    a = b = 0;
    for(i=0;i<n;i++){
        cin >> str >> str1;
        if(str=="+"){
            pst.push_back(str1);
        }
        if(str=="-"){
            nst.push_back(str1);
        }
    }
    trie* root = new trie;
    for(i=0;i<pst.size();i++){
        prfset(root, pst[i]);
    }
    for(i=0;i<nst.size();i++){
        a = checkprfset(root, nst[i]);
        if(a==-1){
            cout << -1;
            return 0;
        }
        str="";
        for(j=0;j<=a;j++){
            str+=nst[i][j];
        }
        if(dat[str]) continue;
        dat[str] = true;
        ast.push_back(str);
    }
    sort(ast.begin(), ast.end());
    cout << ast.size()<<endl;
    for(i=0;i<ast.size();i++){
        cout << ast[i] << endl;
    }
    return 0;
}











