#include<iostream>
#include<cstring>
#include<cstdlib>
using namespace std;
char converted[1000];
int checkifjava(char *str,int length)
{
	if(str[0]<'a' || str[0]=='_')
		return 0;
	for(int i=1;i<length;i++)
	{
		if(!isalpha(str[i]))	//for _ 
			return 0;
	}
	return 1;
}
int checkifc(char *str,int length)
{
	if(str[0]=='_' || str[length-1]=='_')	
		return 0;
	for(int i=0;i<length;i++)
	{	if(str[i]=='_') 
        { 
            if(!islower(str[i+1])) 		//all char shud be lower
				return 0; 
        } 
        else if(!islower(str[i]))
			return 0; 
	}
	return 1;
}
void converttojava(char *str,int length)
{
	int j=0;
	for(int i=0;i<length;i++)
	{
		if(str[i]=='_')
		{
			converted[j++]=toupper(str[i+1]);
			i++;
		}
		else
		converted[j++]=str[i];
	}
	converted[j++]='\0';
}
void converttoc(char *str,int length)
{
	cout<<str[0]; 
    for(int i=1;i<length;i++) 
        if(!islower(str[i])) 
            cout<<"_"<<char(tolower(str[i])); 
        else cout<<str[i]; 
    cout<<endl;
}

int main()
{
	char str[1000];
	int len,java,c;
	while(cin>>str)
	{
		len=strlen(str);
		java=checkifjava(str,len);
		c=checkifc(str,len);
		//cout<<"flag="<<java<<c<<endl;
		for(int j=0;j<1000;j++)
		converted[j]='\0';
		if(!java && !c)
			cout<<"Error!"<<endl;
		else if(java && c)
			cout<<str<<endl;
		else if(java && !c)
			converttoc(str,len);
		else
		{
			converttojava(str,len);
			cout<<converted<<endl;
		}
	}
	return 0;
}
