#include "palindrome.h"

palindrome::palindrome()
{

};

bool palindrome::isPalindrome(){
    string temp="";
    bool flag=false;
    int count = 0;

 transform(palstr.begin(), palstr.end(), palstr.begin(), ::tolower);
    for(char c: palstr){
        if(isalpha(c)){
            temp+=c;
        }
    }

    if(!temp.empty()){
         return equal(temp.begin(),temp.begin()+temp.size()/2,temp.rbegin());
    }
}
