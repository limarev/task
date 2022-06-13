//
// Created by Konstantin Limarev on 12.06.2022.
//

#ifndef TASK_DRAWABLE_H
#define TASK_DRAWABLE_H

#include <memory>

#include "draw_impl.h"

class Drawable {
    class IDrawable {
    public:
        virtual ~IDrawable() = default;
        virtual void draw(Screen& s) const = 0;
        virtual std::unique_ptr<IDrawable> clone() const = 0;
    };

    template<typename T>
    class DrawableObject final: public IDrawable {
    public:
        DrawableObject(T x) : data(std::move(x)) {}

        void draw(Screen& s) const override {
            draw_impl::draw(data, s);
        }

        std::unique_ptr<IDrawable> clone() const override {
            return std::make_unique<DrawableObject<T>>(*this);
        }

    private:
        T data;
    };

public:
    template<typename T>
    Drawable(T x) : ptr(std::make_unique<DrawableObject<T>>(std::move(x))) {};
    Drawable(Drawable& other) : ptr(other.ptr->clone()) {}
    Drawable(Drawable&& other) noexcept = default;
    Drawable& operator=(const Drawable& other) {
        ptr = other.ptr->clone();
        return *this;
    }
    Drawable& operator=(Drawable&& other) noexcept {
        ptr = std::move(other.ptr);
        return *this;
    }

    friend void draw(const Drawable& d, Screen& s) {
        d.ptr->draw(s);
    }

private:
    std::unique_ptr<IDrawable> ptr;
};


#endif //TASK_DRAWABLE_H
