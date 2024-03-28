#include<bits/stdc++.h>
using namespace std;
int n,a[100];
void Try(int i){
	for(int j=0;j<=1;j++){
		a[i]=j;
		if(i==n){
			int check=0;
			for(int j=1;j<=n;j++){
				check+=a[j];
			}
		
			if(check%2==0){
				for(int j=1;j<=n;j++){
					cout<<a[j]<<" ";
				}
				cout<<endl;
			}
		}
		else Try(i+1);
	}
}
int main(){
	cin>>n;
	Try(1);
}