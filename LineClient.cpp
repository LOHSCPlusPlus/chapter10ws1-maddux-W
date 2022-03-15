#include "Line.h"


int main() {
  Point a(0,0);
  Point b(1,1);

  Line L(a,b);
  L.print();

  L.lineLength();
  
    return 0;
}
