
/////////////////////////////////////////////////////////////////////////
//.....................................................................//
////////////jasper_skywalker___fsociety()___BUET_mashroom////////////////
//.....................................................................//
/////////////////////////////////////////////////////////////////////////

#include <bits/stdc++.h>

using namespace std;

vector <pair <long long, long long> > xy;
vector <pair <long long, long long> > ab;
vector <long long> x;
vector <long long> y;

string str[3], str1, str2;

long long ara[200005];

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
//_________________________naturalprogrmmersdontusetemplets___________________________//
//____________________________________________________________________________________//

multiset <long long> green;
multiset <long long> blue;
vector <long long> temg;
vector <long long> temb;

int main() {
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    long long int n, ans, t, j, i, m, h, h2, m2, c, a, b, mx, k, temp, sg, sb, g;
    multiset <long long>::iterator bi, gi, lo;
    cin >> n;
    c = 0;
    while(n--){
        if(c) cout << endl;
        c++;
        green.clear();
        blue.clear();
        cin >> t >> sg >> sb;
        for(i=0;i<sg;i++){
            cin >> temp;
            green.insert(temp);
        }
        for(i=0;i<sb;i++){
            cin >> temp;
            blue.insert(temp);
        }
        while(1){
            if(green.empty()&&blue.empty()){
                cout << "green and blue died\n";
                break;
            }
            else if(green.empty()){
                cout << "blue wins\n";
                lo = blue.end();
                lo--;
                for(lo=lo;;lo--){
                    cout << *lo <<endl;
                    if(lo==blue.begin()) break;
                }
                break;
            }
            else if(blue.empty()){
                cout << "green wins\n";
                lo = green.end();
                lo--;
                for(lo=lo;;lo--){
                    cout << *lo <<endl;
                    if(lo==green.begin()) break;
                }
                break;
            }
            for(i=0;i<t;i++){
                if(green.empty()||blue.empty()) break;
                gi = green.end();
                gi--;
                bi = blue.end();
                bi--;
                b = *bi;
                g = *gi;
                green.erase(gi);
                blue.erase(bi);
                if(b>g) temb.push_back(b-g);
                if(g>b) temg.push_back(g-b);
            }
            for(i=0;i<temb.size();i++) blue.insert(temb[i]);
            for(i=0;i<temg.size();i++) green.insert(temg[i]);
            temb.clear();
            temg.clear();
        }
    }
    return 0;
}
















