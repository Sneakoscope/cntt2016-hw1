#include <bits/stdc++.h>

using namespace std;

const int MAXN = 110 ; 

int a[MAXN], id = 0 ;  
class EelAndRabbit {
		public:
				int getmax(vector<int> l, vector<int> t) {
						const int n = l.size();
						for (int i = 0; i < n; i ++) a[id ++ ] = t[i], a[id ++ ] = t[i] + l[i] ; 
						int ans = 0;
						for (int i = 0; i < id; ++i) {
								int tmp = a[i];
								for (int j = 0; j < id; ++j) {
										int b = a[j] ;
										int cnt = 0;
										for (int k = 0; k < n; ++k) if ((t[k] <= tmp && tmp <= t[k] + l[k]) || (t[k] <= b && b <= t[k] + l[k])) ++cnt;
										ans = max(ans, cnt) ; 
								}
						}
						return ans ; 
				}
} sol ; 



int x1[] = {2, 4, 3, 2, 2, 1, 10} ; 
int x2[] = {2, 6, 3, 7, 0, 2, 0} ; 

vector<int> g1, g2 ; 
int main() { 

		for (int i = 0; i < 7; i ++) g1.push_back(x1[i]), g2.push_back(x2[i]) ; 
		printf("%d\n", sol.getmax(g1, g2)) ; 
}
