//
// Created by Konstantin Limarev on 20.05.2022.
//

#ifndef TASK_FIGURE_H
#define TASK_FIGURE_H

#include "DrawHandler.h"

class Figure {
public:
    struct Point {
        double x;
        double y;
    };
    virtual ~Figure() = 0;
    virtual double area() = 0;
    void draw() {
        drawHandler.draw();
    }
private:
    DrawHandler drawHandler;
};

inline Figure::~Figure() {};
#endif //TASK_FIGURE_H
