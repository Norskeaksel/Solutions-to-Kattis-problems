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

int main() {
#if defined _MSC_VER 
	freopen("Text.txt", "r", stdin);//read all input form this local file 
#endif
	int r[10] = { 20, 40, 60, 80, 100, 120, 140, 160, 180, 200 };
	int t;
	cin >> t;
	while (t--){
		int n,score=0;
		cin >> n;
		fori(n){
			int x, y,p=-1;
			cin >> x >> y;
			double rad = sqrt(x*x + y * y);
			//cout << "rad=" << rad<<endl;
			forj(10){
				if (rad <= r[j]){
					p = j;
					break;
				}
			}
			if (p != -1)
				score += 10 - p;
			//cout << "score=" << score << endl;
		}
		cout << score << endl;
	}
}