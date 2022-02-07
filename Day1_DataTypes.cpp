#include <iostream>
#include <iomanip>
#include <limits>

using namespace std;

int main() {
    int i = 4;
    double d = 4.0;
    string s = "HackerRank ";
    
    // Declare second integer, double, and String variables.
    int i2;
    double d2;
    string s2;
    
    // Read and save an integer, double, and String to your variables.
    cin>>i2>>d2;
    cin.ignore(); //Clear the input buffer
    getline(cin, s2); //Read string in multiple lines.
    //getline() is a pre-defined function defined in a <string.h> header file used to accept a line or a string from the input stream until the delimiting character is encountered.
    
    // Print the sum of both integer variables on a new line.
    cout<<i+i2<<endl;
    
    // Print the sum of the double variables on a new line.
    cout<<fixed<<setprecision(1)<<d+d2<<endl; //Set decimal precision to 1

    /*
    More on setprecision()
    Setprecision when used along with ‘fixed’ provides precision to floating-point numbers correct to decimal numbers mentioned in the brackets of the setprecison. 
    It is defined in header file <iomanip>.
    */
    
    // Concatenate and print the String variables on a new line
    // The 's' variable above should be printed first.
    cout<<s + s2<<endl; 
    return 0;
}