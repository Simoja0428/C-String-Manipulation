# C-String-Manipulation
In the last project we took an in depth look at basic arithmetic and relational operators in C++ programming. The following repository will take a closer look at strings and the many different things we can do with them.

## What is a String?
As you may know, a String is a collection of characters that we can use to display text while programming. Since a String is a collection of characters, we have access to a whole wide variety of methods that can be useful in order to manipulate our String.

## How do you access these String methods?
In order to access the methods to manipulate a String, you need to make sure that you include the proper libraries. A library is simply an external file that contains a bunch of methods and information that we can use in our programming. In this case, in order to get access to the String library, we need to add the following line to the top of our file:

```c++
#include <string>
```

## Manipulating String values
There is a couple different methods we can make use of to manipulate strings. Lets do an example to see. What if we wanted to add two strings together and then make a copy of this new string. Before finally printing out the length of the new string and its copy? As complicated as this sounds, this can be easily done using some different string methods. See the following example below:

```c++
#include <iostream>
#include <string>

using namespace std;

int main(int argc,  char* argv[])
{
  String name1 = "jacob";
  String name2 = "benito";
  String holdCopy;
  int copyLength;
  
  strcat(name1,name2); //Adds name2 on to name1
  strcpy(holdCopy, name1); //Copies name1 into the holdCopy
  copyLength = strlen(holdCopy); //Stores length of copy in copyLength
  
  cout << "String Length: " << copyLength << " String Copy: " << holdCopy << endl;
  return 0;
}
```
