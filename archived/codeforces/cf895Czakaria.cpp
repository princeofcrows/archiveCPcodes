/*-------property of the half blood prince-----*/

#include <bits/stdc++.h>
#include <dirent.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#include <ext/pb_ds/detail/standard_policies.hpp>
#define MIN(X,Y) X<Y?X:Y
#define MAX(X,Y) X>Y?X:Y
#define ISNUM(a) ('0'<=(a) && (a)<='9')
#define ISCAP(a) ('A'<=(a) && (a)<='Z')
#define ISSML(a) ('a'<=(a) && (a)<='z')
#define ISALP(a) (ISCAP(a) || ISSML(a))
#define MXX 10000000000
#define MNN -MXX
#define ISVALID(X,Y,N,M) ((X)>=1 && (X)<=(N) && (Y)>=1 && (Y)<=(M))
#define LLI long long int
#define VI vector<int>
#define VLLI vector<long long int>
#define MII map<int,int>
#define SI set<int>
#define PB push_back
#define MSI map<string,int>
#define PII pair<int,int>
#define PLLI pair<LLI,LLI>
#define PDD pair<double,double>
#define FREP(i,I,N) for(int (i)=(int)(I);(i)<=(int)(N);(i)++)
#define eps 0.0000000001
#define RFREP(i,N,I) for(int (i)=(int)(N);(i)>=(int)(I);(i)--)
#define SORTV(VEC) sort(VEC.begin(),VEC.end())
#define SORTVCMP(VEC,cmp) sort(VEC.begin(),VEC.end(),cmp)
#define REVV(VEC) reverse(VEC.begin(),VEC.end())
#define INRANGED(val,l,r) (((l)<(val) || fabs((val)-(l))<eps) && ((val)<(r) || fabs((val)-(r))<eps))
#define INRANGEI(val,l,r) ((val)>=(l) && (val)<=(r))
#define MSET(a,b) memset(a,b,sizeof(a))
#define MDD 1000000007
using namespace std;
using namespace __gnu_pbds;

//int dx[]={1,0,-1,0};int dy[]={0,1,0,-1}; //4 Direction
//int dx[]={1,1,0,-1,-1,-1,0,1};int dy[]={0,1,1,1,0,-1,-1,-1};//8 direction
//int dx[]={2,1,-1,-2,-2,-1,1,2};int dy[]={1,2,2,1,-1,-2,-2,-1};//Knight Direction
//int dx[]={2,1,-1,-2,-1,1};int dy[]={0,1,1,0,-1,-1}; //Hexagonal Direction


//typedef tree < int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update > ordered_set;

int dp[100005][2050][2];

int ps[19]={2,3,5,7,11,13,17,19,23,29,31,37,41,43,47,53,59,61,67};

int arr[100005];
int primepow[100005][19];

void init(){
    MSET(dp,-1);
}

bool isset(int mask, int idx){return (mask&(1<<idx));}

int setbit(int mask, int idx){return (mask|(1<<idx));}
int resetbit(int mask, int idx){return (mask&(~(1<<idx)));}

int solve(int idx, int mask, int least, int n){
    if(idx>n){
        if(mask==0 && least)return 1;
        else return 0;
    }

    if(dp[idx][mask][least]!=-1)return dp[idx][mask][least];

    int ret1 = solve(idx+1,mask,least,n)%MDD;

    FREP(j,0,10){
        int curbit = isset(mask,idx)?1:0;
        int nxtbit = (curbit+(primepow[idx][j]%2))%2;
        if(nxtbit==1)mask = setbit(mask,j);
        else mask = resetbit(mask,j);
    }

    int ret2 = solve(idx+1,mask,1,n)%MDD;

    return dp[idx][mask][least] = (ret1+ret2)%MDD;

}

int main(){
    int n;
    scanf("%d",&n);

    FREP(i,1,n)scanf("%d",&arr[i]);

    FREP(j,0,18){
        FREP(i,1,n){
            int cc = 0;
            while((arr[i]%ps[j])==0){
                cc++;
                arr[i]/=ps[j];
            }
            primepow[i][j]=cc;
        }
    }

    init();

    int ans = solve(1,0,0,n);

    printf("%d\n",ans);

}

