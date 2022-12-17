#include<iostream>
using namespace std;

//declaration de la classe 
class complex{
    //visibilité de la classs
    public:
    //les attributs
    float real;
    float img;


    //Constructeur avec des parametres
    complex(int r=0, int i=0){
        real = r;
        img = i;
    }
    // La fonction operator + qui permet de faire l'addition
    /*Ce code permet d'effectuer l'opération d'addition entre deux objets complexes.
    Plus précisément, il déclare une fonction appelée “operator +” qui prend un objet complexe en argument et qui renvoie un autre objet complexe.
    La fonction initialise un objet complexe temporaire, “temp”, qui prend les valeurs des objets complexes en argument et ajoute leurs valeurs réelles et imaginaires.
    La fonction retourne ensuite cet objet complexe temporaire*/
    complex operator + (complex x){
        complex temp;
        temp.real = real + x.real;
        temp.img = img + x.img;
        return temp;
    }
    // La fonction operator - qui permet de faire la sustraction
    complex operator - (complex x){
        complex temp;
        temp.real = real - x.real;
        temp.img = img - x.img;
        return temp;
    }
    // La fonction operator * qui permet de faire la multiplication
    complex operator * (complex x){
        complex temp;
        temp.real = real * x.real;
        temp.img = img * x.img;
        return temp;
    }
    // La fonction operator / qui permet de faitre la division
    complex operator / (complex x){
        complex temp;
        temp.real = real / x.real;
        temp.img = img / x.img;
        return temp;
    } 

};
int main(){
    // Demande de la partrie real et imaginaire de 1er nombre
    complex c1, c2, c3;
    cout << "Entrer la valeur real du 1er nombre : " <<endl;
    cin >> c1.real;
    cout << "Entrer la valeur imaginaire de 1er nombre : " <<endl;
    cin >> c1.img;
    // Demande de la partrie real et imaginaire de 2em nombre
    cout << "Entrer la valeur real de 2em nombre : " <<endl;
    cin >> c2.real;
    cout << "Entrer la valeur imaginairecls de 2em nombre : " <<endl;
    cin >> c2.img;
    // Demande d'operateur 
    char ope;
    cout << "Quel opertion choisissez vous ?" << endl;
    cout << "L'addition + ou la sustraction - ou la multiplication * ou la devision" << endl;
    cin >> ope;

    //L'utilisation de la boucle SWITCH pour la selection d'operateur
    switch (ope){
        case '+' : 
            c3 = c1 + c2;
            cout << c3.real <<" + i" << c3.img;
            break;
        case '-' : 
            c3 = c1 - c2;
            cout << c3.real <<" - i" << c3.img;
            break;
        case '*' : 
            c3 = c1 * c2;
            cout << c3.real <<" * i" << c3.img;
            break;
        case '/' : 
            c3 = c1 / c2;
            cout << c3.real <<" / i" << c3.img;
            break;
        default:
            cout << "L'operation qui vous choisissez n'existe pas dans le menu";
         break;
    }

    return 0;
}