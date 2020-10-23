struct MapDimension {
    int width;
    int height;
    std::istringstream istr;

    MapDimension(std::istringstream istr_) : istr{istr_} {}

    void readDimensions(){
        istr >> width >> height;
    }
};

struct FoodPosition {
    int x;
    int y;
    std::istringstream istr;

    FoodPosition(std::istringstream istr_) : istr{istr_} {

    }

    void readPositions(){
        istr >> x >> y;
    }
};