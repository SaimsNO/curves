#pragma once

#include <iostream>
#include "defines.h"

namespace Curves{

    struct CURVELIBRARY_API Point3D{
        double x;
        double y;
        double z;
        Point3D(double x = 0, double y =0 , double z = 0): x{x}, y{y}, z{z}{}
        void print();
    };
    
}