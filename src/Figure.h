//
// Created by Konstantin Limarev on 20.05.2022.
//

#ifndef TASK_FIGURE_H
#define TASK_FIGURE_H

#include <string>

class Figure {
public:
    struct Point {
        double x;
        double y;
    };
    virtual ~Figure() = 0;
    virtual std::string type() const noexcept = 0;
};

Figure::~Figure() = default;
#endif //TASK_FIGURE_H
