//
// Created by Konstantin Limarev on 13.06.2022.
//

#ifndef TASK_RECTANGLE_H
#define TASK_RECTANGLE_H

//#include "IFigure.h"

class Rectangle final: public IFigure {
public:
    Rectangle(const Vector3D& v, double width, double height) : v_(v), width_(width), height_(height) {}

    // Rectangle interface
    const double& width() const;
    const double& height() const;
    const Vector3D& origin() const;

    // Figure interface
    void translate(const Vector3D& v) override;
    void rotate(const Vector3D& v) override;
    void scale(double x) override;

private:
    Vector3D v_;
    double width_;
    double height_;
};


#endif //TASK_RECTANGLE_H
