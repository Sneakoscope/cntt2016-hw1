// BEGIN CUT HERE

// END CUT HERE
#line 5 "ColorfulWolves.cpp"
#include <cstdlib>
#include <cctype>
#include <cstring>
#include <cstdio>
#include <cmath>
#include <algorithm>
#include <vector>
#include <string>
#include <iostream>
#include <sstream>
#include <map>
#include <set>
#include <queue>
#include <stack>
#include <fstream>
#include <numeric>
#include <iomanip>
#include <bitset>
#include <list>
#include <stdexcept>
#include <functional>
#include <utility>
#include <ctime>
using namespace std;
vector <int> des[210],len[210];
int dis[210];
bool ins[210];
int cop[200010];
void getin(int c,int d,int s)
{
	des[c].push_back(d);
	len[c].push_back(s);
}
class ColorfulWolves
{
        public:
        int getmin(vector <string> mp)
        {
			int n=mp.size();
			for (int i=0;i<n;i++)
			{
				int js=0;
				for (int j=0;j<n;j++) if (mp[i][j]=='Y')
				{
					getin(i+1,j+1,js);
					js++;
				}
			}
			memset(dis,127/3,sizeof(dis));dis[1]=0;
			int head=1,tail=0;cop[head]=1;ins[1]=true;
			while (head!=tail)
			{
				int s=cop[++tail];ins[s]=false;
				for (int k=0;k<des[s].size();k++)
				{
					if (dis[des[s][k]]>dis[s]+len[s][k])
					{
						dis[des[s][k]]=dis[s]+len[s][k];
						if (!ins[des[s][k]])
						{
							ins[des[s][k]]=true;
							cop[++head]=des[s][k];
						}
					}
				}
			}
			if (dis[n]<700000000) return dis[n];else return -1;
        }
        
// BEGIN CUT HERE
	public:
	void run_test(int Case) { if ((Case == -1) || (Case == 0)) test_case_0(); if ((Case == -1) || (Case == 1)) test_case_1(); if ((Case == -1) || (Case == 2)) test_case_2(); if ((Case == -1) || (Case == 3)) test_case_3(); if ((Case == -1) || (Case == 4)) test_case_4(); }
	private:
	template <typename T> string print_array(const vector<T> &V) { ostringstream os; os << "{ "; for (typename vector<T>::const_iterator iter = V.begin(); iter != V.end(); ++iter) os << '\"' << *iter << "\","; os << " }"; return os.str(); }
	void verify_case(int Case, const int &Expected, const int &Received) { cerr << "Test Case #" << Case << "..."; if (Expected == Received) cerr << "PASSED" << endl; else { cerr << "FAILED" << endl; cerr << "\tExpected: \"" << Expected << '\"' << endl; cerr << "\tReceived: \"" << Received << '\"' << endl; } }
	void test_case_0() { string Arr0[] = {"NYN","YNY","NNN"}; vector <string> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arg1 = 1; verify_case(0, Arg1, getmin(Arg0)); }
	void test_case_1() { string Arr0[] = {"NNNNNNNY","NNNNYYYY","YNNNNYYN","NNNNNYYY","YYYNNNNN","YNYNYNYN","NYNYNYNY","YYYYYYYN"}; vector <string> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arg1 = 0; verify_case(1, Arg1, getmin(Arg0)); }
	void test_case_2() { string Arr0[] = {"NYYYYN","YNYYYN","YYNYYN","YYYNYN","YYYYNN","YYYYYN"}; vector <string> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arg1 = -1; verify_case(2, Arg1, getmin(Arg0)); }
	void test_case_3() { string Arr0[] = {
"NYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY",
"YNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY",
"YYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY",
"YYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY",
"YYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY",
"YYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY",
"YYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY",
"YYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY",
"YYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY",
"YYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY",
"YYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY",
"YYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY",
"YYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY",
"YYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY",
"YYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY",
"YYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY",
"YYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY",
"YYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY",
"YYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY",
"YYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY",
"YYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYY",
"YYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYY",
"YYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYY",
"YYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYY",
"YYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYY",
"YYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYY",
"YYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYY",
"YYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYY",
"YYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYY",
"YYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYY",
"YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYY",
"YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYY",
"YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYY",
"YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYY",
"YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYY",
"YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYY",
"YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYY",
"YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYY",
"YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYY",
"YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYY",
"YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYY",
"YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYY",
"YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYY",
"YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYY",
"YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYY",
"YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYY",
"YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYY",
"YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYY",
"YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNY",
"YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYN"
}; vector <string> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arg1 = 48; verify_case(3, Arg1, getmin(Arg0)); }
	void test_case_4() { string Arr0[] = {
"NYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY",
"YNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY",
"YYNYYYYYYYYYNNNNNYYYYYYNNNNNYYYYYNNYYYNNYYYYYYYYYY",
"YYYNYYYYYYYNYYYYYYYYYYYNYYYYNYYYYNYNYNYNYYYYYYYYYY",
"YNNNNYYYYYYNYYYYYYYYYYYNYYYYNYYYYNYNYNYNYYYYYYYYYY",
"YYYYYNYYYYYYNNNNNYYYYYYNNNNNYYYYYNYYNYYNYYYYYYYYYY",
"YYYYNNNNNYYYYYYYYNYYYYYNYYYNYYYYYNYYNYYNYYYYYYYYYY",
"YYYYYYYNYYYYYYYYYNYYYYYNYYYYNYYYYNYYYYYNYYYYYYYYYY",
"YYYYYYYYNYYYNNNNNYYYYYYNYYYYNYYYYNYYYYYNYYYYYYNYYY",
"YYNNNYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYY",
"YYYYYYYYYYNYYNNNNNNNNYYYYYYYYNNNNNNYYYYYYYYYNNYYYY",
"YYYYYYYYYYYNYYYYYYYYYYNNNNNNYNYYYYYYYYYYYYYYYNYYYY",
"YYYNNNNNYYYYNYYYYYYYYYYYYYYYYYYYYNNNNNYYYYYNNYYYYY",
"YYYYYYYYYYYYYNYYYYYNNNNYYYYYYNNNNNYYYYYNNNNYYYYYYY",
"YYYYNNNNYYYYYYNYYYYYYYYYYYYYYYYYYYNNNNNYYYYYYYYYYY",
"YYYYYYYYYYYYYYYNYYNNNNNNNNNYYYYYYYYYYYYYYYYYYYYYYY",
"YYNNNNNNYYYYYYYYNYYYYYYYYYYYNNNNYYYYYYYYYYNNNNNYYY",
"YYNYYYYYNNNYYYYYYNYYYYYYNNNNNNNNNYYYYYYYYYYYYYYYYY",
"YYYYNYYYYYYYNNNYYYNYYYYYYYYYYYYYNNNNNNYYYYYYYYYYYY",
"YYYYYYNYYYNNNNYYYYYNYYYYYYYYYYYYYYYYYNNNNNYYYYYYYY",
"NNNNNYYYYYYYNYYYYYYYNYYYYYYYYYYYNNNNNNNNYYYYYYYYYY",
"YYYYYYYYYYYYYNNNNYYYYNYYYNNNNYYYYYYYYYYYYNNNNNNYYY",
"YYYYNNNYYYYNNNNYYYYYYYNYYYYYYYYYYYYYNNNNNNYYYYYYYY",
"YYYYYYYYYYYYYYYYYYYYYYYNYYYNNNYYYYNNNNYYYYYYYYYYYY",
"YYYYYYYYYNNNNNYYYYYYYYYYNYYYYYNNNNYYYYYYYYYYYYYYYY",
"YYYNNNNYYYYYYYYYYYYYYYYYYNYYYYYNNNNYYYYYNNNNNYYYYY",
"YYYYYYYYYYYNNNNNYYYYYYYYYYNYYYYYYYYYYNNNNNYYYYYYYY",
"YYYNNNNNNYYYYYYNNNNNYYYYYYYNYYYYYYYYYYYYYYYYYYYYYY",
"YYYYYNNNNNYYYYYYNNNNNYYYYYYYNYYYYYYYNNNNNNYYYYYYYY",
"YYNNNNNYYYYYYYYYYYYYYYYYYYNNNNNNYYYYYYYYYYYYYNNNYY",
"YYYYNNNNNYYYYYYYYYNNNNNNNNNYYYNYYYYYYNNNNNYYYYYYYY",
"YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYNNNNNNYYYYYYYYY",
"YYYYYYYYYYYYYNNNNNNYYYYYYNNNNNNYNYYYYYYYYYNNNYYYYN",
"YYYYYNNNNNNNNYYYYYYNNNNNYYYYYYYYYNYYYYYYYYNNNNNYYY",
"YYYYYYYYYYYYYYYYYYYYYYYYNNNNYYYYYYNYYYYYYYYYYYYYYY",
"YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNNNNNNNYYYYYYYNNNNNY",
"YYYNNNNNNNNYYYNNNNNNNNYYYYNYYYYYYYYYNYYYYYYYYYYYYY",
"YYYNYYYYYYYYYYNYYYYYYYYYNNNYYYYYYYYYYNYYYYYYYYYYYY",
"YYYNYYYYYYYYYYNYYYYYYYYYYYNYYYYYYNNNNNNYYYNNNNNYYY",
"YYYNYYYYYYYYYYNYYYYYYYYYYYNYYYYYYYYYYYYNYYYYYYYYYY",
"YYYNYNNNNYYYYYNYNNNNYYYYYYNYYYYYYYYYNNNNNNYYYYYYYY",
"YYYNNYYYYNYYYYNNYYYYNYYYYYNYYYYYYYYYYYYYYNYYYYYYYY",
"YYYNYYYYYYNYYYNYYYYYYNYYYYNYYYYYYYYYYYYYYYNYYNNNNY",
"YYYYYYYYYYNYYYYYYYYYYNYYYYNYYYYYNNNNNNYYYYYNYYYYYY",
"YYYYYYYYYYNYYYYYYYYYYNYYYYNYYYYYYYYYYYNNNNNNNYYYYY",
"YYYNYYYYYNYYYYNYYYYYNYYYYYNYYYNNNNNNNNNNNNYYYNYYYY",
"YYYYNNNNNYYYYYYNNNNNYYYYNNNNNYYYNNNNNNYYYNNNNYNYYY",
"YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYY",
"YYYYNNNNYYYYNNNNNNNNNNNNYYYYYNNNNNNNNNYYYYYYYYYYNY",
"YYYYYYNYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYNYYYYYN"
}; vector <string> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arg1 = 35; verify_case(4, Arg1, getmin(Arg0)); }

// END CUT HERE

};

// BEGIN CUT HERE
int main()
{
        ColorfulWolves ___test;
        ___test.run_test(-1);
        return 0;
}
// END CUT HERE
