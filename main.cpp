//
//  main.cpp
//  TD2 cpp

/*ex:1
 #include<iostream>
using namespace std;
int numero_appel=0;
void conteur_appel(){
 //( sans static il maffiche appel numero 1 dans tous les ligne )
    numero_appel++;

}
int main(){
    conteur_appel();
    conteur_appel();
    conteur_appel();
    conteur_appel();
    conteur_appel();
    cout<<"appel numero:"<<numero_appel<<endl;
    return 0;
    
}
*/










/*
 exercice : 2
 #include<iostream>
using namespace std;
int multiplede2(int num){
    return num % 2 == 0;
}
int multiplede3(int num){

    return num % 3 == 0;
}
int main (){
    int num=0;
    cout<<"entrer la valeur de num"<<endl;
    cin>>num;
    if(multiplede2(num)){
        cout<<"le num que vous avez saisi est un multiple de 2 et paire"<<endl;
    }
    if(multiplede3(num)){
        cout<<"le num que vous avez saisi est un multiple de 3 et paire"<<endl;
    }
    if(multiplede2(num) && multiplede3(num)){
        cout<<"le num que vous avez saisi est devisible par 6"<<endl;
    }
    while (!multiplede2(num)&& !multiplede3(num)){
        cout<<"tapez un autre num ce num est pas un multiple de 2 ou 3"<<endl;
        return 0;
    }
    return 0;
}*/









/*exercice 3

 #include<iostream>
 using namespace std;
 int main(){
     int Tab[10];
     int min=0 , max=0;
     int i;
     for(i=0;i<10;i++){
         cout<<"entrez le nombre i"<<i<<":"<<endl;
         cin>>Tab[i];
         
     }
     min=Tab[i];
     max=Tab[i];
     for (i=0;i<10;i++){
         if(max<Tab[i]){
             max=Tab[i];
         }
         if(min>Tab[i]){
             min=Tab[i];}
     }   cout<<"le max est :"<<max<<endl;
     cout<<"le min est:"<<min<<endl;
         return 0;
 }

 #include <iostream>
 using namespace std;
 int main(){
     int Tab[10];
     int min=0 , max=0;
     int *p;
     for(p=Tab;p<Tab+10;p++){
         
     } cout<<"le max est :"<<max<<endl;
 cout<<"le min est:"<<min<<endl;
     return 0;
 }
*/









/* exercice 4
 
 #include<iostream>
 #include<stdlib.h>

 using namespace std;
 int main(){
     int espace;
     cout<<"entrez l'espace que vous avez besoin "<<endl;
     cin>>espace;
     int i;
     int *tab = new int [espace];
     for(i=0;i<espace;i++){
         cout<<"enter la valeur que vous voulez"<<i<<endl;
         cin>>tab[i];
     }
     int *tabcarre= new int [espace];
     for(i=0;i<espace;i++){
         tabcarre[i]=tab[i]*tab[i];
         cout<<"la tab carré de "<<tab[i]<<"est"<<tabcarre[i]<<endl;
     }
     delete[] tabcarre;
     delete[] tab;
     return 0;
 }*/









/*
 exercice 5
 
 #include <iostream>
 #include <cstdlib>

 using namespace std;

 int main() {
     int a;
     int* p_a;
     cout << "Entrez un entier : " << endl;
     cin >> a;

     int& ref_a = a;
     p_a = &a;

     cout << "La variable a est : " << a << endl;
     cout << "La variable ref_a est : " << ref_a << endl;
     cout << "La variable p_a est : " << p_a << endl;
     cout << "L'adresse de a est : " << &a << endl;
     cout << "L'adresse de ref_a est : " << &ref_a << endl;
     cout << "L'adresse de p_a est : " << &p_a << endl;
     cout << "La valeur du pointeur p_a est : " << *p_a << endl;

     return 0;
 }
*/








/*
 exercice 6
 #include<iostream>
#include<stdlib.h>
using namespace std;
void incrementer(int *a ){
    (*a)++;
    
}
void permuter(int *x , int *y){
    int p=*x;
    *x=*y;
    *y=p;
    
}
int main(){
    int x , y;
    cout<< " enter x"<<x<<endl;
    cin>>x;
    cout<< " enter y"<<y<<endl;
    cin>>y;
    incrementer(&x);
    cout << "Après incrementer, x = " << x << endl;
    permuter(&x, &y);
    cout << "Après permuter x :"<<x<<" et y "<<y<<endl;
    return 0 ;
}
 et pour 2 on change *a par ladresse
 
 #include <iostream>
 using namespace std;

 void incrementer(int &a) {
     a++;
 }

 void permuter(int &x, int &y) {
     int temp = x;
     x = y;
     y= temp;
 }
 int main(){
     int x , y;
     cout<< " enter x"<<x<<endl;
     cin>>x;
     cout<< " enter y"<<y<<endl;
     cin>>y;
     incrementer(&x);
     cout << "Après incrementer, x = " << x << endl;
     permuter(&x, &y);
     cout << "Après permuter x :"<<x<<" et y "<<y<<endl;
     return 0 ;
 }
 
*/








/*
 ex 7
 #include <iostream>
 using namespace std;
 int main() {
     const int size = 10;
     int numbers[size];
   cout << "Veuillez saisir 10 entiers : " << endl;
     for (int i = 0; i < size; i++) {
         cin >> numbers[i];
     }


     bool  no_underscore_echanger;
     for (int i = 0; i < size - 1; i++) {
          no_underscore_echanger = false;
         for (int j = 0; j < size - i - 1; j++) {
             if (numbers[j] > numbers[j + 1]) {
                 int temp = numbers[j];
                 numbers[j] = numbers[j + 1];
                 numbers[j + 1] = temp;
                no_underscore_echanger= true;
             }
         }

         if (! no_underscore_echanger) {
             break;
         }
     }
 cout << "Le tableau trié par ordre croissant est : ";
     for (int i = 0; i < size; i++) {
     cout << numbers[i] << " ";
     }
 cout << endl;

     return 0;
 }
*/









/*
 ex 8
 #include <iostream>
 using namespace std;

 class Complexe {
 private:
     double partieReelle;
     double partieImaginaire;

 public:
     Complexe(double reelle, double imaginaire) : partieReelle(reelle), partieImaginaire(imaginaire) {}

     void afficher() {
         cout << partieReelle;
         if (partieImaginaire >= 0) {
             cout << " + " << partieImaginaire << "i" << endl;
         } else {
             cout << " - " << -partieImaginaire << "i" << endl;
         }
     }

     Complexe addition(const Complexe& autre) {
         double reelle = partieReelle + autre.partieReelle;
         double imaginaire = partieImaginaire + autre.partieImaginaire;
         return Complexe(reelle, imaginaire);
     }

     Complexe soustraction(const Complexe& autre) {
         double reelle = partieReelle - autre.partieReelle;
         double imaginaire = partieImaginaire - autre.partieImaginaire;
         return Complexe(reelle, imaginaire);
     }

     Complexe multiplication(const Complexe& autre) {
         double reelle = (partieReelle * autre.partieReelle) - (partieImaginaire * autre.partieImaginaire);
         double imaginaire = (partieReelle * autre.partieImaginaire) + (partieImaginaire * autre.partieReelle);
         return Complexe(reelle, imaginaire);
     }

     Complexe division(const Complexe& autre) {
         double denominateur = (autre.partieReelle * autre.partieReelle) + (autre.partieImaginaire * autre.partieImaginaire);
         double reelle = ((partieReelle * autre.partieReelle) + (partieImaginaire * autre.partieImaginaire)) / denominateur;
         double imaginaire = ((partieImaginaire * autre.partieReelle) - (partieReelle * autre.partieImaginaire)) / denominateur;
         return Complexe(reelle, imaginaire);
     }
 };

 int main() {
    double reelle1, imaginaire1, reelle2, imaginaire2;
   cout << "Saisissez la partie réelle du premier nombre complexe : ";
     cin >> reelle1;
 cout << "Saisissez la partie imaginaire du premier nombre complexe : ";
     cin >> imaginaire1;
 cout << "Saisissez la partie réelle du deuxième nombre complexe : ";
     cin >> reelle2;
  cout << "Saisissez la partie imaginaire du deuxième nombre complexe : ";
     cin >> imaginaire2;
    Complexe complexe1(reelle1, imaginaire1); Complexe complexe2(reelle2, imaginaire2);
    int choix;
 cout << "Choisissez une opération :\n";
 cout << "1. Addition\n2. Soustraction\n3. Multiplication\n4. Division\n5. Égalité\n";
     cin >> choix;
    Complexe resultat(0, 0);
    switch (choix) { case 1:
            resultat = complexe1.addition(complexe2);
            break; case 2:
            resultat = complexe1.soustraction(complexe2);
            break; case 3:
            resultat = complexe1.multiplication(complexe2);
            break; case 4:
            resultat = complexe1.division(complexe2);
            break; case 5:
            if (reelle1 == reelle2 && imaginaire1 == imaginaire2) {
            cout << "Les deux nombres complexes sont égaux." << endl;
            } else {
            cout << "Les deux nombres complexes ne sont pas égaux." << endl;
            }
            break; default:
            cout << "Opération invalide." << endl;
            return 1; }
    if (choix != 5) {
        cout << "Résultat de l'opération : "; resultat.afficher();
    }
    return 0; }

*/





















/*
 EX 11
 #include <iostream>
 #include <cmath>
 using namespace std;

 class vecteur3d {
 private:
     float x, y, z;

 public:
     vecteur3d(float px=0,float py=0, float pz=0) : x(px), y(py), z(pz) {}

     void afficher() {
         cout << "(" << x << ", " << y << ", " << z << ")" <<endl;
     }

     vecteur3d somme(vecteur3d v) {
         vecteur3d resultat(x + v.x, y + v.y, z + v.z);
         return resultat;
     }

     float produitScalaire(vecteur3d v) {
         return x * v.x + y * v.y + z * v.z;
     }

     bool coincide(vecteur3d v) {
         return x == v.x && y == v.y && z == v.z;
     }

     
     float norme() {
         return sqrt(x*x + y*y + z*z);
     }

     vecteur3d normax(vecteur3d v) {
         if (norme() > v.norme()) {
             return *this;
         } else {
             return v;
         }
     }
 };

 int main() {
     vecteur3d v1(1, 2, 3);
     vecteur3d v2(4, 5, 6);

     cout << "Vecteur v1: ";
     v1.afficher();
     cout << "Vecteur v2: ";
     v2.afficher();

     vecteur3d sum = v1.somme(v2);
     cout << "Somme des vecteurs: ";
     sum.afficher();

     cout << "Produit scalaire: " << v1.produitScalaire(v2) << endl;
     cout << "v1 coincide avec v2? " << (v1.coincide(v2) ? "Oui" : "Non") << endl;

     vecteur3d maxNorm = v1.normax(v2);
     cout << "Vecteur avec la plus grande norme: ";
     maxNorm.afficher();

     return 0;
 }

*/















/* ex 12
 #include <iostream>
 using namespace std;
 class Test {
 public:
     static int callCount;

     void call() {
         callCount++;
     }
 };

 int Test::callCount = 0;

 int main() {
     Test test;
     test.call();
     test.call();
     test.call();
 cout << "Le nombre d'appels à la fonction 'call' est : " << Test::callCount << endl;

     return 0;
 }

*/













/*EX13
 #ifndef POINT_H
 #define POINT_H

 class Point {
 private:
     float x;
     float y;

 public:
     Point(float xCoord, float yCoord);
     void deplace(float dx, float dy);
     void affiche();
 };

 #endif

 #include <iostream>
 #include "Point.h"

 Point::Point(float xCoord, float yCoord) {
     x = xCoord;
     y = yCoord;
 }

 void Point::deplace(float dx, float dy) {
     x += dx;
     y += dy;
 }

 void Point::affiche() {
     std::cout << "Les coordonnées cartésiennes du point sont : (" << x << ", " << y << ")" << std::endl;
 }
 #include <iostream>
 #include "Point.h"

 int main() {
     Point p(2.5, 3.8);
     p.affiche();

     p.deplace(1.2, -0.7);
     p.affiche();

     return 0;
 }
*/






/*EX14

 #include <iostream>
 #include <vector>

 class Pile {
 private:
     std::vector<int> elements;

 public:
     // Constructeur pour initialiser la pile
     Pile() {}

     // Empiler un élément sur la pile
     void push(int valeur) {
         elements.push_back(valeur);
     }

     // Dépiler un élément de la pile
     int pop() {
         if (isEmpty()) {
             std::cerr << "Erreur: La pile est vide!" << std::endl;
             return -1;  // Retourne une valeur d'erreur
         }
         int valeur = elements.back();
         elements.pop_back();
         return valeur;
     }

     // Vérifier si la pile est vide
     bool isEmpty() const {
         return elements.empty();
     }
 };

 int main() {
     Pile p1, p2;

     // Empiler des valeurs sur p1
     p1.push(5);
     p1.push(10);
     p1.push(15);

     // Empiler des valeurs sur p2
     p2.push(20);
     p2.push(25);
     p2.push(30);

     // Dépiler et afficher les éléments de p1
     std::cout << "Éléments de pile p1:" << std::endl;
     while (!p1.isEmpty()) {
         std::cout << p1.pop() << std::endl;
     }

     // Dépiler et afficher les éléments de p2
     std::cout << "Éléments de pile p2:" << std::endl;
     while (!p2.isEmpty()) {
         std::cout << p2.pop() << std::endl;
     }

     return 0;
 }

*/











/*EX15
 
 #include <iostream>
 using namespace std;

 class Fichier {
 private:
     char* P;
     int longueur;

 public:
     Fichier(int taille);
     Fichier();
     void Creation();
     void Remplit();
     void Affiche();
 };

 Fichier::Fichier(int taille) {
     P = new char[taille];
     longueur = taille;
 }

 Fichier::Fichier() {
     delete[] P;
 }

 void Fichier::Creation() {
 }

 void Fichier::Remplit() {
     for (int i = 0; i < longueur; i++) {
         P[i] = 'k' + (i % 26);
     }
 }

 void Fichier::Affiche() {
     for (int i = 0; i < longueur; i++) {
         cout << P[i];
     }
     cout << endl;
 }

 int main() {
     Fichier* fichier = new Fichier(10);

     fichier->Creation();
     fichier->Remplit();
     fichier->Affiche();

     delete fichier;

     return 0;
 }
 */










/*EX16
#include <iostream>

using namespace std;
struct Element {
    int valeur;
    Element* suivant;
};
class Liste {
private:
    Element* premier;

public:
    Liste() {
        premier = nullptr;
    }
    void ajouterElement(int valeur) {
        Element* nouvelElement = new Element;
        nouvelElement->valeur = valeur;
        nouvelElement->suivant = premier;
        premier = nouvelElement;
    }
    void supprimerElement() {
        if (premier != nullptr) {
            Element* elementASupprimer = premier;
            premier = premier->suivant;
            delete elementASupprimer;
        }
    }
    void afficherListe() {
        Element* elementCourant = premier;
        while (elementCourant != nullptr) {
            cout << elementCourant->valeur << " ";
            elementCourant = elementCourant->suivant;
        }
        cout << endl;
    }
};

int main() {
    Liste maListe;

    maListe.ajouterElement(87);
    maListe.ajouterElement(9);
    maListe.ajouterElement(1234);

    maListe.afficherListe();

    maListe.supprimerElement();

    maListe.afficherListe();

    return 0;
}
 */






/*EX17*/
#include <iostream>
#include <string>
using namespace std;
int main() {
    string dateEtHeure;

    cout << "Entrez une date et une heure sous la forme JJMMAAAAHHNN: ";
    cin >> dateEtHeure;
    if (dateEtHeure.length() != 12) {
    cout << "Erreur: format incorrect." << endl;
    }
    char jour[3] = { dateEtHeure[0], dateEtHeure[1], '\0' };
    char mois[3] = { dateEtHeure[2], dateEtHeure[3], '\0' };
    char annee[5] = { dateEtHeure[4], dateEtHeure[5], dateEtHeure[6], dateEtHeure[7], '\0' };
    char heure[3] = { dateEtHeure[8], dateEtHeure[9], '\0' };
    char minutes[3] = { dateEtHeure[10], dateEtHeure[11], '\0' };
    cout << "Jour: " << jour << endl;
    cout << "Mois: " << mois << endl;
    cout << "Année: " << annee << endl;
    cout << "Heure: " << heure << endl;
    cout << "Minutes: " << minutes <<endl;

    return 0;
}
 
 
 
