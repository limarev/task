//
// Created by Konstantin Limarev on 20.05.2022.
//

#ifndef TASK_CIRCLE_H
#define TASK_CIRCLE_H

#include "Figure.h"

class Circle: public Figure {
public:
    explicit Circle(const Point& center, double radius) : center_(center), radius_(radius) {};
    ~Circle() override {};

    std::string type() const noexcept override {
        return type_;
    }
private:
    Point center_;
    double radius_;
    const std::string type_ {"circle"};
};
#endif //TASK_CIRCLE_H
