                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                              // BEGIN CUT HERE

// END CUT HERE
#line 5 "XorCards.cpp"
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
long long a[62],ans,f[62],b[62];
int n;
class XorCards
{
        public:
        long long numberOfWays(vector<long long> vec, long long lim)
        {
			n=vec.size();
			for (int i=1;i<=n;i++) a[i]=vec[i-1];
			for (int i=1;i<=50;i++)
			{
				b[i]=(lim&1);
				lim>>=1;
			}
			for (int i=50;i>=1;i--) if (b[i]) guass(i);
			guass(0);
			return ans;
        }
        void guass(int p)
        {
        	for (int i=50;i>p;i--)
        	{
        		f[50-i+1]=0;long long u=1ll<<(i-1);
        		for (int j=1;j<=n;j++)
        		{
        			f[50-i+1]<<=1;
        			if (a[j]&u) f[50-i+1]|=1;
        		}
        		f[50-i+1]<<=1;f[50-i+1]|=b[i];
        	}
        	if (p)
        	{
        		f[50-p+1]=0;long long u=1ll<<(p-1);
        		for (int j=1;j<=n;j++)
        		{
        			f[50-p+1]<<=1;
        			if (a[j]&u) f[50-p+1]|=1;
        		}
        		f[50-p+1]<<=1;
        	}
        	else p=1;
        	int lst=1;
        	for (int i=n;i>=1;i--)
        	{
        		long long u=1ll<<i;
        		for (int j=lst;j<=50-p+1;j++)
        		if (f[j]&u)
        		{
        			swap(f[j],f[lst]);break;
        		}
        		if (f[lst]&u)
        		{
        			for (int j=1;j<=50-p+1;j++)
        				if ((f[j]&u)&&(j!=lst)) f[j]^=f[lst];
        			lst++;
        		}
        	}
        	for (int i=1;i<=50-p+1;i++) if (f[i]==1) return;
        	
			ans+=1ll<<(n-lst+1);
        }
// BEGIN CUT HERE
	public:
	void run_test(int Case) { if ((Case == -1) || (Case == 0)) test_case_0(); if ((Case == -1) || (Case == 1)) test_case_1(); if ((Case == -1) || (Case == 2)) test_case_2(); if ((Case == -1) || (Case == 3)) test_case_3(); if ((Case == -1) || (Case == 4)) test_case_4(); if ((Case == -1) || (Case == 5)) test_case_5(); }
	private:
	template <typename T> string print_array(const vector<T> &V) { ostringstream os; os << "{ "; for (typename vector<T>::const_iterator iter = V.begin(); iter != V.end(); ++iter) os << '\"' << *iter << "\","; os << " }"; return os.str(); }
	void verify_case(int Case, const long long &Expected, const long long &Received) { cerr << "Test Case #" << Case << "..."; if (Expected == Received) cerr << "PASSED" << endl; else { cerr << "FAILED" << endl; cerr << "\tExpected: \"" << Expected << '\"' << endl; cerr << "\tReceived: \"" << Received << '\"' << endl; } }
	void test_case_0() { long Arr0[] = {1,2}; vector<long long> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); long long Arg1 = 2LL; long long Arg2 = 3LL; verify_case(0, Arg2, numberOfWays(Arg0, Arg1)); }
	void test_case_1() { long Arr0[] = {5,5}; vector<long long> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); long long Arg1 = 3LL; long long Arg2 = 2LL; verify_case(1, Arg2, numberOfWays(Arg0, Arg1)); }
	void test_case_2() { long Arr0[] = {1,2,3,4,5,6,7}; vector<long long> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); long long Arg1 = 5LL; long long Arg2 = 96LL; verify_case(2, Arg2, numberOfWays(Arg0, Arg1)); }
	void test_case_3() { long Arr0[] = {123, 456, 789, 147, 258, 369, 159, 357}; vector<long long> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); long long Arg1 = 500LL; long long Arg2 = 125LL; verify_case(3, Arg2, numberOfWays(Arg0, Arg1)); }
	void test_case_4() { long Arr0[] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}; vector<long long> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); long long Arg1 = 1000000000000000LL; long long Arg2 = 4294967296LL; verify_case(4, Arg2, numberOfWays(Arg0, Arg1)); }
	void test_case_5() { long Arr0[] = {1000000000000000, 999999999999999}; vector<long long> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); long long Arg1 = 65535LL; long long Arg2 = 2LL; verify_case(5, Arg2, numberOfWays(Arg0, Arg1)); }

// END CUT HERE

};

// BEGIN CUT HERE
int main()
{
        XorCards ___test;
        ___test.run_test(1);
        return 0;
}
// END CUT HERE