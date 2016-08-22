//standard is to put the file name in caps
//Exmple...
//#ifndef HEADER_FILE_H
#ifndef ANYTHING_CAN_GO_HERE
#define ANYTHING_CAN_GO_HERE

#include <iostream>

using namespace std;

class foo{
public:
 foo(int x){
  data = x;
	cout << "You have a created a FOO with data: " << data << " data value\n";
 };
 int data;
};
#endif
