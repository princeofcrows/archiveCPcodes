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

struct data{
    string team;
    int p, w, gd, gs, gp, ti, ge, l;
};

map <string, int> dat2;
map <int, string> dat3;
vector <data> inf;

bool compare2(data i, data j){
    if(i.p==j.p){
        if(i.w==j.w){
            if(i.gd==j.gd){
                if(i.gs==j.gs){
                    if(i.gp==j.gp){
                        string input, input2;
                        input = i.team;
                        input2 = j.team;
                        transform(input.begin(), input.end(), input.begin(), ::toupper);
                        transform(input2.begin(), input2.end(), input2.begin(), ::toupper);
                        return (input<input2);
                    }
                    return i.gp<j.gp;
                }
                return i.gs>j.gs;
            }
            return i.gd>j.gd;
        }
        return i.w>j.w;
    }
    return i.p>j.p;
}

int main() {
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    int n, ans, temp, t, j, i, m, h, h2, m2, c, a, b, mx, k;
    cin >> t;
    getchar();
    while(t--){
        getline(cin, stgm);
        c = 0;
        cin>> n;
        getchar();
        while(n--){
            data da;
            getline(cin, str1);
            dat2[str1] = c;
            dat3[c] = str1;
            c++;
            da.team = str1;
            da.p = da.w = da.gd = da.gs = da.gp = da.ti =da.ge = da.l = 0;
            inf.push_back(da);
            //cout << da.team <<endl;
        }
        cin>> n;
        getchar();
        while(n--){
            getline(cin, str);
            //cout << str << endl;
            i=0;
            str2.clear();
            while(str[i]!='#'){
                str2+=str[i];
                i++;
            }
            a = 0;
            i++;
            while(str[i]!='@'){
                a = a*10 + (str[i]-'0');
                i++;
            }
            b = 0;
            i++;
            while(str[i]!='#'){
                b = b*10 + (str[i]-'0');
                i++;
            }
            str3.clear();
            i++;
            while(i!=str.length()){
                str3+=str[i];
                i++;
            }
            inf[dat2[str2]].gp+=1;
            inf[dat2[str2]].gs+=a;
            inf[dat2[str2]].ge+=b;
            inf[dat2[str2]].gd+=(a-b);

            inf[dat2[str3]].gp+=1;
            inf[dat2[str3]].gs+=b;
            inf[dat2[str3]].ge+=a;
            inf[dat2[str3]].gd+=(b-a);

            if(a>b){
                inf[dat2[str2]].w+=1;
                inf[dat2[str2]].p+=3;
                inf[dat2[str3]].l+=1;
            }
            else if(a<b){
                inf[dat2[str3]].w+=1;
                inf[dat2[str3]].p+=3;
                inf[dat2[str2]].l+=1;
            }
            else if(a==b){
                inf[dat2[str3]].ti+=1;
                inf[dat2[str2]].ti+=1;
                inf[dat2[str2]].p+=1;
                inf[dat2[str3]].p+=1;
            }
        }
        sort(inf.begin(), inf.end(), compare2);
        i = 1;
        cout << stgm <<endl;
        for(j=0;j<inf.size();j++){
            cout << i++ <<") ";
            cout << inf[j].team <<" ";
            cout << inf[j].p << "p, ";
            cout << inf[j].gp << "g ";
            printf("(%d-%d-%d), ", inf[j].w, inf[j].ti, inf[j].l);
            cout << inf[j].gd << "gd ";
            printf("(%d-%d)", inf[j].gs, inf[j].ge);
            cout << endl;
        }

        if(t>=1) cout << endl;

        inf.clear();
        dat2.clear();
        dat3.clear();
    }
    return 0;
}















