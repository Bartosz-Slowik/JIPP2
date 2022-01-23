//
// Created by ASUS on 23.01.2022.
//

#ifndef JIPP2_POLE_H
#define JIPP2_POLE_H


class Pole {
protected:
    int liczba;
    bool mina;
    bool odkryto;
    bool flaga;

public:
    Pole();

    int getLiczba() const;

    void setLiczba(int l);

    void setMina(bool mina);

    bool isMina() const;

};






#endif //JIPP2_POLE_H
