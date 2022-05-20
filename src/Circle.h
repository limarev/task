//
// Created by Konstantin Limarev on 20.05.2022.
//

#ifndef TASK_CIRCLE_H
#define TASK_CIRCLE_H

#include "Figure.h"
#include "DrawHandler.h"

class Circle: public Figure {
public:
    explicit Circle(const Point& center, double radius) : center_(center), radius_(radius) {};
    ~Circle() override {};
    double area() override {return 0;}
private:
    Point center_;
    double radius_;
    DrawHandler drawHandler;
};
#endif //TASK_CIRCLE_H
