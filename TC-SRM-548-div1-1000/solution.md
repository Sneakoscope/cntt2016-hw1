#KingdomAndCities
作者：陈俊锟 汪乐平

关键词：DP 组合数学 逆向思维
##题目简述
给出 $$n,m,k$$，求出具有 $$n$$ 个点、$$k$$ 条边、且前 $$m$$ 个点的点度恰好为 2 的无向连通图个数，答案对 $$10^9+7$$ 取模。$$n,k\le 50, m\le 2$$。

##算法一
为了方便，接下来我们用 $$E(n)$$ 表示 $$n$$ 个点的完全图的边数，即 $$E(n) = {n \choose 2}$$。

首先特判掉特殊情况，比如 $$k < n-1$$ 时无解、$$n=m$$ 时直接输出解即可。

考虑特殊情况，即 $$m=0$$ 时，我们要求出有 $$n$$ 个点、$$k$$ 条边的无向连通图个数。

直接做并不容易，我们考虑逆向思维，用所有的 $$n$$ 个点、$$k$$ 条边的无向图个数减去不连通的个数。这也是一种经典的做法。设 $$f(i, j)$$ 表示有 $$i$$ 个点、$$j$$ 条边的无向连通图个数，然后枚举点 1 所在的连通块大小 $$a$$ 和该连通块的边数 $$b$$，则容易得到转移方程 $$f(i,j) = {E(i)\choose j}-\sum_{a=1}^{i-1} {i - 1\choose i - a}\sum_{b=a-1}^{\min(E(a),k)} f(a,b){E(i-a)\choose j-b}$$ 用 $$O(n^2k^2)$$ 的时间可以递推到 $$f(n,k)$$。

如果 $$m=0$$ 问题就已经解决了。现在我们来考虑 $$m=1$$ 的情况。考虑去掉点 1 后剩余的连通块个数。这个连通块个数只能是 1 或 2（$$n=m$$ 的情况已经特判掉了，剩下超过 2 个连通块无法通过点 1 连通）。如果剩下 1 个连通块，则点 1 连出的两条边的端点可以从这 $$n-1$$ 个点中任选两个，方案数为 $$f(n-1,k-2){n-1\choose 2}$$。如果剩下 2 个连通块，那么我们可以枚举点 $$n$$ 所在的连通块的大小 $$i$$ 和边数 $$j$$，方案数为 $$\sum_{i = 1}^{n-2}i(n-1-i){n-2\choose n-1-i}\sum_{j = i-1}^{min(E(i),k-2)} f(i,j) f(n-1-i,k-2-j)$$ 这一步的时间复杂度为 $$O(nk)$$。

现在考虑 $$m=2$$。点 1 和点 2 之间可能连边也可能不连边。如果有连边，那么我们就得到了一个类似 $$m=1$$ 的子问题。如果剩下的连通块个数是 1，方案数为 $$f(n-2,k-3)(n-2)^2$$（这里的两个点是可以重复的，因为它们是从不同的点连出来的）；如果剩下的连通块个数为 2，方案数为 $$2\sum_{i=1}^{n-3}i(n-2-i){n-3\choose n-2-i}\sum_{j=i-1}^{\min(E(i),k-3)} f(i,j)f(n-2-i,k-3-j)$$ 这个式子的形式和上面是类似的，但由于这里连 1 和连 2 是不同的，因此在前面乘了一个 2。

如果点 1 和点 2 之间没有连边，那么剩下的连通块可能是 1、2 或 3 个。如果是 1 个，则方案数为 $$f(n-2,k-4){n-2\choose 2}^2$$；如果是 2 个，则可以类似前面的方法，枚举点 $$n$$ 所在的连通块大小进行计算，注意这里也有两种情况，即是只有一个点的两条出边在不同的连通块，还是两个点的出边都在不同的连通块，最终计算方案数的式子为 $$\sum_{i=1}^{n-3}{n-3\choose i-1}\left(i^2(n-2-i)^2+2i(n-2-i){i\choose 2}{n-2-i\choose 2}\right)\sum_{j=i-1}^{\min(E(i),k-4)}f(i,j)f(n-2-i,k-4-j)$$ 如果对这个式子不理解，可以看我代码里的注释。

如果是 3 个，那我们枚举前两个连通块的大小（其中假设点 $$n$$ 在第 3 个连通块），设 3 个连通块的大小分别为 $$A$$、$$B$$、$$C=n-2-A-B$$，这时候点 1 和点 2 的两条出边都必须在不同的连通块中，这里的方案数为 $$(A^2BC+AB^2C+ABC^2)=ABC(A+B+C)=(n-2)ABC$$。总的方案数为 $$\sum_{A=1}^{n-3}\sum_{B=1}^{n-3-A}{n-3\choose A+B}{A+B\choose A}AB(n-2-A-B)(n-2)\sum_{x=A-1}^{min(E(A),k-4)}\sum_{y=B-1}^{min(E(B),k-4-x)} f(A,x)f(B,y)f(n-2-A-B,k-4-x-y)$$

这样这个问题就解决完毕了。时间复杂度为 $$O(n^2k^2)$$。
