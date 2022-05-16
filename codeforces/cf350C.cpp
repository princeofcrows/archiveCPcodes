//prince_of_crows
//revolution_for_redemption
//BUET_Mushroom

/*This is beginning to feel like the long
winded blues of the never
Barely controlled locomotive consuming the picture
and blowing the crows, the smoke

This is beginning to feel like the long
winded blues of the never
Static explosion devoted to crushing the broken
and shoving their souls to ghost

Eternalised. Objectified.
You set your sights so high.
But this is beginning to feel like
the bolt busted loose from the lever

Never mind
Death professor
Your structure's fine
My dust is better
Your victim flies so high
All to catch a bird's eye view of who's next*/

#include <bits/stdc++.h>

using namespace std;

string star[200000], str, str1;
long long ara[200005], ara2[200005], ara3[200005];
vector < pair <int, int> > ab;
vector < pair <int, int> > ab11;
vector < pair <int, int> > ab22;
vector < pair <int, int> > ab33;

long long Set(long long int N, long long int pos){return N=N | (1LL<<pos);}
long long reset(long long N,long long pos){return N= N & ~(1LL<<pos);}
bool check(long long N, long long pos){return (bool)(N & (1LL<<pos));}

bool comp(pair <int, int> i, pair <int, int> j){
    if(i.first==j.first) return (bool) (i.second<j.second);
    return i.first>j.first;
}

bool comp2(pair <int, int> i, pair <int, int> j){
    if(i.first==j.first) return (bool) (i.second>j.second);
    return i.first<j.first;

}

bool comp3(pair <int, int> i, pair <int, int> j){
    if(i.first==j.first) return (bool) (i.second>j.second);
    return i.first>j.first;

}

int main() {
    //freopen("in.txt", "r", stdin);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n, ans, temp, t, j, i, m, h, h2, m2, c, a, b, mx, d, k, l, f, r;
    scanf("%d", &n);
    c = 0;
    for(i=0;i<n;i++){
        scanf("%d%d", &a, &b);
        if(a>=0&&b>=0)ab.push_back({a, b});
        else if(a<=0&&b>=0) ab11.push_back({a, b});
        else if(a<=0&&b<=0) ab22.push_back({a, b});
        else if(a>=0&&b<=0) ab33.push_back({a, b});
        if(a==0||b==0) continue;
        c++;
    }
    sort(ab.begin(), ab.end());
    sort(ab11.begin(), ab11.end(), comp);
    sort(ab22.begin(), ab22.end(), comp3);
    sort(ab33.begin(), ab33.end(), comp2);
    ans = c*6 + (n-c)*4;
    printf("%d\n", ans);
    for(i=0;i<ab.size();i++){
        a = ab[i].first;
        b = ab[i].second;
        if(a>0) printf("1 %d R\n", a);
        else if(a<0) printf("1 %d L\n", -1*a);
        if(b>0) printf("1 %d U\n", b);
        else if(b<0) printf("1 %d D\n", -1*b);
        printf("2\n");
        if(a>0) printf("1 %d L\n", a);
        else if(a<0) printf("1 %d R\n", -1*a);
        if(b>0) printf("1 %d D\n", b);
        else if(b<0) printf("1 %d U\n", -1*b);
        printf("3\n");
    }
    for(i=0;i<ab11.size();i++){
        a = ab11[i].first;
        b = ab11[i].second;
        if(a>0) printf("1 %d R\n", a);
        else if(a<0) printf("1 %d L\n", -1*a);
        if(b>0) printf("1 %d U\n", b);
        else if(b<0) printf("1 %d D\n", -1*b);
        printf("2\n");
        if(a>0) printf("1 %d L\n", a);
        else if(a<0) printf("1 %d R\n", -1*a);
        if(b>0) printf("1 %d D\n", b);
        else if(b<0) printf("1 %d U\n", -1*b);
        printf("3\n");
    }
    for(i=0;i<ab22.size();i++){
        a = ab22[i].first;
        b = ab22[i].second;
        if(a>0) printf("1 %d R\n", a);
        else if(a<0) printf("1 %d L\n", -1*a);
        if(b>0) printf("1 %d U\n", b);
        else if(b<0) printf("1 %d D\n", -1*b);
        printf("2\n");
        if(a>0) printf("1 %d L\n", a);
        else if(a<0) printf("1 %d R\n", -1*a);
        if(b>0) printf("1 %d D\n", b);
        else if(b<0) printf("1 %d U\n", -1*b);
        printf("3\n");
    }
    for(i=0;i<ab33.size();i++){
        a = ab33[i].first;
        b = ab33[i].second;
        if(a>0) printf("1 %d R\n", a);
        else if(a<0) printf("1 %d L\n", -1*a);
        if(b>0) printf("1 %d U\n", b);
        else if(b<0) printf("1 %d D\n", -1*b);
        printf("2\n");
        if(a>0) printf("1 %d L\n", a);
        else if(a<0) printf("1 %d R\n", -1*a);
        if(b>0) printf("1 %d D\n", b);
        else if(b<0) printf("1 %d U\n", -1*b);
        printf("3\n");
    }
    return 0;
}







