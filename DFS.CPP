/*#include<stdio.h>
#include<iostream.h>
#include<conio.h>*/
#include<bits/stdc++.h>
#define fi for(i=1;i<=n;i++)
#define fj for(j=1;j<=n;j++)
using namespace std;
int a[20][20],reach[20],n;
class name{
public : void dfs(int);
};
void name :: dfs(int v)
{
int i;
reach[v]=1;
fi
if(a[v][i] && !reach[i])
{
printf("\n %d->%d",v,i);
dfs(i);
}
}
int main()
{   name x;
int i,j,count=0,ss;
printf("\n Enter number of vertices:");
scanf("%d",&n);
fi
{
reach[i]=0;
fj
a[i][j]=0;
}
printf("\n Enter the adjacency matrix:\n");
fi
fj
scanf("%d",&a[i][j]);
/*printf("enter source\n");
scanf("%d",&ss);
*/
x.dfs(1);
fi
{
if(reach[i])
count++;
}
if(count==n)
printf("\n Graph is connected");
else
printf("\n Graph is not connected");
return 0;}
