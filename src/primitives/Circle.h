//
// Created by Konstantin Limarev on 12.06.2022.
//

#ifndef TASK_CIRCLE_H
#define TASK_CIRCLE_H

#include "IFigure.h"

class Circle final: public IFigure {
public:
    explicit Circle(const Vector3D& centre, double radius) : centre_(centre), radius_(radius) {}
    const Vector3D& centre() const {
        return centre_;
    }
    const double& radius() const {
        return radius_;
    }

    void translate(const Vector3D& v) override {
        centre_.x += v.x;
        centre_.y += v.y;
        centre_.z += v.z;
    }

    void rotate(const Vector3D& v) override {

    }

    void scale(double x) override {
        radius_ *= x;
    }

private:
    Vector3D centre_;
    double radius_;

};
#endif //TASK_CIRCLE_H
