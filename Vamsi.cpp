#include<iostream>
using namespace std;
#include<conio.h>
int main()
{
	int a[10],b[10],p[10],i,j,n,min=0,max,count=0,time,ptime,it;
	char pn[10];
	cout<<"Enter no of process : ";
	cin>>n;
if(n!=0)
{
	cout<<"Enter Processess Names (***only char***): ";
	for(i=0;i<n;i++)
		cin>>pn[i];
	cout<<"Enter Priyority of processess : ";
	for(i=0;i<n;i++)
		cin>>p[i];
	cout<<"Enter arrival time of processess : ";
	for(i=0;i<n;i++)
		cin>>a[i];
	cout<<"Enter burst time of processess : ";
	for(i=0;i<n;i++)
		cin>>b[i];
	

	cout<<"\nGANTCHART : \n\t";	

	for(time=0;count!=1;++time)
	{
		max=0;
		for(j=0;j<n;j++)
		{
			if(a[j]<=time && b[j]>0 && p[j]<p[max])
			{
					max=j;
			}
		}
		if(a[max]<=time)
		{
			b[max]--;
			cout<<pn[max]<<":"<<time+1<<"\t";
		}
		if(b[max]==0)
		{
			count++;
		}
	}
	
		
for(time;count<n;)
{	
	it=0;
	for(i=0;i<n;i++)
	{
		if(a[i]<=time && b[i]>0)
		{
			if(b[i]<=4)
				{
					time+=b[i];
					b[i]=0;
					count++;
				}
			else
				{
					time+=4;
					b[i]-=4;
				}
			cout<<pn[i]<<":"<<time<<"\t";
		}
		else
			it++;
		
	}
	if(it==n)
		time++;
	
}
}
		
}
