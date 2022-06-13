//
// Created by Konstantin Limarev on 13.06.2022.
//

#ifndef TASK_RECTANGLE_H
#define TASK_RECTANGLE_H

#include "IFigure.h"

class Rectangle final: public IFigure {
public:
    explicit Rectangle(const Vector3D& v, double width, double height);

    // Rectangle interface
    double width() const;
    double height() const;
    Vector3D origin() const;

    // IFigure interface
    void translate(const Vector3D& v) override;
    void rotate(const Vector3D& v) override;
    void scale(double x) override;

private:
    Vector3D v_;
    double width_;
    double height_;
};

Rectangle::Rectangle(const Vector3D& v, double width, double height) : v_(v), width_(width), height_(height) {}

double Rectangle::width() const {
    return width_;
}

double Rectangle::height() const {
    return height_;
}

Rectangle::Vector3D Rectangle::origin() const {
    return v_;
}

void Rectangle::translate(const Rectangle::Vector3D &v) {
    v_.x += v.x;
    v_.y += v.y;
    v_.z += v.z;
}

void Rectangle::rotate(const Rectangle::Vector3D &v) {

}

void Rectangle::scale(double x) {
    width_ *= x;
    height_ *= x;
}


#endif //TASK_RECTANGLE_H
