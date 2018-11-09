#include<iostream>
using namespace std;
int BST[10000];
int n = 1000;
int dfs(int cur)
{
    if(BST[cur] == 0)
        return 0;
    int lson = cur * 2 + 1, rson = cur * 2 + 2;
    if(BST[rson] != 0)
        dfs(rson);
    cout<<BST[cur]<<" ";
    if(BST[rson] != 0)
        dfs(lson);
    return 0;
}
void build(int n, int m)
{
    if(BST[n] == m)
        return;
    if(BST[n] == 0)
    {
        BST[n] = m;
        return;
    }
    if(m < BST[n])
    {
        build(2*n+1, m);
    }
    else
    {
        build(2*n+2, m);
    }
    return;
}
int main()
{
    build(0, 500);
    for (int i = 250; i > 2; i/=2)
    {
        for(int j = i; j < n; j += i)
            build(0, j);
    }
    for(int i = 0; i < 1000; i++)
        cout<<BST[i]<<" ";
    cout<<endl;
    dfs(0);
    return 0;
}
