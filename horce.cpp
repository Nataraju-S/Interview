#include<iostream>
#include<cstring>
//#include<cconio>
#include<cstdio>
#define MAX 500
using namespace std;
int t[MAX];
void shifttable(char p[])
{
 int i,j,m;
 m=strlen(p);
 for(i=0;i<MAX;i++)
  t[i]=m;
 for(j=0;j<m-1;j++)
  t[p[j]]=m-1-j;
}
int horspool(char src[],char p[])
{
 int i,j,k,m,n;
 n=strlen(src);
 m=strlen(p);
 printf("\nLength of text=%d",n);
 printf("\n Length of pattern=%d",m);
 i=m-1;
 while(i<n)
 {
  k=0;
  while((k<m)&&(p[m-1-k]==src[i-k]))
   k++;
  if(k==m)
   return(i-m+1);
  else
   i+=t[src[i]];
 }
 return -1;
}
int main()
{
 char src[100],p[100];
 int pos;
 //clrscr();
 printf("Enter the text in which pattern is to be searched:\n");
 gets(src);
 printf("Enter the pattern to be searched:\n");
 gets(p);
 shifttable(p);
 pos=horspool(src,p);
 if(pos>=0)
  printf("\n The desired pattern was found starting from position %d",pos+1);
 else
  printf("\n The pattern was not found in the given text\n");
// getch();
}/*#include<iostream.h>
#include<time.h>
#include<string.h>
#include<stdio.h>
#include<conio.h>
#define fi for(i=0;i<n;i++)
#define fj for(j=0;j<n;j++)
void shift(char p[],int t[]){
int i,m;
m=strlen(p);
for(i=0;i<128;i++)
    t[i]=m;
for(i=0;i<=m-2;i++)
    t[p[i]-'0']=m-i-1;
}
int horspool(char p[],char t[]){
int m,n,i,k,s[256];
shift(p,s);
m=strlen(p);
n=strlen(t);
i=m-1;
while(i<=n-1){
    k=0;
    while(k<=m-1 && t[i-k]==p[m-i-k]){
	k+=1;
    }
    if(k==m) return i-m+1;
    i=i+s[t[i]-'0'];
}
return -1;
}
int main(int argc, char* argv[]){
char p[20],t[20];
int pos;
cout<<"enter string\n";
scanf("%[^\n]s",t);
cout<<"enter test string\n";
cin>>p;
pos=horspool(p,t);
if(pos==-1)cout<<"string not found";
else
    cout<<"string found at "<<pos+1;;
   getch();
return 0;}
*/
