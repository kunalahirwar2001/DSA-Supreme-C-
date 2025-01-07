#include <iostream>
using namespace std;
void letsdoit()
{
    cout << "Doing it" << endl;
}
void driving()
{
    cout << "Driving" << endl;
}

namespace kunal
{
    void letsdoit()
    {
        cout << "Kunal is doing it" << endl;
    }

    void driving()
    {
        cout << "Kunal is driving" << endl;
    }
}
namespace Prince
{
    void letsdoit()
    {
        cout << "Prince is doing it" << endl;
    }

    void driving()
    {
        cout << "Prince is driving" << endl;
    }
}

int main()
{
    letsdoit();
    driving();
    kunal::letsdoit();
    kunal::driving();
    Prince::letsdoit();
    Prince::driving();
    return 0;
}