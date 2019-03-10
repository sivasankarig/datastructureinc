#include <iostream>
#include<unordered_map>
#define MAX_CHAR 26
using namespace std;
void frequency(string &str);
/*
 * Find frequency of each characters in a string
 * */
int main(int argc, char *argv[])
{
    string myStr= "sivaisa goods";
    int alphabet[MAX_CHAR]={0};

    transform(myStr.begin(),myStr.end(),myStr.begin(),::tolower);
    for (int i=0;i<=myStr.size();i++){
        alphabet[myStr[i]-'a']++;
    }
    for(int i=0;i<MAX_CHAR;i++){
        if(alphabet[i]!=0)
            cout<<(char)(i+'a')<<" : "<<alphabet[i]<<endl;
    }
    cout<<"   "<<endl;
    frequency(myStr);
    return 0;
}

void frequency(string &str){
    unordered_map <char,int> feq;
   for(char c : str){
        feq[c]++;
    }
    for(auto pair : feq){
        cout<<pair.first<<" : "<<pair.second <<"  ";
    }
}
