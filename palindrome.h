#ifndef PALINDROME_H
#define PALINDROME_H

#include <string>
using namespace std;

class palindrome
{

private:
    string palstr;
public:
    palindrome();
    palindrome(string str)
    {
        palstr=str;
    }
bool isPalindrome();

};

#endif // PALINDROME_H
