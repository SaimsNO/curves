#include <iostream>
#include <vector>
#include <memory>
#include <random>


#include "circle.h"
#include "ellipse.h"
#include "helix.h"

std::unique_ptr<Curve> createRandomCurve() {
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_real_distribution<double> distRadius(1.0, 10.0);
    std::uniform_real_distribution<double> distStep(0.1, 10.0);
    std::uniform_int_distribution<int> distCurveType(0, 2);

    double radius = distRadius(gen);
    double radiusEllipse = distRadius(gen);
    double step = distStep(gen);

    int curveType = distCurveType(gen);
    switch (curveType) {
        case 0:
            return std::make_unique<Circle>(radius);
        case 1:
            return std::make_unique<Ellipse>(radius, radiusEllipse);
        case 2:
            return std::make_unique<Helix>(radius, step);
        default:
            return nullptr;
    }
}

int main(){

    std::vector<std::shared_ptr<Curve>> curves;
    
    //Populate a container (e.g. vector or list) of objects of these types created in random manner with
    //random parameters.

    for (int i = 0; i < 20; ++i) {
        curves.push_back(createRandomCurve());
    }

    //Print coordinates of points and derivatives of all curves in the container at t=PI/4.
    for (const auto& curve : curves) {
        auto point = curve->getPoint(pi / 4);
        auto derivative = curve->getDerivative(pi / 4);
        std::cout << "Point: ("; 
        point.print();
        std::cout << "), Derivative: (";
        derivative.getVector().print();
        std::cout << ")\n";
    }

    //Populate a second container that would contain only circles from the first container.
    std::vector<std::shared_ptr<Circle>>circles;
    for (const auto& curve : curves){
        if (auto circle = std::dynamic_pointer_cast<Circle>(curve)) {
            circles.push_back(circle);
        }
    }

    //Sort the circles in the ascending order of circles’ radii
    std::sort(circles.begin(), circles.end(), 
    [](const auto first, const auto second){
        return first->getRadius() < second->getRadius();
    });

    //Compute the total sum of radii of all curves in the circles
    double totalSum = 0.0;
    for (const auto& circle : circles) {
        totalSum += circle->getRadius();
    }
    std::cout << totalSum;
    return 0;
}
