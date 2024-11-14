#include "circle.h"

using namespace Curves;

Circle::Circle(double radius): radius{std::max(0.0, radius)}
{
}

Vector3D Circle::getDerivative(double t) const noexcept
{

    return Vector3D(Point3D(-radius * sin(t), radius * cos(t), 0.0));
}

Point3D Circle::getPoint(double t) const noexcept
{
    return Point3D(radius * cos(t), radius * sin(t), 0.0);
}

double Circle::getRadius() const noexcept
{
    return radius;
}
