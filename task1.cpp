#include<iostream>
using namespace std;
int bintree[10000];
int n = 1000;
int dfs(int cur)
{
    int lson = cur * 2 + 1, rson = cur * 2 + 2;
    int lsonl = lson * 2 + 1, lsonr = lson * 2 + 2;
    int rsonl = rson * 2 + 1, rsonr = rson * 2 + 2;//grandsons
    if (bintree[cur] % 5 == 0)
    {
        if (lsonl < n)
            cout<<bintree[lsonl]<<" ";
        if (lsonr < n)
            cout<<bintree[lsonr]<<" ";
        if (rsonl < n)
            cout<<bintree[rsonl]<<" ";
        if (rsonr < n)
            cout<<bintree[rsonr]<<" ";
    }
    if (lson < n)
        dfs(lson);
    if (rson < n)
        dfs(rson);
    return 0;
}
int main()
{
    for (int i = 0; i < n; i++)
        bintree[i] = i;
    dfs(0);
    return 0;
}
