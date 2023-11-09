#include <iostream>
#include <string>
#include "List.h"

using namespace std;


int main()
{
    List<int> l1;
    List<string> l2;
    
    cout << "Is empty: " << l1.empty() << endl;

    l1.push_back(6);
    l1.push_back(3);
    l1.push_back(10);

    l1.print();
    cout << "Length: " << l1.get_length() << endl;
    l1.clear();
    l1.print();
}
