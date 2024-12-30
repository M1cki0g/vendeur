#include <iostream>

using namespace std;

class date{
protected:
    int jour;
    int mois;
    int annee;
public:
    date(int jour=12 ,int mois=12 ,int annee=2000){
    cout<<"date constructor"<<endl;
    this->jour=jour;
    this->mois=mois;
    this->annee=annee;
    }
    virtual void afficher(){
    cout<<"Jour:"<<jour<<endl;
    cout<<"Mois:"<<mois<<endl;
    cout<<"Annee:"<<annee<<endl;
    }
};

class employer{
protected:
    int code;
string nom;
int nbr_hr;
int taux_hr;
date d;
public:
    employer(int code=1 , string nom="" , int nbr_hr=1 , int taux_hr=1 ,date d=date()){
    cout<<"employer constructor"<<endl;
    this->nom = nom;
    this->code=code;
    this->nbr_hr=nbr_hr;
    this->taux_hr=taux_hr;
    }

    void afficher(){
    cout<<code<<endl;
    cout<<nom<<endl;
    cout<<nbr_hr<<endl;
    cout<<taux_hr<<endl;
    d.afficher();
    }
    void calc(){
    cout<<"Calc: "<<nbr_hr*taux_hr<<endl;
    }

};

class vendeur:public employer{
float mt;
float pourcentage;
//employer e;
public:
    vendeur(float mt=0 , float pourcentage=0,int code = 1, string nom = "", int nbr_hr = 1, int taux_hr = 1, date d = date()){
        //employer(code, nom, nbr_hr, taux_hr, d);
        this->mt = mt;
        this->pourcentage = pourcentage;
        cout<<"Vendeur constructor"<<endl;

      }

    void afficher(){

    cout<<"commission: "<<mt*pourcentage<<endl;
    }

    void calc_sal(){
    cout<<"calc_sal: "<<(nbr_hr*taux_hr)+(mt*pourcentage)<<endl;
    }

};

int main()
{
    date d(10 , 2 , 2024);
    d.afficher();
    employer e(1, "John Doe", 10, 20, d);
    e.afficher();
    e.calc();
    vendeur v;
    //v.afficher();

    return 0;
}
