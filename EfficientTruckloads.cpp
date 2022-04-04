#include "EfficientTruckloads.h"
#include <stdio.h>


int EfficientTruckloads::numTrucks(int numCrates, int loadSize){    
    if(numCrates > loadSize){
        if (numCratesArray[numCrates] != 0)
            return numCratesArray[numCrates];
        numCratesArray[numCrates] = numTrucks(numCrates/2,loadSize) + numTrucks(numCrates - (numCrates/2),loadSize);        
        return numCratesArray[numCrates];        
    }        
    return 1;
        
}
