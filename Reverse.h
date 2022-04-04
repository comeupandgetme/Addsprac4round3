
#include <string>
using namespace std;


class Reverse{
private:
    int temp = 0;
    int sum = 0;

public:
    void initialise();
    int reverseDigit(int value);
    string reverseString(string letters);

};