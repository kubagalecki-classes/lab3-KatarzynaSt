#include <iostream>
#include <math.h>

class BytGeometryczny
{
public:
    BytGeometryczny() { std::cout << "Wywołano BYT GEOMETRYCZNY" << std::endl; };
    void virtual id()
    {
        std::cout << "Wywołano funkcję void id w BYCIE GEOMETRYCZNYM" << std::endl;
    };
    virtual ~BytGeometryczny() { std::cout << "Zniszczono BYT GEOMETRYCZNY" << std::endl; };
};

class Figura : public BytGeometryczny
{
public:
    Figura() : pole{14} { std::cout << "Wywołano jakąś figurę" << std::endl; };

    Figura(double liczba)
    {
        this->pole = liczba;
        std::cout << "Pole figury = " << pole << std::endl;
    }
    double getPOLE() { return pole; }
    void   setPOLE(int nowePOLE) { pole = nowePOLE; }
    void virtual id()
    {
        std::cout << "Pole figury = " << pole << " typ figury = FIGURA" << std::endl;
    };

    virtual ~Figura() { std::cout << "Figura z pieca spadła i się roztrzaskała." << std::endl; }

private:
    double pole;
};

class Kwadrat : public Figura
{
private:
    double pole;

public:
    Kwadrat() : pole{18} { std::cout << "Pole kwadratu = " << pole << std::endl; };
    Kwadrat(double bok) : pole{bok * bok}
    {
        // dynamic_cast< Kwadrat& >(pole);
        std::cout << "Pole kwadratu = " << pole << std::endl;
    };

    void id() override
    {
        std::cout << "Pole figury = " << pole << ", typ figury = KWADRAT" << std::endl;
    };
    double getPOLE() { return pole; }
    double setBOK(int nowyBOK) { return pole = nowyBOK * nowyBOK; }

    virtual ~Kwadrat() { std::cout << "Kwadrat z pieca spadł i się roztrzaskał." << std::endl; }
};

void id(const Figura& K)
{
    // Kwadrat KK(25);
    return id(K);
    // return id(K);
}

class WektorFigur
{
public:
    WektorFigur(int const ilosc)
    {
        std::cout << "Został przywołany WEKTOR FIGUR" << std::endl;
        Figura* tab[1000];
        int     i = 0;
        for (i = 0; i < ilosc; i++) {
            tab[i] = new Figura(i);
        };
        int j;
        for (j = ilosc - 1; j < ilosc; j++) {
            std::cout << "Zostało zapisane " << j + 1 << " obiektów." << std::endl;
        }
        for (i = 0; i < ilosc; i++) {
            delete tab[i];

            //   void push(int DODATEK) { ilosc += DODATEK; };
        };
    };

    // double& operator[](unsigned int index) { return x[index]; }
};

class FabrykaFigur
{
public:
    FabrykaFigur(){

    };
};

int main()
{
    BytGeometryczny B;
    WektorFigur     WEKTOR(Kwadrat);
    // Kwadrat& new_kwadrat = dynamic_cast< Kwadrat& >();
    std::cout << std::endl;
    Figura* f = new Kwadrat{90};
    std::cout << std::endl;
    // E.id();
    f->id();
    delete f;
    // Figura b = static_cast< Figura >(E);
    // b.id();

    std::cout << std::endl << "Koniec wyliczanki, koniec main." << std::endl;
}