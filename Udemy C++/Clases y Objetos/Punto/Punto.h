class Punto{
    private:
        int y,x;
    public:
        Punto(int _x, int _y);
        Punto();
        void setX(int x);
        void setY(int y);
        int getX();
        int getY();

};

Punto::Punto(int _x, int _y){
    x = _x;
    y = _y;
}

Punto::Punto(){
   this->x=0;
   this->y=0;
}

void Punto::setX(int _x){
    this->x=_x;
}


void Punto::setY(int _y){
    this->y=_y;
}

int Punto::getX(){
    return this->x;
}

int Punto::getY(){
    return this->y;
}