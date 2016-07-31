#include<iostream>
#include<cstdio>
int i,j,k,a,b,u,v,n,ne=1;
int min,mincost=0,cost[9][9],parent[9];
using namespace std;
class kruskal{
public : void input();
        void solution();
        void output();
        int find(int);
        int uni(int,int);
};
void kruskal::input(){
printf("\n Enter the number of nodes:");
scanf("%d",&n);
printf("\n Enter the adjacency matrix:\n");
for(i=1;i<=n;i++)
for(j=1;j<=n;j++)
{
scanf("%d",&cost[i][j]);
if(cost[i][j]==0)
cost[i][j]=999;
}
}
void kruskal :: solution(){
    int mini;
while(ne<n)
 {
  for(i=1,mini=999;i<=n;i++)
   for(j=1;j<=n;j++)
    if(cost[i][j]<mini)
    {
     mini=cost[i][j];
     a=u=i;
     b=v=j;
    }
  u=find(u);
  v=find(v);
  if(uni(u,v))
  {
   printf("\n%d edge (%d,%d) =%d\n",ne++,a,b,mini);
   mincost +=mini;
  }
  cost[a][b]=cost[b][a]=999;
 }
}
int kruskal::find(int i)
{
 while(parent[i])
  i=parent[i];
 return i;
}
int kruskal::uni(int i,int j)
{
 if(i!=j)
 {
  parent[j]=i;
  return 1;
 }
 return 0;
}
void kruskal :: output(){
 printf("\n\tMinimum cost = %d\n",mincost);
}
int main()
{
kruskal p;
p.input();
p.solution();
p.output();
return 0;
}

