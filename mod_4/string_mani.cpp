#include <iostream>
#include <string>

using namespace std;

int main()
{
	string name1, name2;
	int l1, l2;

	cout << "First word" << endl;
	cin >> name1;
	cout << "Second word" << endl;
	cin >> name2;

	// get word lengths
	l1 = name1.length();
	l2 = name2.length();

	// compare lengths
	if(l1 > l2){
		cout << "\'" + name1 + "\" is longer than \"" + name2 + "\'" << endl;
	}
	if(l2 > l1){
		cout << "\'" + name2 + "\" is longer than \"" + name1 + "\'" << endl;
	}
	if(l1 == l2){
		cout << "\'" + name1 + "\" is same as \"" + name2 + "\'" << endl;
	}

	return 0;
}