#include <iostream>
// wanna add filesave later
#include <fstream>
#include <string>

using namespace std;

int main() {
    // 1. Declare variables inside main so they are accessible throughout the
    // function
    string name;          // employee name
    string company_name;  // company name
    string info_employee; // info of employee
    string info_company;  // info of company
    string role_employee; // role of employee

    int expirience;   // years of experience
    int age_employee; // age of employee

    // 2. Gather Inputs (using getline for full sentences/spaces)
    cout << "Name of employee : ";
    getline(cin >> ws, name);

    cout << "Name of company : ";
    getline(cin >> ws, company_name);

    cout << "Info of the employee : ";
    getline(cin >> ws, info_employee);

    cout << "Info of the company : ";
    getline(cin >> ws, info_company);

    cout << "Employee role : ";
    getline(cin >> ws, role_employee);

    cout << "Experience in years : ";
    cin >> expirience;

    cout << "Age : ";
    cin >> age_employee;

    // 3. Print Output ID Card
    cout << "\n__________EMPLOYEE ID__________" << endl;
    cout << "Name             : " << name << endl;
    cout << "Name of Company  : " << company_name
         << endl; // Fixed missing company_name variable
    cout << "Info             : " << info_employee << endl;
    cout << "Company Info     : " << info_company << endl;
    cout << "Role             : " << role_employee << endl;
    cout << "Age              : " << age_employee << endl;
    cout << "Experience Years : " << expirience << endl;
    cout << "_______________________________"
         << endl; // Added missing semicolon
    // lets set file saving mechanism
    char Savechoice;
    cout << "would you like to save the id as file";
     cin >> Savechoice;
    // now setup if else system for the Savechoice variable
    if (Savechoice == 'y' || 'Y') {
        // now setup the main magic
        //  the file saving
        ofstream outFile("generated_id.txt");

        if (outFile.is_open()) {
            outFile << "employee id\n";
            outFile << "name :" << name << "\n";
            outFile << "company name :" << company_name << "\n";
            outFile << "info :" << info_employee << "\n";
            outFile << "company info :" << info_company << "\n";
            outFile << "Role :" << role_employee << "\n";
            outFile << "Age :" << age_employee << "\n";
            outFile << "Experience years :" << expirience << "\n";
            outFile << "________________________" << "\n";

            outFile.close();
            cout << "employee id saved maybe" << endl;
        } else {
            cout << "oh no looks like a error is here" << endl;
        }
    } else if (Savechoice == 'n' || Savechoice == 'N') {
        cout << "file isnt saved" << endl;
    }
  return 0;
}


// i used some ai help. because original code had errors. the code is 100%
// genuine human made
//now fixed some errors myself
// because i am not a ai slop dev
// i am a genuine dev