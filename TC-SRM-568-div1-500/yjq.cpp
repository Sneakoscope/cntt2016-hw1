#include<bits/stdc++.h>
#define MOD 1000000007
using namespace std;int n;const int MAXN=110;vector<string>str;bool vis[MAXN];int use[MAXN];bool check(int now){vis[now]=1;if(now<n){bool flag=1;for(int i=0;i<n;i++)if(str[now][i]!='-'){int tmp=str[now][i]-'0'-use[now];if(tmp<0)return 0;if(use[i+n]==-1)use[i+n]=tmp,flag&=check(i+n);else if(use[i+n]!=tmp)return 0;}return flag;}else{now-=n;bool flag=1;for(int i=0;i<n;i++)if(str[i][now]!='-'){int tmp=str[i][now]-'0'-use[now+n];if(tmp<0)return 0;if(use[i]==-1)use[i]=tmp,flag&=check(i);else if(use[i]!=tmp)return 0;}return flag;}}class EqualSums{public:int count(vector<string>mp){str=mp;n=mp.size();int vis1=1,vis2=1;memset(vis,0,sizeof vis);for(int i=0;i<n;i++)if(!vis[i]){int flag1=0,flag2=0;for(int ch=0;ch<10;ch++){memset(use,255,sizeof use);use[i]=ch;if(check(i)){if(std::count(use,use+n,0)>0)flag1++;else flag2++;}}vis1=vis1*1ll*(flag1+flag2)%MOD;vis2=vis2*1ll*flag2%MOD;}return(vis1-vis2+MOD)%MOD;}}sol;int main(){vector<string>g;g.push_back("1-");g.push_back("-2");printf("%d\n",sol.count(g));}