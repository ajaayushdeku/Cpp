#include <iostream>
using namespace std;
class CopyCons
{
    int data;

public:
    CopyCons(int data)
    {
        this->data=data;
    }
    CopyCons(CopyCons &obj)
    {
        data = obj.data;
    }
    void display()
    {
        cout<< data << endl;
    }
};
int main()
{
    CopyCons c(12);
    cout<<"a : ";
    c.display();
    CopyCons c1(c);
    cout<<"Using Copy Constructor,"<<endl;
    cout<<"b : ";
    c1.display();
    return 0;
}
