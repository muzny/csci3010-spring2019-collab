#include "ManyFunctions.h"


/*
    Returns -1 if num is negative, 1 if it is positive.
    @param num The number
    @return -1 if negative, 1 if positive
*/
int Sign(int num){
    if(num<0){
        return -1;
    }else if(num > 0){
        return 1;
    }else{
        return 0;
    }
}