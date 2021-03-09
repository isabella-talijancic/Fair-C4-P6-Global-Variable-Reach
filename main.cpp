// C4 P5 Global Reach
// Demonstrates global variables

#include <iostream>

using namespace std;

int global = 10;       //#1 global variable

void access_global();
void hide_global();
void change_global();

const string AUTHOR = "Isabella";
void show_author();

int main()
{
	cout << "* * * Global Variable Reach Program * * *\n\n";
	
    cout << "\t** In main() global variable is: " << global << "\n\n";
    access_global();
    
    hide_global();
    cout << "\t** In main() global variable is: " << global << "\n\n";

    change_global();
    cout << "\t** In main() global variable is: " << global << "\n\n";
    
    show_author();
    cout << "\t** In main() author variable is: " << AUTHOR << "\n\n";
    

	cout << "* End of Program *";
    return 0;
}

void access_global()
{
    cout << "\t** In access_global() global is: " << global << "\n\n";
}

void hide_global()
{
    int global = 21;  // #2 global variable
    cout << "\t** In hide_global()  global is: " << global << "\n\n";
}

void change_global()
{
    global = 85;  // #3 global variable
    cout << "\t** In change_global() global is: " << global << "\n\n";
}
void show_author()
{
	cout << "\t** In show_author() author is: " << AUTHOR << "\n\n";
}