#include <iostream>
#include "palindrome.h"
using namespace std;

/*sample input
 * Madam In Eden, I’m Adam
 * A Man, A Plan, A Canal-Panama!
 * Eva, Can I Stab Bats In A Cave?
 * Doc, Note: I Dissent. A Fast Never Prevents A Fatness. I Diet On Cod.
 * */
int main(int argc, char *argv[])
{
    string str1;

    cout<<"Enter the string "<<endl;
    getline(cin,str1);
   // cout<<str1;
    palindrome pd(str1);

    bool result= pd.isPalindrome();
    if(result)
        cout<<"The string is palindrome"<<endl;
    else
        cout<<"Not a palindrome"<<endl;
    return 0;
}
