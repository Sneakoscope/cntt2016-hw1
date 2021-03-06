#include <cstdio>
#include <cmath>
#include <cstring>
#include <ctime>
#include <iostream>
#include <algorithm>
#include <set>
#include <vector>
#include <sstream>
#include <queue>
#include <typeinfo>
#include <fstream>
#include <cassert>

using namespace std;
const int maxn = 52*52;
const long long  INF = 1e17;

class SkiResorts {
    public:
    int n, nodes;
    
    priority_queue<pair<long long, int> > q;
    
    long long d[maxn];
    int x[maxn], y[maxn], book[maxn], id[52][52];
    long long Dijkstra(vector<string> road, vector<int> altitude)
    {
//        for(int i=0;i<n;i++) 
//            g[0].push_back(edge(id(0, i), abs(altitude[0] - altitude[i])));
//        
        for(int i=0;i<maxn;i++) d[i] = INF , book[i] = 0;
        for(int i=0;i<n;i++) d[id[0][i]] = abs(altitude[0] - altitude[i]);
        
        for(int i=0;i<nodes;i++)
        {
            long long res = INF; int who = -1;
            for(int j=0;j<nodes;j++) if(book[j] == 0 && d[j] < res) res = d[j], who = j;
            if(who < 0) break;
            book[who] = 1;
            
            for(int j=0;j<nodes;j++) 
                if(d[j] > d[who] && road[x[who]][x[j]] == 'Y' && altitude[y[who]] >= altitude[y[j]])
                    d[j] = min(d[j], d[who] + abs(altitude[y[j]] - altitude[x[j]]));
        }
        
        long long res = INF;
        for(int i=0;i<n;i++) res = min(res, d[id[n-1][i]]);
        return res == INF ? -1 : res;
    }
        
    long long minCost(vector<string> road, vector<int> altitude) {
        n = road.size();
        nodes = n*n+1;
        for(int i=0;i<n;i++) for(int j=0;j<n;j++)
        {
            int to = i*n+j+1;
            x[to] = i;
            y[to] = j;
            id[i][j] = to;
        }
        return Dijkstra(road, altitude);
    }
};

// CUT begin
ifstream data("SkiResorts.sample");

string next_line() {
    string s;
    getline(data, s);
    return s;
}

template <typename T> void from_stream(T &t) {
    stringstream ss(next_line());
    ss >> t;
}

void from_stream(string &s) {
    s = next_line();
}

template <typename T> void from_stream(vector<T> &ts) {
    int len;
    from_stream(len);
    ts.clear();
    for (int i = 0; i < len; ++i) {
        T t;
        from_stream(t);
        ts.push_back(t);
    }
}

template <typename T>
string to_string(T t) {
    stringstream s;
    s << t;
    return s.str();
}

string to_string(string t) {
    return "\"" + t + "\"";
}

bool do_test(vector<string> road, vector<int> altitude, long long __expected) {
    time_t startClock = clock();
    SkiResorts *instance = new SkiResorts();
    long long __result = instance->minCost(road, altitude);
    double elapsed = (double)(clock() - startClock) / CLOCKS_PER_SEC;
    delete instance;

    if (__result == __expected) {
        cout << "PASSED!" << " (" << elapsed << " seconds)" << endl;
        return true;
    }
    else {
        cout << "FAILED!" << " (" << elapsed << " seconds)" << endl;
        cout << "           Expected: " << to_string(__expected) << endl;
        cout << "           Received: " << to_string(__result) << endl;
        return false;
    }
}

int run_test(bool mainProcess, const set<int> &case_set, const string command) {
    int cases = 0, passed = 0;
    while (true) {
        if (next_line().find("--") != 0)
            break;
        vector<string> road;
        from_stream(road);
        vector<int> altitude;
        from_stream(altitude);
        next_line();
        long long __answer;
        from_stream(__answer);

        cases++;
        if (case_set.size() > 0 && case_set.find(cases - 1) == case_set.end())
            continue;

        cout << "  Testcase #" << cases - 1 << " ... ";
        if ( do_test(road, altitude, __answer)) {
            passed++;
        }
    }
    if (mainProcess) {
        cout << endl << "Passed : " << passed << "/" << cases << " cases" << endl;
        int T = time(NULL) - 1477065360;
        double PT = T / 60.0, TT = 75.0;
        cout << "Time   : " << T / 60 << " minutes " << T % 60 << " secs" << endl;
        cout << "Score  : " << 450 * (0.3 + (0.7 * TT * TT) / (10.0 * PT * PT + TT * TT)) << " points" << endl;
    }
    return 0;
}

int main(int argc, char *argv[]) {
    cout.setf(ios::fixed, ios::floatfield);
    cout.precision(2);
    set<int> cases;
    bool mainProcess = true;
    for (int i = 1; i < argc; ++i) {
        if ( string(argv[i]) == "-") {
            mainProcess = false;
        } else {
            cases.insert(atoi(argv[i]));
        }
    }
    if (mainProcess) {
        cout << "SkiResorts (450 Points)" << endl << endl;
    }
    return run_test(mainProcess, cases, argv[0]);
}
// CUT end
