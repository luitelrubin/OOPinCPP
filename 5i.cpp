/*
Program that adds two objects of complex class
*/
#include <iostream>
using namespace std;

class Complex
{
private:
    int real, img;

public:
    void setdata()
    {
        cout << "Enter real and imaginary values: ";
        cin >> real >> img;
    }

    void display()
    {
        cout << "(" << real << "+" << img << "i)" << endl;
    }

    Complex addComplex(Complex c)
    {
        Complex temp;
        temp.real = real + c.real;
        temp.img = img + c.img;
        return temp;
    }
};

int main()
{
    Complex c1, c2, c3;
    c1.setdata();
    c2.setdata();
    c3 = c2.addComplex(c1);
    cout << "Addition = ";
    c3.display();
    return 0;
}

/*
Output:
Enter real and imaginary values: 5 3
Enter real and imaginary values: 2 4
Addition = (7+7i)
*/