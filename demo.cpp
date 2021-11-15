#include <iostream>
#include <cstring>
#include <string>

using namespace std;

int main(int argc,  char* argv[])
{
  char* name1 = (char*)"jacob"; //A char* or cstring is a lower level version of a string
  char* name2 = (char*)"benito"; //A char* or cstring is a lower level version of a string
  char* holdCopy; //A char* or cstring is a lower level version of a string
  int copyLength;
  
  strcat(name1,name2); //Adds name2 on to name1
  strcpy(holdCopy, name1); //Copies name1 into the holdCopy
  copyLength = strlen(holdCopy); //Stores length of copy in copyLength
  
  cout << "String Length: " << copyLength << " String Copy: " << holdCopy << endl;
  return 0;
}