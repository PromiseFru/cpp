
#include <iostream>

using namespace std;

int main(){

	//answer
	int answer = 7;
	int guess_number;
	bool keep_going = true;
	int option;

	// check if guess is correct
	while(keep_going){
		//ask user to enter guess
		cout << "Guess number" << endl;
		//store guess number
		cin >> guess_number;

		if(guess_number < answer){
			cout << "ohh too low ... try again " << endl;
		}
		else if(guess_number > answer){
			cout << "ohh too high ... try again " << endl;
		}
		else if(guess_number == answer){
			cout << "Hurrey you got it!!" << endl;
			keep_going = false;
		}
		// cout << "type '0'- cancel" << endl;
		// cin >> option;
		// if(option == 0){
		// 	keep_going = false;
		// }
	}

	return 0;
}