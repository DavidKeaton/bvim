#ifndef  ENUMS_INC
#define  ENUMS_INC

// contains a position in 2 or 3 coordinates
template <size_t N>
struct pos {
    private:
        // the N positions
        std::array<int, N> p;
    public:
};

typedef pos<2> pos2;
typedef pos<3> pos3;

#endif   /* ----- #ifndef ENUMS_INC  ----- */
