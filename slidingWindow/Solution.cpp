#include <iostream>
#include <algorithm>
using namespace std;
int main(){
	ios_base:: sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin>>t;
	for(int l=0;l<t;l++){
		int n,s;
		cin>>n>>s;
		int * p=new int[n];
		for(int i=0;i<n;i++){
			cin>>p[i];
		}
		int i=0,j=0,sum=0;
		//if s==0
		if(s==0){
			sort(p,p+n);
			bool b=binary_search(p,p+n,0);
			if(b){
				cout<<lower_bound(p,p+n,0)+1<<" "<<lower_bound(p,p+n,0)+1<<"\n";
			}else{
				cout<<"-1"<<"\n";
			}
		}else{
			while(sum!=s && j<n){
			sum+=p[j];
			if(sum>s){
				while(sum>s){
					sum-=p[i];
					i++;
				}
			}
				j++;
			}
			if(sum==s){
				cout<<i+1<<" "<<j<<"\n";
			}else{
				cout<<"-1"<<"\n";
			}
		}

		
		delete [] p;
	}
	return 0;
}