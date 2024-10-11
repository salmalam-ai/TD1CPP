
#ifndef COMPLEX2D_H
#define COMPLEX2D_H

#include <iostream>

class Complex2D {
private:
    double re;
    double im;

public: 
    Complex2D(); 
    Complex2D(double r, double i); 
    Complex2D(double valeur); 
    Complex2D(const Complex2D& other); 

    double getReal() const;
    double getImag() const;
    void setReal(double r);
    void setImag(double i);

    Complex2D add(const Complex2D& other) const;
    Complex2D minus(const Complex2D& other) const;
    Complex2D multiply(const Complex2D& other) const;
    Complex2D divide(const Complex2D& other) const;
    Complex2D inverse() const;
    Complex2D oppose() const;

    bool inferieur(const Complex2D& other) const;
    bool superieur(const Complex2D& other) const;
    
    void display() const;
};

#endif 
