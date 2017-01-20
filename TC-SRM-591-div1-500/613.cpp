// BEGIN CUT HERE

// END CUT HERE
#line 5 "PyramidSequences.cpp"
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
int gcd(int a,int b){if (!b) return a;return gcd(b,a%b);} 
class PyramidSequences
{
        public:
        long long distinctPairs(int n, int m)
        {
			n--;m--;
			int gc=gcd(n,m);
			n/=gc;m/=gc;
			return (long long)(gc-1)*n*m+((long long)(n+1)*(m+1)+1)/2;
        }
        
// BEGIN CUT HERE
	public:
	void run_test(int Case) { if ((Case == -1) || (Case == 0)) test_case_0(); if ((Case == -1) || (Case == 1)) test_case_1(); if ((Case == -1) || (Case == 2)) test_case_2(); if ((Case == -1) || (Case == 3)) test_case_3(); if ((Case == -1) || (Case == 4)) test_case_4(); }
	private:
	template <typename T> string print_array(const vector<T> &V) { ostringstream os; os << "{ "; for (typename vector<T>::const_iterator iter = V.begin(); iter != V.end(); ++iter) os << '\"' << *iter << "\","; os << " }"; return os.str(); }
	void verify_case(int Case, const long long &Expected, const long long &Received) { cerr << "Test Case #" << Case << "..."; if (Expected == Received) cerr << "PASSED" << endl; else { cerr << "FAILED" << endl; cerr << "\tExpected: \"" << Expected << '\"' << endl; cerr << "\tReceived: \"" << Received << '\"' << endl; } }
	void test_case_0() { int Arg0 = 3; int Arg1 = 4; long long Arg2 = 6LL; verify_case(0, Arg2, distinctPairs(Arg0, Arg1)); }
	void test_case_1() { int Arg0 = 3; int Arg1 = 5; long long Arg2 = 5LL; verify_case(1, Arg2, distinctPairs(Arg0, Arg1)); }
	void test_case_2() { int Arg0 = 43; int Arg1 = 76; long long Arg2 = 895LL; verify_case(2, Arg2, distinctPairs(Arg0, Arg1)); }
	void test_case_3() { int Arg0 = 2; int Arg1 = 1000000000; long long Arg2 = 1000000000LL; verify_case(3, Arg2, distinctPairs(Arg0, Arg1)); }
	void test_case_4() { int Arg0 = 100000; int Arg1 = 95555; long long Arg2 = 4777750000LL; verify_case(4, Arg2, distinctPairs(Arg0, Arg1)); }

// END CUT HERE

};

// BEGIN CUT HERE
int main()
{
        PyramidSequences ___test;
        ___test.run_test(-1);
        return 0;
}
// END CUT HERE                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                  