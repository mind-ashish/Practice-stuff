#include<iostream>
#include<unordered_map>
using namespace std;
int main(){
int t;
cin>>t;
for(int l=0;l<t;l++){
	int n,s;
	cin>>n>>s;
	int * p=new int[n];
	int * q=new int[n];
	unordered_map<int,int> m1;
	int sum=0;
	for(int i=0;i<n;i++){
		cin>>p[i];
		sum+=p[i];
		m1[sum]=i+1;
		q[i]=sum;
	}
	m1[0]=0;   
	bool hold=false;
	for(int i=0;i<n;i++){
		if(!(m1.find(q[i]-s)==m1.end())){
			cout<<m1[(q[i]-s)]+1<<" "<<i+1<<"\n";
			hold=true;
			break;
		}
	}
	if(hold==false){
		cout<<"-1"<<"\n";
	}
	delete [] p;
	delete [] q;
}
return 0;
}