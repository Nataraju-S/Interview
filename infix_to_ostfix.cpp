#include<bits/stdc++.h>
#define ll long long int
#define ull unsigned long long
#define pf printf("%d\n",n)
#define pra printf("%lld ",a[i])
#define fl for(i=0;i<n;i++)
#define nl printf("\n")
#define prs printf("%s\n",s)
#define pc printf("%ld\n",count)
#define sf scanf("%lld",&n)
#define SORT sort(a,a+n)
using namespace std;
int t,i,j,c,d;
ll n;
int main()
{
scanf("%d",&t);
while(t--)
{
char exp[400],op[400];
cin>>exp;
int i=0,count=0;
while(exp[i]!='\0')
{

    if(isalpha(exp[i])){
        cout<<exp[i];
    }
    else if(exp[i]=='('){

            }else if(exp[i]==')'){
            count--;
            cout<<op[count];
            }else{
            op[count]=exp[i];
            count++;
            }
            i++;
    }
    cout<<endl;
}

    return 0;
}