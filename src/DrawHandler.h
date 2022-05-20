//
// Created by Konstantin Limarev on 20.05.2022.
//

#ifndef TASK_DRAWHANDLER_H
#define TASK_DRAWHANDLER_H

#include <iostream>

class DrawHandler {
public:
    DrawHandler() = default;
    void draw() const {
        std::cout << "Draw\n";
    }
};
#endif //TASK_DRAWHANDLER_H
