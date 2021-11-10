#include <iostream>
#include <fstream>
#include <cstdlib>
#include <iomanip>
#include <cmath>
#include <climits>
using namespace std;

//   READ ME
// This is a prototype program of a virtual library selector
// Look through the code and tell me what you think

char ans;

int outputQuestion(int& option);//Introduces program and shows menu
void introduction();//Introduction to program
void bookMenu();//outputs the menu of books to choose from
int bookSelection(int& option);//Selects Books
void file_test();//function test to see if we can put text into specific file

//main program
int main()
{
	int option;

	introduction();

	//outputs book selection
	bookSelection(option);

	return 0;
}

//Introduces program and shows menu
//IMPORTANT: Didn't really use this function, IGNORE
int outputQuestion(int& option)
{

	introduction();

	bookSelection(option);

	if (option >= 6 || option <= 0)
	{
		bookSelection(option);
	
	}

	return 0;
}

//Introduction to program
void introduction()
{
	cout << "Welcome to the Open-Source Visual Studio Virtual Library" << endl
		<< "You can choose from a selection of our books, OR " << endl
		<< "take a quiz to see which genre you would best suit your needs" << endl
		<< "Once a book is selected, we will install the book via .txt file into your computer" << endl
		<< "Enter the digit next to the book you want to read, or if you feel inclined to "
		<< "Type 16 to take the quiz!" <<
		"Enjoy!" << endl;


}

//outputs the menu of books to choose from
void bookMenu()//Outputs menu of book to choose from
{
	cout << "---------------" << endl
		<< "[1] Book 1" << endl
		<< "[2] Book 2" << endl
		<< "[3] Book 3" << endl
		<< "[4] Book 4" << endl
		<< "[5] Book 5" << endl;
}

//Selects Books
int bookSelection(int& option)
{
	//Menu
	//The purpose of this function is to be able to allow the user to choose
	//book item they want to download
	

	cout << "Which Book would you like to read?" << endl;
	bookMenu();
	cin >> option;

		switch (option)
		{
		case 1:
		{
			cout << "Book 1" << endl;
			break;
		case 2:
			cout << "Book 2" << endl;
			break;
		case 3:
			cout << "Book 3" << endl;
			break;
		case 4:
			cout << "Book 4" << endl;
			break;
		case 5:
			cout << "Book 5" << endl;
			break;
		default:
			cout << "You didn't choose any of the options, try again!" << endl;
			break;
		}

		}

	return 0;
}

//dummy test file, ignore
void file_test()
{
	cout << "test book" << endl;
}



