
#include <iostream>
using namespace std;
int stringlenght(const char* const str)
{
    int countl = 0;
    char test = str[countl];
    
    while (test != '\0')
    {
        countl++; 
        test = str[countl];
    }
    return countl;
}
int main()
{
    cout << stringlenght("rtl");
}
