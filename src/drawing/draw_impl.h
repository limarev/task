//
// Created by Konstantin Limarev on 12.06.2022.
//

#ifndef TASK_DRAW_IMPL_H
#define TASK_DRAW_IMPL_H

#include "primitives/Circle.h"
#include "primitives/Rectangle.h"
#include "Screen.h"

#include <iostream>

class Drawable;

namespace draw_impl {
    void draw(const Circle& c, Screen& s) {
        s << "<circle>\n";

        s << "(" << c.centre().x << ", "
                 << c.centre().y << ", "
                 << c.centre().z << "), radius = "
                 << c.radius();
        s << "\n";

        s << "</circle>\n";
    }

    void draw(const Rectangle& r, Screen& s) {
        s << "<rectangle>\n";

        s << "(" << r.origin().x << ", "
                 << r.origin().y << ", "
                 << r.origin().z << "), width = "
                 << r.width() << ", height = "
                 << r.height();
        s << "\n";

        s << "</rectangle>\n";
    }

    void draw(const std::vector<Drawable>& v, Screen& s);

}; // namespace draw_impl


#endif //TASK_DRAW_IMPL_H
