#include "ManyFunctions.h"

int RemoveTwos(int original)
{
    return (original % 2 == 1) ? original : RemoveTwos(original / 2);
}