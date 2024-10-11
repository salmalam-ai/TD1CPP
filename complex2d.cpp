
#include "complexe2d.h"
#include <stdexcept>
#include <cmath>


Complex2D::Complex2D() : re(0), im(0) {}
Complex2D::Complex2D(double r, double i) : re(r), im(i) {}
Complex2D::Complex2D(double valeur) : re(valeur), im(valeur) {}
Complex2D::Complex2D(const Complex2D& other) : re(other.re), im(other.im) {}

double Complex2D::getReal() const { return re; }
double Complex2D::getImag() const { return im; }
void Complex2D::setReal(double r) { re = r; }
void Complex2D::setImag(double i) { im = i; }


Complex2D Complex2D::add(const Complex2D& other) const {
    return Complex2D(re + other.re, im + other.im);
}


Complex2D Complex2D::minus(const Complex2D& other) const {
    return Complex2D(re - other.re, im - other.im);
}


Complex2D Complex2D::multiply(const Complex2D& other) const {
    return Complex2D(re * other.re - im * other.im, 
                     re * other.im + im * other.re);
}

Complex2D Complex2D::divide(const Complex2D& other) const { // en utilisant le conjugué 
    double denom = other.re * other.re + other.im * other.im;
    if (denom == 0) {
         std::cout << "Impossible de calculer la division: le nombre complexe est nul." << std::endl; 
    }
    return Complex2D((re * other.re + im * other.im) / denom, 
                     (im * other.re - re * other.im) / denom);
}



Complex2D Complex2D::inverse() const {
    double denom = re * re + im * im;
    if (denom == 0) {
        std::cout << "Impossible de calculer l'inverse : le nombre complexe est nul." << std::endl; 
    }
    return Complex2D(re / denom, -im / denom);
}

Complex2D Complex2D::oppose() const {
    return Complex2D(-re, -im);
}


// pour le module 
bool Complex2D::inferieur(const Complex2D& other) const {
    double norm1 = std::sqrt(re * re + im * im);
    double norm2 = std::sqrt(other.re * other.re + other.im * other.im);
    return norm1 < norm2;
}

bool Complex2D::superieur(const Complex2D& other) const {
    double norm1 = std::sqrt(re * re + im * im);
    double norm2 = std::sqrt(other.re * other.re + other.im * other.im);
    return norm1 > norm2;
}

void Complex2D::display() const {
    std::cout << re << " + " << im << "i" << std::endl;
}


