//
// Created by Konstantin Limarev on 13.06.2022.
//

#ifndef TASK_IFIGURE_H
#define TASK_IFIGURE_H

class IFigure {
public:
    struct Vector3D {
        int x;
        int y;
        int z;
    };

    virtual ~IFigure() = default;
    virtual void translate(const Vector3D& v) = 0;
    virtual void rotate(const Vector3D& v) = 0;
    virtual void scale(double x) = 0;
};
#endif //TASK_IFIGURE_H
