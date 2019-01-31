#include <iostream>
#include <string>
#include <fstream>
using namespace std;

void menu();
void uber();
void dreamworks();
void paris();
void count();
void countMoney();
void countPolitics();
void search();
void Dog();
void Barcelona();
void countFootball();

int main() {

	menu();

	system("pause");

	return 0;

}

void menu() {
	int num;
	cout << "\nEnter the corresponding number" << endl;
	cout << "----------------------------" << endl;
	cout << "Search by word:" << endl;
	cout << "1. Uber \n2. Dreamworks \n3. Paris \n4. Dog \n5. Barcelona" << endl;
	cout << "----------------------------" << endl;
	cout << "Count tweets containg word:" << endl;
	cout << "6. Money \n7. Politics \n8. Football" << endl;
	cout << "----------------------------" << endl;
	cout << "9. Count Total number of tweets" << endl;
	cout << "----------------------------" << endl;
	cout << "10. Custom search" << endl;
	
	cin >> num;
	if (num == 1) {
		uber();
	}
	else if (num == 2) {
		dreamworks();
	}
	else if (num == 3) {
		paris();
	}
	else if (num == 4) {
		Dog();
	}
	else if (num == 5) {
		Barcelona();
	}
	else if (num == 6) {
		countMoney();
	}
	else if (num == 7) {
		countPolitics();
	}
	else if (num == 8) {
		countFootball();
	}
	else if (num == 9) {
		count();
	}
	else if (num == 10) {
		search();
	}
	else {
		cout << "\nInput not recognized - Please try again" << endl;
		menu();
	}

}

void search() {
	string any;
	string myData;
	ifstream inFile;
	int count = 0;
	string back;
	inFile.open("sampleTweets.csv");

	if (inFile.good()) {
		cout << "Enter your search query" << endl;
		cin >> any;
		while (!inFile.eof()) {
			getline(inFile, myData);
			if (myData.find(any) <= myData.length()) {
				cout << myData << endl;
				count++;
			}
		}


		inFile.close();
		cout << "Do you want to search again?" << endl;
		cin >> back;
		if (back == "YES" | back == "yes" | back == "Yes") {
			menu();
		}
		else {
			cout << "Thank you for using this API see you soon" << endl;
		}


	}
	else {
		cout << "Error reading file" << endl;
	}
}

void countPolitics() {

	string myData;
	ifstream inFile;
	int count = 0;
	string back;
	inFile.open("sampleTweets.csv");

	if (inFile.good()) {
		while (!inFile.eof()) {
			getline(inFile, myData);
			if (myData.find("politics") <= myData.length()) {
				cout << myData << endl;
				count++;
			}
		}
		cout << "There are " << count << " tweets which mention the word money" << endl;

		inFile.close();
		cout << "Do you want to search again?" << endl;
		cin >> back;
		if (back == "YES" | back == "yes" | back == "Yes") {
			menu();
		}
		else {
			cout << "Thank you for using this API see you soon" << endl;
		}


	}
	else {
		cout << "Error reading file" << endl;
	}

}

void countMoney() {

	string myData;
	ifstream inFile;
	int count = 0;
	string back;
	inFile.open("sampleTweets.csv");

	if (inFile.good()) {
		while (!inFile.eof()) {
			getline(inFile, myData);
			if (myData.find("money") <= myData.length()) {
				cout << myData << endl;
				count++;
			}
		}
		cout << "There are " << count << " tweets which mention the word money" << endl;

		inFile.close();
		cout << "Do you want to search again?" << endl;
		cin >> back;
		if (back == "YES" | back == "yes" | back == "Yes") {
			menu();
		}
		else {
			cout << "Thank you for using this API see you soon" << endl;
		}


	}
	else {
		cout << "Error reading file" << endl;
	}

}
void countFootball() {

	string myData;
	ifstream inFile;
	int count = 0;
	string back;
	inFile.open("sampleTweets.csv");

	if (inFile.good()) {
		while (!inFile.eof()) {
			getline(inFile, myData);
			if (myData.find("football") <= myData.length()) {
				cout << myData << endl;
				count++;
			}
		}
		cout << "There are " << count << " tweets which mention the word football" << endl;

		inFile.close();
		cout << "Do you want to search again?" << endl;
		cin >> back;
		if (back == "YES" | back == "yes" | back == "Yes") {
			menu();
		}
		else {
			cout << "Thank you for using this API see you soon" << endl;
		}


	}
	else {
		cout << "Error reading file" << endl;
	}

}

void count() {

	string myData;
	ifstream inFile;
	int count = 0;
	inFile.open("sampleTweets.csv");
	string back;

	if (inFile.good()) {
		cout << "File ready for reading" << endl;
		while (!inFile.eof()) {
			getline(inFile, myData);
			cout << myData << endl;
			count++;
		}

		cout << "There are " << count << " tweets in total" << endl;
		

		inFile.close();
		cout << "Do you want to search again?" << endl;
		cin >> back;
		if (back == "YES" | back == "yes" | back == "Yes") {
			menu();
		}
		else {
			cout << "Thank you for using this API see you soon" << endl;
		}

	}
	else {
		cout << "Error reading file" << endl;
	}
}

void paris() {
	string myData;
	ifstream inFile;
	int count = 0;
	string back;
	inFile.open("sampleTweets.csv");

	if (inFile.good()) {
		while (!inFile.eof()) {
			getline(inFile, myData);
			if (myData.find("Paris") <= myData.length()) {
				cout << myData << endl;
				count++;
			}
		}


		inFile.close();
		cout << "Do you want to search again?" << endl;
		cin >> back;
		if (back == "YES" | back == "yes" | back == "Yes") {
			menu();
		}
		else {
			cout << "Thank you for using this API see you soon" << endl;
		}


	}
	else {
		cout << "Error reading file" << endl;
	}
}

void dreamworks() {
	string myData;
	ifstream inFile;
	int count = 0;
	string back;
	inFile.open("sampleTweets.csv");

	if (inFile.good()) {
		while (!inFile.eof()) {
			getline(inFile, myData);
			if (myData.find("Dreamworks") <= myData.length()) {
				cout << myData << endl;
				count++;
			}
		}


		inFile.close();
		cout << "Do you want to search again?" << endl;
		cin >> back;
		if (back == "YES" | back == "yes" | back == "Yes") {
			menu();
		}
		else {
			cout << "Thank you for using this API see you soon" << endl;
		}


	}
	else {
		cout << "Error reading file" << endl;
	}
}

void uber() {
	string myData;
	ifstream inFile;
	int count = 0;
	string back;
	inFile.open("sampleTweets.csv");

	if (inFile.good()) {
		while (!inFile.eof()) {
			getline(inFile, myData);
			if (myData.find("Uber") <= myData.length()) {
				cout << myData << endl;
				count++;
			}
		}


		inFile.close();
		cout << "Do you want to search again?" << endl;
		cin >> back;
		if (back == "YES" | back == "yes" | back == "Yes") {
			menu();
		}
		else {
			cout << "Thank you for using this API see you soon" << endl;
		}

		
	}
	else {
		cout << "Error reading file" << endl;
	}
}

void Dog() {
	string myData;
	ifstream inFile;
	int count = 0;
	string back;
	inFile.open("sampleTweets.csv");

	if (inFile.good()) {
		while (!inFile.eof()) {
			getline(inFile, myData);
			if (myData.find("Dog") <= myData.length()) {
				cout << myData << endl;
				count++;
			}
		}


		inFile.close();
		cout << "Do you want to search again?" << endl;
		cin >> back;
		if (back == "YES" | back == "yes" | back == "Yes") {
			menu();
		}
		else {
			cout << "Thank you for using this API see you soon" << endl;
		}


	}
	else {
		cout << "Error reading file" << endl;
	}
}

void Barcelona() {
	string myData;
	ifstream inFile;
	int count = 0;
	string back;
	inFile.open("sampleTweets.csv");

	if (inFile.good()) {
		while (!inFile.eof()) {
			getline(inFile, myData);
			if (myData.find("Barcelona") <= myData.length()) {
				cout << myData << endl;
				count++;
			}
		}


		inFile.close();
		cout << "Do you want to search again?" << endl;
		cin >> back;
		if (back == "YES" | back == "yes" | back == "Yes") {
			menu();
		}
		else {
			cout << "Thank you for using this API see you soon" << endl;
		}


	}
	else {
		cout << "Error reading file" << endl;
	}
}





