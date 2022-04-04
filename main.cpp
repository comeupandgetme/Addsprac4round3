#include "Reverse.h"
#include "Truckloads.h"
#include "EfficientTruckloads.h"
#include <iostream>

int main(){
    //Reverse r;
    //cout << r.reverseDigit(12345) << endl;
    //r.initialise();    
    //cout << r.reverseDigit(-10) << endl;        
    //cout << r.reverseString("Hello") << endl;    

    int dig, nc, ls;
    string str;
    cout << "Input : ";    
    cin >> dig >> str >> nc >> ls;
    Reverse r;
    Truckloads tl;
    EfficientTruckloads etl;
    
    int result = r.reverseDigit(dig);
    if (result == -1)
        cout << "ERROR " << r.reverseString(str) << " " << tl.numTrucks(nc, ls) << " " << etl.numTrucks(nc, ls) << endl;
    else if (!(typeid(nc) == typeid(int) && typeid(ls) == typeid(int)) || isalpha(nc) || isalpha(ls)){                
        cout << result << " " << r.reverseString(str) << " " << "ERROR ERROR" << endl;    
    }
    else if (result == -1 && (!isdigit(nc) || !isdigit(ls)))
        cout << "ERROR" << r.reverseString(str) << " " << "ERROR ERROR" << endl;
    else        
        cout << result << " " << r.reverseString(str) << " " << tl.numTrucks(nc, ls) << " " << etl.numTrucks(nc, ls) << endl;


    /*EfficientTruckloads etl1, etl2, etl3;
    cout << etl1.numTrucks(14, 3) << endl;
    cout << etl2.numTrucks(15, 1) << endl;
    cout << etl3.numTrucks(1024, 5) << endl;
    */
    return 0;
}