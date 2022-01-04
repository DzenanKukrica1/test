template <typename broj, typename ulaz>
class Linear_Regression
{
private:
    broj Broj1;
    broj Broj2;

public:
    void fit(std::vector<std::vector<Z>> dataset)
    {
        estimate_coef(dataset[0], dataset[1], Broj2, Broj1);
    }
    ulaz predikcija(const ulaz& test_data)
    {
        return Broj1 + (Broj2 * test_data);
    }
};

//ovo je najjednostavnije sto sam skontao. Znam da nije wow ali to je to c