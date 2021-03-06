#if defined _MSC_VER //if using Visual Studio
#include "std_lib_facilities.h" //include this local header file
#include <queue>
#else
#include<bits/stdc++.h> //include this non portable headerfile 
using namespace std; //and the standard namespace
#endif
#pragma warning(disable:4996)//necessary if we want to use freopen() 

#define ll long long
#define double long double
#define dx first
#define dy second
#define forx(n) for (int x=1;x<=n;x++)
#define fory(n) for (int y=1;y<=n;y++)
#define rall(v) (v).rbegin(),(v).rend()
#define all(v) (v).begin(),(v).end()
#define fork(n) for (int k=0;k<n;k++)
#define forj(n) for (int j=0;j<n;j++)
#define fori(n) for (int i=0;i<n;i++)

ll fibMod7(ll n){
	ll* f=new ll[n + 2];
	f[0] = 0;
	f[1] = 1;
	for (ll i = 2; i <= n; i++)
		f[i] = (f[i - 1] + f[i - 2])%1000000007;
	return f[n];
}

int main() {
#if defined _MSC_VER 
	freopen("Text.txt", "r", stdin);//read all input form this local file 
#endif
	ll n;
	cin >> n;
	while (n--){
		ll a;
		cin >> a;
		cout << fibMod7(a+2) << endl;
	}
}