#include <iostream>
using namespace std;
class Mountain
{
    char *name;
    char *location;
    double height;

public:
    Mountain()
    {
    }
    Mountain(char *name, double height, char *location)
    {
        this->name = name;
        this->height = height;
        this->location = location;
    }
    void DisplayInfo()
    {
        cout << "Name of Mountain : " << name << endl;
        cout << "Location of the Mountain : " << location << endl;
        cout << "Height : " << height << endl;
    }
    void CmpHeight(Mountain, Mountain);
};
void Mountain ::CmpHeight(Mountain h1, Mountain h2)
{
    if (h1.height > h2.height)
    {
        cout << "Mountain " << h1.name << " is higher." << endl;
    }
    else
    {
        cout << "Mountain " << h2.name << " is higher." << endl;
    }
}
int main()
{
    Mountain mt1("everst", 8849, "lt"), mt2("man", 6993, "lt2");
    cout << "Mountain No.1 : " << endl;
    mt1.DisplayInfo();
    cout << "Mountain No.2 : " << endl;
    mt2.DisplayInfo();
    Mountain mt3;
    cout << "After Comparing : " << endl;
    mt3.CmpHeight(mt1, mt2);
    return 0;
}
