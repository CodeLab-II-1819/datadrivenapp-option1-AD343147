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

void menu() {
	int num;
	cout << "Enter the corresponding number" << endl;
	cout << "1. Show tweets which mention the word 'Uber' \n2. Show tweets which mention the word 'Dreamworks' \n3. Show tweets which mention the word 'Paris'" << endl; 
	cout << "4. Count total tweets \n5. Count tweets mentioning the word 'money' \n6. Count tweets mentioning the word 'Politics'"  << endl;
	cout << "7. Custom search \n8. Show tweets which mention the word 'dog' \n9. " << endl;
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
		count();
	}
	else if (num == 5) {
		countMoney();
	}
	else if (num == 6) {
		countPolitics();
	}
	else if (num == 7) {
		search();
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
			cout << "Bye" << endl;
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
			cout << "Bye" << endl;
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
			cout << "Bye" << endl;
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
			cout << "Bye" << endl;
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
			cout << "Bye" << endl;
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
			cout << "Bye" << endl;
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
			cout << "Bye" << endl;
		}

		
	}
	else {
		cout << "Error reading file" << endl;
	}
}


int main() {

	menu();

	system("pause");
	
	return 0;

}


