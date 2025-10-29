class Figure {
  double virtual size() const = 0;
};

class One_Dimension : protected Figure {
  double virtual size() const = 0;
};

class Segment {
  double st;
  double end;
};

class Two_D {

}

class Three_Dimensions {

};


int main() {

}