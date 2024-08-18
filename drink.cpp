#include<iostream>
#include<algorithm>
using namespace std;

int main(){
	int n,k,l,c,d,p,nl,np;
	cin >> n >> k >> l >> c >> d >> p >> nl >> np;

	int total_drink = k*l;
	total_drink = total_drink / nl;
	int slices = c*d;
	int salt = p/np;

	int ans = min(min(total_drink, slices), salt);
	cout << ans/n << endl;



	return 0;
}