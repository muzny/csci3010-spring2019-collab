#include "ManyFunctions.h"

int Sign(int num) {
  if (num == 0) {
    return 0;
  }

  return num < 0 ? -1 : 1;
}
