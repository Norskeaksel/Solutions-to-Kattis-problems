#include<iostream>
#include<string>
using namespace std;
int main() {
	string str;
	getline(cin,str);
	for (int i = 0; i < str.size(); i++) {
		if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' )
			str.erase(str.begin() + i, str.begin() + i + 2);
	}
	cout << str << endl;
}