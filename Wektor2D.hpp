class Wektor2D
{   
public:
    Wektor2D()
    {
        x=0;
        y=0;
    }
    Wektor2D(double a, double b)
    {
        x=a;
        y=b;
    }
    void setX(double a)
    {
        x=a;
    }
    double getX()
    {
        return x;
    }
    void setY(double a)
    {
        y=a;
    }
    double getY()
    {
        return y;
    }
private:
    double x;
    double y;
};

Wektor2D operator+(Wektor2D w, Wektor2D v)
{
    return Wektor2D(w.getX()+v.getX(), w.getY()+v.getY());
}

double operator*(Wektor2D w, Wektor2D v)
{
    return w.getX() * v.getX() + w.getY() * v.getY();
}