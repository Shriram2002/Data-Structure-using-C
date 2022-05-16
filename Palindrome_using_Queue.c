#include <iostream>
#include <queue>
#include <string>
using namespace std;
int main (void)
{
queue <char> q;
string letter;
int length;
cout<<"Please enter a series of characters."<<endl;
getline (cin, letter);
bool isPalindrome = false;
if (letter.size() > 0)
{
int length = letter.size() / 2;
for (int i=0; i<length; i++)
{
q.push(letter[i]);
}
isPalindrome = true;
for (int i = 1; i<= length &&isPalindrome; ++i)
{
isPalindrome = q.front() == letter[letter.size() - i];
q.pop();
}
}
if(!isPalindrome)
{
cout<<"Is not a palindrome."<<endl;
}
else
{
cout<<"Is a palindrome."<<endl;
}
return 0;
}
