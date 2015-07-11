#ifndef  UI_INC
#define  UI_INC

#include <ncurses.h>
#include <memory>

#include "enums.h"

// wraps a curses window to auto handle freeing memory
struct window {
    private:
        WINDOW *win;
        int width, height, x, y;
    public:
        window();
        window(int w, int h, int sx, int sy) :
            width(w), height(h), x(sx), y(sy) {};
        ~window();
};

class ui_base
{
    private:
//        std::unique_ptr<
    public:
};

class ui : public ui_base
{
};

#endif   /* ----- #ifndef UI_INC  ----- */
