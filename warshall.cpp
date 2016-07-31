#include<bits/stdc++.h>
/*#include<cstdio>
#include<iostream>
*/
#define fi for(i=0;i<n;i++)
#define fj for(j=0;j<n;j++)
#define fk for(k=0;k<n;k++)
int ma(int a, int b)
{
    return a>b?a:b;
}
int main()
{int n,i,j,k,a[10][10];
 scanf("%d",&n);
fi
fj
scanf("%d",&a[i][j]);
fk
fi
fj
if(a[i][k]==1 &&a[k][j]==1)
    a[i][j]=1;

//a[i][j]=ma(a[i][j],a[i][k]&&a[k][j]);
fi{
fj
printf("%d ",a[i][j]);
printf("\n");
}
}
