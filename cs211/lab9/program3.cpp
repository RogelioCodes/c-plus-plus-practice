#include<iostream>
#include<string> 
#include<vector>

using namespace std ; 

bool isPalindrome(int first, int  last, string sentence);

int main()
{
  string sentence = "Able was I,I saw elbA" ;
  string sentence2 = "wow wow"; 
  string check = sentence ; 
 
  if(sentence== string(sentence.rbegin(),sentence.rend()))
    cout << "yes" << endl ; 

  return 0 ; 
}
