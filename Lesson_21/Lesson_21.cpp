#include <iostream>
#include "List.h"

using namespace std;


int main()
{
    List l1;

    cout << "Is empty: " << l1.empty() << endl;

    l1.add(6);
    l1.add(3);
    l1.add(10);

    l1.print();
    cout << "Length: " << l1.get_length() << endl;
    l1.clear();
    l1.print();

}
