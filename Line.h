#include "Point.h"

class Line{

  public:
    Line(Point s, Point e);
    void print();
    double lineLength();
  private:
    Point start;
    Point end;
};