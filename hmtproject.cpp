//Nishant Arora
//I love KS.
#include<bits/stdc++.h>
using namespace std;
int main()
{
int a,b;
string s,code;
char ch;
while(1)
{


cout<<"Enter the Supplier Classification Code: ";
cin>>a;
cout<<"\n";
cout<<"Enter the Supplier Name: ";
code="";
cin>>s;
cout<<"\n";
char c=s[0];
if((int)c>=97)c=(char)c-32;
cout<<"Enter the Counter Variable for the character "<<c<<" : ";
cin>>b;
cout<<"\n";
code+=(char)(a+48);
int x=c-65;
  int y=x%10;
  int z=x/10;
  code+=(char)(z+48);
  code+=(char)(y+48);
  y=b%10;
  z=b/10;
  code+=(char)(z+48);
  code+=(char)(y+48);
string v=code;
v[0]=(char)(((code[0]-48)*3)%10+48);
v[1]=(char)(((code[1]-48)*7)%10+48);
v[2]=(char)(((code[2]-48)*1)%10+48);
v[3]=(char)(((code[3]-48)*3)%10+48);
v[4]=(char)(((code[4]-48)*7)%10+48);
int sum=0;
for(int i=0;i<v.length();i++)sum+=v[i]-48;
sum%=10;
code+=(char)(sum+48);
//cout<<v<<"\n";
//cout<<v.length()<<"\n";
cout<<"The Supplier Code for the entered entry is : "<<code<<"\n"<<"\n";
cout<<"Do you want to generate the code for a new entry ? Enter Y or N : ";
cin>>ch;
cout<<"\n";
if(ch=='N')
{
    cout<<"Goodbye Human !"<<"\n";
    break;
}
}
}
