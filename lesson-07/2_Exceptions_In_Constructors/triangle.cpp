#include "triangle.h"
#include "geometryException.h"
#include <iostream>

Triangle::Triangle(std::vector<int> sides, std::vector<int> angles)
    : Figure(sides, angles)
{
    m_figureName = "Triangle";

    if (!isCountSidesValid())
        throw GeometryException("Wrong number of sides!");
    else if (!isSidesLengthValid())
        throw GeometryException("Incorrect sides lengths!");
    else if (!isAnglesSumValid())
        throw GeometryException("Wrong sum of angles!");
}

bool Triangle::isCountSidesValid() const
{
    const int countSidesTriangle{3};

    return getSides().size() == countSidesTriangle;
}

bool Triangle::isSidesLengthValid() const
{
    return ((getSides()[0] + getSides()[1] > getSides()[2])
            && (getSides()[1] + getSides()[2] > getSides()[0])
            && (getSides()[0] + getSides()[2] > getSides()[1]));
}

bool Triangle::isAnglesSumValid() const
{
    const int sumAnglesTriangle{180};
    int anglesSum{0};

    for (auto& angle : m_angles)
    {
        anglesSum += angle;
    }

    return anglesSum == sumAnglesTriangle;
}

void Triangle::printFigureInfo() const { Figure::printFigureInfo(); }
