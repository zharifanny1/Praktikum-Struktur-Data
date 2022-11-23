#ifndef Array1D_
#define Array1D_

// One-dimensional arrays.

#include <iostream>
#include"xcept.h"
using namespace std;

template <class T> class Array1D {
  template <class A>
  friend ostream &operator<<(ostream &out, const Array1D<A> &x);

public:
  Array1D(int size = 0);
  Array1D(const Array1D<T> &v);
  ~Array1D() { delete[] element; }
  T &operator[](int i) const;
  int Size() { return size; }
  Array1D<T> &operator=(const Array1D<T> &v);
  Array1D<T> operator+() const;
  Array1D<T> operator+(const Array1D<T> &v) const;
  Array1D<T> operator-() const;
  Array1D<T> operator-(const Array1D<T> &v) const;
  Array1D<T> operator*() const;
  Array1D<T> operator*(const Array1D<T> &v) const;
  Array1D<T> &operator+=(const T &x);
  Array1D<T> &ReSize(int sz);

private:
  int size;
  T *element;
};

template <class T> Array1D<T>::Array1D(int sz) {
  size = sz;
  element = new T[sz];
}

template <class T> Array1D<T>::Array1D(const Array1D<T> &v) {
  size = v.size;
  element = new T[size];
  for (int i = 0; i < size; i++) {
    element[i] = v.element[i];
  }
}

template <class T> T &Array1D<T>::operator[](int i) const { return element[i]; }

template <class T> Array1D<T> &Array1D<T>::operator=(const Array1D<T> &v) {
  if (this != &v) {
    size = v.size;
    delete[] element;
    element = new T[size];
    for (int i = 0; i < size; i++) {
      element[i] = v.element[i];
    }
  }
  return *this;
}

template <class T> Array1D<T> Array1D<T>::operator+(const Array1D<T> &v) const {
  Array1D<T> w(size);
  for (int i = 0; i < size; i++) {
    w.element[i] = element[i] + v.element[i];
  }
  return w;
}

template <class T> Array1D<T> Array1D<T>::operator-(const Array1D<T> &v) const {
  Array1D<T> w(size);
  for (int i = 0; i < size; i++) {
    w.element[i] = element[i] - v.element[i];
  }
  return w;
}

template <class T> Array1D<T> Array1D<T>::operator-() const {
  Array1D<T> w(size);
  for (int i = 0; i < size; i++) {
    w.element[i] = -element[i];
  }
  return w;
}

template <class T> Array1D<T> Array1D<T>::operator*(const Array1D<T> &v) const {
  Array1D<T> w(size);
  for (int i = 0; i < size; i++) {
    w.element[i] = element[i] * v.element[i];
  }
  return w;
}

template <class T> Array1D<T> &Array1D<T>::operator+=(const T &x) {
  for (int i = 0; i < size; i++) {
    element[i] += x;
  }
  return *this;
}

template <class T> Array1D<T> &Array1D<T>::ReSize(int sz) {
  delete[] element;
  size = sz;
  element = new T[size];
  return *this;
}

template <class T> ostream &operator<<(ostream &out, const Array1D<T> &x) {
  for (int i = 0; i < x.size; i++) {
    out << x.element[i] << " ";
  }
  return out;
}

#endif
