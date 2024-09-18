#include <iostream>
#include "Exception.h"
#include "DivideByZero.h"
#include "IndexException.h"

using namespace std;

int main()
{
    int mas[3]{ 1, 2, 3 };

    try
    {
        int a = 10;
        int b = 0;
        if (b == 0)
        {
            throw DivideByZero("Divide by zero!!!");
        }
        cout << "Result: " << a / b << endl;
        for (int i = 0; i < 5; i++)
        {
            if (i >= 3)
            {
                throw IndexException("Index out of bounds");
            }
            cout << mas[i] << "\t";
        }
        cout << endl;
    }
    catch (DivideByZero& exception)  
    {
        cout << "Error: " << exception.GetMessage() << endl;
    }
    catch (IndexException& exception)  
    {
        cout << "Error: " << exception.GetMessage() << endl;
    }
    catch (Exception& exception) 
    {
        cout << "Error: " << exception.GetMessage() << endl;
    }
    return 0;
}