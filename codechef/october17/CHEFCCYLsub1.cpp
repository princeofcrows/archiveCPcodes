//munni badnam hui
//darling tere liye

#include <bits/stdc++.h>

using namespace std;
#define s2 second
#define f1 first

vector <int> g[100005];
vector < pair <int, int> > dis[100005][3][3];
vector <int> x;
vector < pair <int, int> > y[3];
vector <int> z;
int ara[100005][3];

void cl(){
    x.clear();
    z.clear();
    y[1].clear();
    y[2].clear();
    for(int i=0;i<100002;i++){
        g[i].clear();
        dis[i][1][1].clear();
        dis[i][1][2].clear();
        dis[i][2][1].clear();
        dis[i][2][2].clear();
    }
}

int main(){
    //freopen("in.txt", "r", stdin);
    int t, c1, c2, v1, v2, n, q, i, num, j, a, w, b, c, ans, d;
    scanf("%d", &t);
    while(t--){
        scanf("%d%d", &n, &q);
        for(i=1;i<=n;i++){
            scanf("%d", &num);
            for(j=0;j<num;j++){
                scanf("%d", &a);
                g[i].push_back(a);
            }
        }

        for(i=1;i<=n;i++){
            scanf("%d%d%d", &v1, &v2, &w);
            ara[i][2] = v1;
            ara[i%n+1][1] = v2;
            x.push_back(w);
        }

        for(i=1;i<=n;i++){
            dis[i][1][1].push_back({ara[i][1], 0});
            a = ara[i][1];
            d = 0;
            for(j=ara[i][1]+1;j<ara[i][1]+g[i].size();j++){
                c = j;
                if(j>g[i].size()) c = j-(int)g[i].size();
                b = a-1;
                a = c;
                dis[i][1][1].push_back({a, dis[i][1][1][d++].s2+g[i][b]});
            }
            sort(dis[i][1][1].begin(), dis[i][1][1].end());

            dis[i][1][2].push_back({ara[i][1], 0});
            d = 0;
            b = g[i].size();

            for(j=ara[i][1]-1;j>(ara[i][1]-b);j--){
                c = j;
                if(j<=0) c = j+g[i].size();
                a = c;
                dis[i][1][2].push_back({a, dis[i][1][2][d++].s2+g[i][a-1]});
            }
            sort(dis[i][1][2].begin(), dis[i][1][2].end());

            dis[i][2][1].push_back({ara[i][2], 0});
            d = 0;
            a = ara[i][2];
            for(j=ara[i][2]+1;j<ara[i][2]+g[i].size();j++){
                c = j;
                if(j>g[i].size()) c = j-(int)g[i].size();
                b = a-1;
                a = c;
                dis[i][2][1].push_back({a, dis[i][2][1][d++].s2+g[i][b]});
            }
            sort(dis[i][2][1].begin(), dis[i][2][1].end());

            dis[i][2][2].push_back({ara[i][2], 0});
            d = 0;
            a = ara[i][2];
            b = g[i].size();
            for(j=ara[i][2]-1;j>ara[i][2]-b;j--){
                c = j;
                if(j<=0) c = j+g[i].size();
                a = c;
                dis[i][2][2].push_back({a, dis[i][2][2][d++].s2+g[i][a-1]});
            }
            sort(dis[i][2][2].begin(), dis[i][2][2].end());

            /*for(j = 0;j<dis[i][2][2].size();j++){
                cout << dis[i][2][2][j].f1 <<" " << dis[i][2][2][j].s2<<endl;
            }
            cout << i << " cir\n";*/
        }
        a = 0;
        //y[1].push_back({1, min(dis[1][1][1][ara[1][2]-1].s2, dis[1][1][2][ara[1][2]-1].s2)});
        //y[2].push_back({n, min(dis[n][1][1][ara[n][2]-1].s2, dis[n][1][2][ara[n][2]-1].s2)});
        for(i=1;i<=n;i++){
            a += min(dis[i][1][1][ara[i][2]-1].s2, dis[i][1][2][ara[i][2]-1].s2)+x[i-1];
            y[1].push_back({i, a});
        }
        b = 0;
        for(i=n;i>=1;i--){
            j = i;
            if(i<=0) j+= n;
            b += min(dis[j][1][1][ara[j][2]-1].s2, dis[j][1][2][ara[j][2]-1].s2)+x[j-1];
            z.push_back(min(dis[j][1][1][ara[j][2]-1].s2, dis[j][1][2][ara[j][2]-1].s2)+x[j-1]);
            y[2].push_back({j, b});
        }
        sort(y[2].begin(), y[2].end());
        reverse(z.begin(), z.end());
        /*for(j =0;j<y[2].size();j++){
            cout << y[2][j].s2<<" "<<z[j] <<  endl;
        }*/
        while(q--){
            scanf("%d%d%d%d", &v1, &c1, &v2, &c2);
            if(c1>c2){
                swap(c1, c2);
                swap(v1, v2);
            }
            a = b = 0;
            a = x[c1-1]+y[1][c2-2].s2-y[1][c1-1].s2;
            b = x[c2-1]+y[1][c1-1].s2+y[2][c2-1].s2-z[c1-1]-z[c2-1];
            ans = a + min(dis[c1][2][1][v1-1].s2, dis[c1][2][2][v1-1].s2)+min(dis[c2][1][1][v2-1].s2, dis[c2][1][2][v2-1].s2);
            //cout << b <<"asd"<< endl;
            ans = min(b + min(dis[c1][1][1][v1-1].s2, dis[c1][1][2][v1-1].s2)+min(dis[c2][2][1][v2-1].s2, dis[c2][2][2][v2-1].s2), ans);
            //else ans = min(ans, abs(-y[2][c2-1].s2+y[2][c1-1].s2+z[2][c2-1]-z[1][0])+min(dis[c1][1][1][v1-1].s2, dis[c1][1][2][v1-1].s2)+min(dis[c2][2][1][v2-1].s2, dis[c2][2][2][v2-1].s2));
            printf("%d\n", ans);
        }
        cl();
    }
    return 0;
}








