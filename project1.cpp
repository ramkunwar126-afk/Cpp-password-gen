#include <iostream> //used for functions like cin and cout
#include <cstdlib>  //for using random function
#include <ctime>    //for generating password according to time
#include <string>   // for using string

using namespace std;
string getpassword(int length)
{
    string password = "";
    string characters = "aquickbrownfoxjumpsoverthelazydogAQUICKBROWNFOXJUMPSOVERTHELAZYDOG";
    int charsize = characters.size();
    srand(time(0));
    int randomindex;
    for (int i = 0; i < length; i++)
    {
        randomindex = rand() % charsize;
        password = password + characters[randomindex];
    }
    return password;
}

int main()
{

    int length;
    string password;
    cout << "Enter the length of the password: ";
    cin >> length;
     password=getpassword(length);
    cout << "Generated password is :" << password;
    return 0;
}