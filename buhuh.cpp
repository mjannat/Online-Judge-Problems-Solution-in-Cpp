#include <bits/stdc++.h>
using namespace std;
int main()
{
    cout << "If you want to \"sign in\" press 1\n";
    cout << "If you want to \"Register\" press 2\n";

    cout << "Please Enter Your User name" << endl;
    string name, encrypted_name = "";
    getline(cin,name);

    cout << "Please Enter Your Password" << endl;
    string password, encrypted_password = "";
    cin >> password;

    for(int i = 0; i < name.size(); i++)encrypted_name += name[i] + 2;

    for(int i = 0; i < password.size(); i++)encrypted_password += password[i] + 2;

    cout << "Welcome :)\n";

    cout << "Encrypted user name is " << encrypted_name <<endl;
    cout << "Encrypted password is " << encrypted_password <<endl;
    return 0;
}
