class place {       //contains all attributes of a place
  public:
    bool ifplace;
    bool hotel;
    string name;
    string color;
    int price;
    string owner;
    bool house;
    int hotelprice;  //same value goes to house price.
    int rent;
    int hotelrent;
    int houserent;
    //parametrised constructor
    place(bool ifp, bool ih, string n, string co, int p, string o, bool h, int hotcos, int ren, int hotrent, int hourent);
};
