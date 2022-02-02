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

    bool isOdkryto() const;

    void setOdkryto(bool odkryto);

    void setFlaga(bool flaga);

    bool isFlag();

    ~Pole();

};





