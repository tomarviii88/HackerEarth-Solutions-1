#include<bits/stdc++.h>
using namespace std;
struct toy{
	int price;
	int number;
};
bool compare(toy t1, toy t2)
{
	return (t1.price>t2.price);
}
int main()
{
	int n,m;
	cin>>n>>m;
	vector<toy>t;
	for(int i=0;i<n;i++)
	{
		t.push_back(toy());
		cin>>t[i].price;
		cin>>t[i].number;
	}
	sort(t.begin(),t.end(),compare);
	vector<bool>isVisited(m,false);
	long int sum=0;
	for(int i=0;i<n;i++)
	{
		if(isVisited[t[i].number-1]==false)
		{
			sum+=t[i].price;
			isVisited[t[i].number-1]=true;
		}
	}
	cout<<sum<<endl;
}
