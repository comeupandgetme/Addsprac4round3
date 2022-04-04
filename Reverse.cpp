#include "Reverse.h"
#include <string>

void Reverse::initialise(){
    temp = 0;
    sum = 0;
}

int Reverse::reverseDigit(int value) {    
    if (value < 0)    
        return -1;
    else if(value > 0){  
            temp = value % 10;        
            sum = sum *10 + temp;
            reverseDigit(value / 10);
    }       
    int res = sum;        
    return res;       
        
}


string Reverse::reverseString(string letters){    
    if(letters.length() > 0){    
        int lastIndex = letters.length() - 1;
        return letters.at(lastIndex) + reverseString(letters.substr(0, lastIndex));
    }
    else
        return "";
}
 
