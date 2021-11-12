#include <iostream>
#include <fstream>
#include <cstdlib>
#include <iomanip>
#include <cmath>
#include <climits>
using namespace std;

//   READ ME (RYAN)
// This is a prototype program of a virtual library selector
// Look through the code and tell me what you think

//	READ ME (MARIFER)
// started the file_test function and created some streams and bookFileName
// runs well if you comment out file_test and its variables



char ans;
//int outputQuestion(int& option);//Introduces program and shows menu
void introduction();//Introduction to program
void bookMenu();//outputs the menu of books to choose from
int bookSelection(int& option);//Selects books
void bookQuiz(int& option);//outputs quiz questions, stores answer from the user in quizTotal
											//and outputs a book option based on quizTotal
void file_test(string bookName, string newBookName);//function test to see if we can put text into specific file

//main program
int main()
{
	int option;
	//ifstream inStreamBook;
	//ofstream outStreamBook;

	//char bookFileName[21]; //for the stream, haven't used it

	introduction();

	//outputs book selection
	bookSelection(option);

	return 0;
}

//Introduces program and shows menu
//IMPORTANT: Didn't really use this function, IGNORE
/*
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
*/

//Introduction to program
void introduction()
{
	cout << "Welcome to the Open-Source Visual Studio Virtual Library" << endl
		<< "You can choose from a selection of our books, OR " << endl
		<< "take a quiz to see which genre would best suit your needs." << endl
		<< "Once a book is selected, we will install the book via .txt file into your computer." << endl
		<< "Enter the digit next to the book you want to read, or "
		<< "type 6 to take the quiz." <<
		"Enjoy!" << endl;


}

//outputs the menu of books to choose from
void bookMenu()//Outputs menu of book to choose from
{
	cout << "---------------" << endl
		<< "[1] Book 1: The Fault in Our Stars" << endl
		<< "[2] Book 2: Wuthering Heights" << endl
		<< "[3] Book 3: Lies We Bury" << endl
		<< "[4] Book 4: A Good Girl's Guide to Murder" << endl
		<< "[5] Book 5: Somebody's Daughter" << endl
		<< "[6] Quiz" << endl;
}
void bookQuiz(int& option) //outputs book selection based on quizTotal(quiz answer from the user)
{
	int quizTotal;//local to this function
	char ans;
	do
	{
		cout << "---------------" << endl
			<< "This short quiz will tell you which book genre best suits your needs!" << endl
			<< "Look through the options and add up the numbers next to each answer, " << endl
			<< "then enter your total." << endl
			<< "Which option do you prefer? (1) Suspense or (2) Romance" << endl
			<< "Which option do you prefer? (1) Realistic Fiction or (2) Fantasy" << endl
			<< "Which option do you prefer? (1) Breaking Bad or (2) The Office" << endl
			<< "Which option do you prefer? (1) Medium/Long Books or (2) Short books" << endl
			<< "Enter your total: " << endl;
		cin >> quizTotal;
		switch (quizTotal)
		{
		case 4:
			cout << "Your result is [3] Book 3: Lies We Bury" << endl << endl;
			break;
		case 5:
			cout << "Your result is [4] Book 4: Guide to Murder" << endl << endl;
			break;
		case 6:
			cout << "Your result is [5] Book 5: Daughter" << endl << endl;
			break;
		case 7:
			cout << "Your result is [2] Book 2: Wuthering Heights" << endl << endl;
			break;
		case 8:
			cout << "Your result is [1] Book 1: The Fault in Our Stars" << endl << endl;
			break;
		default:
			cout << "Invalid response." << endl;
			break;
		}
		cout << "Would you like to take this quiz again? Enter Y/y for Yes or any other character to return to the book menu." << endl;
		cin >> ans;
	} while ((ans == 'y') || (ans == 'Y'));
	bookSelection(option);
}
//Selects Books
int bookSelection(int& option)
{
	//Menu
	//The purpose of this function is to be able to allow the user to choose
	//book item they want to download

	string bookName;
	cout << "Which Book would you like to read?" << endl;
	bookMenu();
	cin >> option;

	switch (option)
	{
	case 1:
	{
		cout << "Book 1: The Fault in Our Stars" << endl << endl;
		bookName = "The Fault in our Stars";
		break;
	case 2:
		cout << "Book 2: Wuthering Heights" << endl << endl;
		bookName = "Wuthering Heights";
		break;
	case 3:
		cout << "Book 3: Lies We Bury" << endl << endl;
		bookName = "Lies We Bury";
		break;
	case 4:
		cout << "Book 4: A Good Girl's Guide to Murder" << endl << endl;
		bookName = "A Good Girl's Guide to Murder";
		break;
	case 5:
		cout << "Book 5: Somebody's Daughter" << endl << endl;
		bookName = "Somebody's Daughter";
		break;
	case 6:
		cout << "You selected option 6\n";
		bookQuiz(option);
		break;
	default:
		cout << "You didn't choose any of the options, try again!" << endl;
		break;
	}
	}
	return 0;

}

//dummy test file, ignore
/*Started the funciton but it's maybe half done
* asks the user if they want to save the book file under bookName
* or if they want to select a different title from the menu options
* I was thinking we declare bookName in the bookSelection function in the switch statement
* For Example:
*			case 2:
				cout << "Book 2: Wuthering Heights" << endl << endl;
				bookName = "Wuthering Heights"; (or however this is done)
				break;
*/


void file_test( string bookName, string newBookName)
{
	ifstream inStreamBook;
	ofstream outStreamBook;

	cout << "Enter book name" << endl;
	cin >> bookName;

	char ans;
	cout << "Based on your book selection, the file for your book is called "
		<< bookName << ".txt" << endl
		<< "You can save it under the same name, or change the file name. " << endl
		<< "Would you like to keep the same file name or change it? " << endl
		<< "Press y/Y to change it or n/N to keep it the same" << endl;
	cin >> ans;
	if ((ans == 'y') || (ans == 'Y'))
	{
		cout << "What file name would you like to save your book under?" << endl
			<< "Select one from the following menu. " << endl
			<< "Type file name menu here";
		cin >> newBookName;
	}
	inStreamBook.open(bookName);
	if (inStreamBook.fail())
	{
		cout << "Book file opening failed." << endl;
		exit(1);
	}

	std::ofstream outfile(bookName);

	outfile << "my text here!" << std::endl;

	outfile.close();


	/*outStreamBook.open(outputFileName);
	if (outStreamBook.fail())
	{
		cout << "Book output file opening failed." << endl;
		exit(1);
	}
	*/
}

