class Point{
  public:
    Point(double xVal, double yVal);
//Accessors 
//double getX();
//double getY();
//Mutators
//void setX(double xVal);
//void setY(double yVal);
void print();
double calcDistance(Point other);
    Point();
  private:
    double x;
    double y;
};

