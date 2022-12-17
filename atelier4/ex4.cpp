#include<iostream>
#include<list>
#include<string>
#include<iterator>
#include<sstream> 
#include <functional>

using namespace std;
class person{
    public:
    string nom,prenom, fname;
    int age;
    
    person(string nom, string prenom , int age){
        this->nom = nom; 
        this->prenom= prenom;
        this->age = age;
    }
};

int main(){
    list<person> maListe;
    string name, nname; 

    int age1;
    int N;
    cout<<"Combier de pernonne  ";
    cin>>N;
    cout<<"Entrer le nom , Prenom , age de personne : \n ";
    for(int i=0; i<N; i++){
        cout<<"Le Nom de personne "<<i+1<<"\t";
        cin>>name;
        cout<<"Le Prenom de personne "<<i+1<<"\t";
        cin>>nname;
        cout<<"Lage de personne "<<i+1<<"\t";
        cin>>age1;
        maListe.push_back(person(name,nname,age1));
    }
    

    std::list<person>::iterator it ;
    
    maListe.sort( [](const person& p1, const person& p2)
    {
    return p1.nom < p2.nom;
    });
    
    for(it = maListe.begin(); it != maListe.end(); ++it){
        cout<<it->nom<<"\t";
        cout<<it->prenom<<"\t";
        cout<<it->age<<"\n"; 
    }
    return 0;
}