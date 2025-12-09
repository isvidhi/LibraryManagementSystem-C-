#include <iostream>
#include "author.h"

using namespace std;

int main()
{
    cout << "Hello World!" << endl;
    Author author("John Doe", "Famous writer");
    author.Display();
    return 0;
}
