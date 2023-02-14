#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--)
{
int s;
int num;
cin>>s;
cin>>num;
int a[s];
for(int i=0;i<s;i++)
{
cin>>a[i];

}
int index;
for(int i=0;i<s;i++)
{
if(a[i]==num)
{
index=i;
break;
}
}
cout<<"Present"<<index+1<<endl;

}
return 0;
}

