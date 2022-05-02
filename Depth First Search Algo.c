// This a code of Depth First search algo of Backtracking method
#include<stdio.h>
#include<stdbool.h>


//variables for graph declared here
int mat[101][101];//adjacency matrix
bool vis[101];//visited array
int n;
int e;

//stack implementation
int a[101];//this is the stack
int i = -1;
void push(int x)
{
    if (i == 100) //max size reached
    {
        return;
    }
    a[++i] = x; //insert
}
int isEmpty()
{
    return (i == -1); //if no element has been inserted yet
}
int size()
{
    return (i + 1);
}
void pop()
{
    if (isEmpty()) //underflow checking
    {
        return;
    }
    i--; //reducing index
}
int top()
{
    return a[i];
}
//dfs function
void dfs(int v)
{
    push(v);//pushing source vertex in stack
    vis[v]=1;
    while(!isEmpty())
    {
        int take=top();
        pop();
        printf("%d ",take);
        for(int adjacentVertex=1;adjacentVertex<=n;adjacentVertex++)
        {
            //push adjacent vertex if it is not visited
            if(mat[take][adjacentVertex]==1 && !vis[adjacentVertex])
            {
                push(adjacentVertex);
                vis[adjacentVertex]=1;
            }
        }
    }
}
int main()
{
    printf("Enter number of nodes,edges here : \n");
    scanf("%d",&n);
    scanf("%d",&e);
    for(int j=0;j<e;j++)
    {
        int u,v,wt;
        printf("Enter source,destination here : \n");
        scanf("%d %d",&u,&v);
        mat[u][v]=1;
        mat[v][u]=1;
    }
    printf("________________Generated DFS is_________________\n");
    for(int i=1;i<=e;i++)
    {
        if(!vis[i])
        dfs(i);
    }
    printf("\n");
}
