using namespace std;

class Form {

    private:
        string color;

    protected:
        string name;
        string getColor();
        void setColor(string color);

    public:
        string getName();
        void setName(string name);

};

class Rectangle:public Form {

    protected:
        int width;
        int height;

    public:
        void setWidth(int width);
        int getWidth();

};
