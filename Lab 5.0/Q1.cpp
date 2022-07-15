#include <iostream>
using namespace std;
class Room
{
protected:
    int length, breadth;

public:
    int area(int l, int b)
    {
        int area;
        length = l;
        breadth = b;
        area = length * breadth;
    }
};

class BedRoom : public Room
{
    int length, breadth, height;

public:
    int Setdata(int l, int b, int h)
    {
        length = l;
        breadth = b;
        height = h;
    }

    int volume()
    {
        int vol;
        vol = length * breadth * height;
    }
};

int main()
{

    Room r;
    int l, b, h;
    cout << "Enter the length of room:" << endl;
    cin >> l;
    cout << "Enter the breadth of room:" << endl;
    cin >> b;

    cout << "The area of the room is=" << r.area(l, b) << endl;

    BedRoom br;
    cout << "Enter the height of Bedroom:" << endl;
    cin >> h;

    br.Setdata(l, b, h);
    cout << "The area of the Bedroom is=" << br.area(l,b) << endl;
    cout << "The volume of the Bedroom is=" << br.volume() << endl;
}
