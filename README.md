# C-String-Manipulation
In the last project we took an in depth look at basic arithmetic and relational operators in C++ programming. The following repository will take a closer look at strings and the many different things we can do with them.

## String vs CString
As you may know, a String is a collection of characters that we can use to display text while programming. Since a String is a collection of characters, we have access to a whole wide variety of methods that can be useful in order to manipulate our String. A CString is simply a lower level version of a String that is constructed using an array of characters. A CString will always end its array with a null terminator '\0'. Both Strings and CStrings are incredibly useful tools in programming.

## How do you access these String methods?
In order to access the methods to manipulate a String or CString, you need to make sure that you include the proper libraries. A library is simply an external file that contains a bunch of methods and information that we can use in our programming. In this case, in order to get access to the String or CString library, we need to add the following line(s) to the top of our file:

```c++
#include <string>
#include <cstring> 
```

## Manipulating CString values
There is a couple different methods we can make use of to manipulate cstrings. Lets do an example to see. What if we wanted to add two cstrings together and then make a copy of this new cstring. Before finally printing out the length of the new cstring and its copy? As complicated as this sounds, this can be easily done using some different string methods. See the following example below:

```c++
#include <iostream>
#include <cstring>

using namespace std;

int main(int argc,  char* argv[])
{
  char* name1 = "jacob"; //A char* or cstring is a lower level version of a string
  char* name2 = "benito"; //A char* or cstring is a lower level version of a string
  char* holdCopy; //A char* or cstring is a lower level version of a string
  int copyLength;
  
  strcat(name1,name2); //Adds name2 on to name1
  strcpy(holdCopy, name1); //Copies name1 into the holdCopy
  copyLength = strlen(holdCopy); //Stores length of copy in copyLength
  
  cout << "String Length: " << copyLength << " String Copy: " << holdCopy << endl;
  return 0;
}
```

The following displays the output of the program above:

```terminal
String Length: 11 String Copy: jacobbenito
```
