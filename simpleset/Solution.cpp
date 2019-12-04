#include <iostream>
#include <unordered_set>
using namespace std;
int main(){
	int t;
	cin>>t;
	for(int l=0;l<t;l++){
		int n;
		cin>>n;
		int * p=new int[n];
		int count=0;
		unordered_set<int> s1;
		for(int i=0;i<n;i++){
			cin>>p[i];
			s1.insert(p[i]);
		}
		for(int i=0;i<n-1;i++){
			for(int j=i+1;j<n;j++){
				if(!(s1.find(p[i]+p[j])==s1.end())){
					count++;
				}
			}
		}
		if(count==0){
			cout<<"-1"<<"\n";
		}else{
			cout<<count<<"\n";
		}
		delete [] p;
	}
	return 0;
}