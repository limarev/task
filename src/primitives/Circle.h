//
// Created by Konstantin Limarev on 12.06.2022.
//

#ifndef TASK_CIRCLE_H
#define TASK_CIRCLE_H

#include "IFigure.h"

class Circle final: public IFigure {
public:
    explicit Circle(const Vector3D& centre, double radius);

    // Circle interface
    Vector3D centre() const;
    double radius() const;

    // IFigure interface
    void translate(const Vector3D& v) override;
    void rotate(const Vector3D& v) override;
    void scale(double x) override;

private:
    Vector3D centre_;
    double radius_;

};

Circle::Circle(const Vector3D& centre, double radius) : centre_(centre), radius_(radius) {}

Circle::Vector3D Circle::centre() const {
    return centre_;
}
double Circle::radius() const {
    return radius_;
}

void Circle::translate(const Vector3D& v) {
    centre_.x += v.x;
    centre_.y += v.y;
    centre_.z += v.z;
}

void Circle::rotate(const Vector3D& v) {

}

void Circle::scale(double x) {
    radius_ *= x;
}
#endif //TASK_CIRCLE_H
