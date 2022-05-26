//
// Created by Konstantin Limarev on 20.05.2022.
//

#include "Circle.h"
#include "DrawHandler.h"

int main() {
    Figure* f = new Circle({1, 1}, 1);
    DrawHandler handler;
    handler.draw(f);
    handler.draw(nullptr);

}