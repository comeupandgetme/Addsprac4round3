#include "Truckloads.h"

int Truckloads::numTrucks(int numCrates, int loadSize){
    if (numCrates > loadSize)
        return numTrucks(numCrates / 2, loadSize) + numTrucks(numCrates - numCrates /2, loadSize);
    return 1;
}

