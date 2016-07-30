#include<iostream>
#include<cstdio>
#define fi for(i=0;i<n;i++)
#define fj for(j=0;j<n;j++)
#define fv for(v=0;v<n;v++)
using namespace std;
int n,a[10][10],t[10],s[10],indegree[10],u,i,j;
void fun(){
int v,top=-1,k=0;
fi
if(indegree[i]==0)
    s[++top]=i;
while(top!=-1)
    {
    u=s[top--];
    t[k++]=u;
fv{
if(a[u][v]==1){
    indegree[v]--;
if(indegree[v]==0)
    s[++top]=v;
}
}
}cout<<"topological sequence is\n";
for(i=0;i<n;i++)
    cout<<t[i]<<" ";
cout<<endl;
}
int main(){
    int sum=0;
       cout<<"enter n\n";
    cin>>n;
    cout<<"enter matrix\n";
    fi
    fj
    cin>>a[i][j];
    fi
    {sum=0;
        fj
        sum=sum+a[j][i];
        indegree[i]=sum;
    }
    fun();
return 0;
}
