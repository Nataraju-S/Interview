#include <bits/stdc++.h>
using namespace std; 
int BruteForceStringMAtch(char a[50],char b[50]){
	int i,j,n,m;
	n=strlen(a);
	m=strlen(b);
	//printf("%d %d \n",n,m);
	//printf("%s %s\n",a,b );
	for ( i = 0; i <=n-m; i++)
	{//printf("%d\n",i );
		j=0;
		//printf("%c %c %d\n ",b[j],a[i+j],i);
		while(j<m && b[j]==a[i+j]){
			j++;
		}
		if (j==m){
				return i;
			}
		
	}
	return -1;
}
int main(){
   char a[50],b[50];
   int x=0;
   printf("Enter string 1\n");
   fgets(a,50,stdin);
   //scanf("%[^\n]%*c",a);
   printf("Enter string 2\n");
   scanf("%[^\n]%*c",b);
   printf("%s\n",a);
   x=BruteForceStringMAtch(a,b);
  // printf("%d\n",x );
   if (x==-1)
   {
   	printf("Hoge %d\n",x);
   }else{
   	printf("%d\n",x);
   }
   return 0;
}