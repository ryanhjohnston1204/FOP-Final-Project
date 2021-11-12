#include <fstream>
#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <climits>

void file_test(string bookName, string newBookName)
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