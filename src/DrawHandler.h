//
// Created by Konstantin Limarev on 20.05.2022.
//

#ifndef TASK_DRAWHANDLER_H
#define TASK_DRAWHANDLER_H

#include <iostream>
#include "Figure.h"

class DrawHandler {
public:
    DrawHandler() = default;
    ~DrawHandler() = default;
    void draw(Figure* figure) const {
        try {
            if (!figure)
                throw std::runtime_error("DrawHandler fails to draw the figure");
            std::cout << "Draw " + figure->type() + "\n";
        }
        catch (const std::exception& ex) {
            std::cerr << ex.what();
        }
    }
};
#endif //TASK_DRAWHANDLER_H
