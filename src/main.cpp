//
// Created by Konstantin Limarev on 20.05.2022.
//

#include <vector>
#include <iostream>

#include "drawing/Drawable.h"

namespace draw_impl {
    void draw(const std::vector<Drawable>& v, Screen& s) {
        s << "<world>\n";

        for (const auto& d : v)
            draw(d, std::cout);

        s << "</world>\n";
    }
}

int main() {
    std::vector<Drawable> world;
    world.push_back(Circle { {0, 0, 0}, 1 });
    world.push_back(Rectangle { {1, 1, 1}, 1, 1 });
    world.push_back(world);
    draw(world, std::cout);
}