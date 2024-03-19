#include <iostream>
using namespace std;

class Figura
{
private:
    int b, h;
    float a;

public:
    Figura();
    Figura(int b, int h);
    void setArea(float a);
    float getArea();
};

void Figura::setArea(float a)
{
    this->a = a;
}

float Figura::getArea()
{
    return this->a;
}

Figura::Figura()
{
    this->b = 0;
    this->h = 0;
}

Figura::Figura(int b, int h)
{
    this->b = b;
    this->h = h;
}

class Cuadrado : public Figura
{
public:
    Cuadrado(int l);
};

Cuadrado::Cuadrado(int l)
{
    float a = l * l;
    setArea(a);
}

class Rectangulo : public Figura
{
public:
    Rectangulo(int b, int h);
};

Rectangulo ::Rectangulo(int b, int h)
{
    float a = b * h;
    setArea(a);
}

class Triangulo : public Figura
{
public:
    Triangulo(int b, int h);
};

Triangulo::Triangulo(int b, int h)
{
    float a;
    a = (b * h) / 2;
    setArea(a);
}

/*
    Implementa la clase Cuadrado que hereda de Figura.
    Crear constructor de Cuadrado que herede del constructor de Figura.
    Asignar el área del cuadrado.
*/

/*
    Implementa la clase Rectángulo que hereda de Figura.
    Crear constructor de Rectángulo que herede del constructor de Figura.
    Asignar el área del Rectángulo.
*/

/*
    Implementa la clase Triángulo que hereda de Figura.
    Crear constructor de Triángulo que herede del constructor de Figura.
    Asignar el área del Triángulo.
*/

int main()
{

    Cuadrado s(5);
    cout << s.getArea() << endl; // 25
    Rectangulo r(5, 5);
    cout << r.getArea() << endl; // 25
    Triangulo t(5, 10);
    cout << t.getArea() << endl; // 25
    return 0;
}