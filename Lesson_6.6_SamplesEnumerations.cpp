/*
Lesson 6.6 Samples Enumerations
Pawelski
5/10/2021
This program demonstrates some of the key concepts
for enumerations.
*/

#include <iostream>
using namespace std;

/*
This is an enumeration called Switch. It contains
two values: off (0) and on (1). Since it is outside
a function, it has global scope.
*/
enum Switch
{
    off,
    on
};

/*
This enumeration shows how you can adjust
the values of the enumerators.
*/
enum Rainbow
{
    red = 1,    // 1
    orange,     // 2
    yellow,     // 3
    green,      // 4
    blue,       // 5
    indigo,     // 6
    violet      // 7
};

void print(Rainbow color)
{
    switch (color)
    {
    case red:
        cout << "Red";
    case orange:
        cout << "Orange";
    case yellow:
        cout << "Yellow";
    case green:
        cout << "Green";
    case blue:
        cout << "Blue";
    case indigo:
        cout << "Indigo";
    case violet:
        cout << "Violet";
    default:
        cout << "That is not a color in the rainbow!";
    }
}

int main()
{
    /*
    Here is another enumeration, which is called
    Role. It has four values: administrator (0),
    teacher (1), parent (2), and student (3). It
    only has local scope, which means it cannot be
    used outside the main().
    */
    enum Role
    {
        administrator,
        teacher,
        parent,
        student
    };

    /*
    Example #1
    This shows how to create a variable of
    an enumerated type.
    */
    Role t1 = teacher;
    cout << t1 << "\n";
    Switch DI101 = on;
    Switch DO101 = off;
    cout << DI101 << "\n";
    cout << DO101 << "\n";
    Rainbow c = green;

    /*
    Example #2
    This shows how to use a switch case to work
    with enumerations. This also shows a way you
    can get it to print the enumertor names instead
    of the integer value.
    */
    print(c);
    print(red);
    return 0;
}
