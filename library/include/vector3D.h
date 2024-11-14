#pragma once

#include "point3D.h"

namespace Curves{
class CURVELIBRARY_API Vector3D{
    Point3D point{0.0,0.0,0.0};
public:
    Vector3D (Point3D point) : point{point}{}
    Point3D getVector(){return point;}
};
}