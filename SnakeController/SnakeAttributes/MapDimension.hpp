struct MapDimension {
    int width;
    int height;

    bool isPositionOutsideMap() const {
        return x < 0 or y < 0 or x >= width or y >= height;
    }
};