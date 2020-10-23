#include <list>
#include <sstream>

class Body {
private:
    struct Segment
    {
        int x;
        int y;

        Segment(int x_, int y_) : x{x_}, y{y_} {}
    };

    std::list<Segment> m_segments;

public:
    void add_segment()
    {
        std::istringstream istr(p_config);

        int x, y;
        istr >> x >> y;
        m_segments.push_back(Segment{x_, y_})
    }

    bool isSegmentAtPosition(int x, int y) const {
        return m_segments.end() !=  std::find_if(m_segments.cbegin(), m_segments.cend(),
                 [x, y](auto const& segment){ return segment.x == x and segment.y == y; });
    }
};