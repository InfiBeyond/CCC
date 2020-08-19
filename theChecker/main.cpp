#include <iostream>

using namespace std;
void compare(string w, string r,int i = 0)
{
    if(i == w.length())
    {
        cout << "OK";
        return;
    }
    if(w.substr(i,1)!= r.substr(i,1))
    {
        cout << w.substr(i,1)<<1<<" "<<r.substr(i,1);
        cout << "WRONG " << w.substr(i,w.length()-i);
        return;
    }

    compare(w,r,++i);
}

int main()
{
    string para1 = "Alimentation: le Nutri-Score pousse à acheter des produits plus sains";
    string para2 = "Les consommateurs semblent enclins à changer leurs habitudes de consommation en fonction de l'affichage des qualités nutritionnelles des produits.";
    string para3 = "On le pressentait. Une récente étude de l'institut Nielsen vient d'en apporter la preuve: le Nutri-Score, aussi appelé système 5 couleurs, qui attribue des valeurs allant de A à E à des produits en fonction de leur qualité nutritionnelle, commence à modifier le comportement d'achat des consommateurs. Pourtant, ce système d'étiquetage visant à favoriser les articles les plus sains n'a que deux ans d'existence, et, en vertu d'une réglementation européenne, il n'est pour l'heure que facultatif. Actuellement, environ 2 000 industriels apposent le logo sur leurs produits.";
    string para4 = "En 2019, les produits étiquetés A et B (les plus vertueux, donc, mais qui ne représentent aujourd'hui que 31% des dépenses totales des consommateurs) ont vu leurs ventes progresser de respectivement 1% et 0,8%.";
    string para5 = "Les produits classés E progressent aussi. A l'inverse, les produits estampillés C et D, eux, reculent de 1,1% et 0,2% ette année, précise l'étude, qui souligne aussi que les moins de 35 ans sont bien plus sensibles à l'effet Nutri-Score (20%  prêtent attention) que les plus de 65 ans (seulement 9%).";
    string para6 = "Tout serait idyllique dans cette étude si les articles classés E, cette fois, n'étaient pas, eux aussi, … en hausse. Rappelons que l'on trouve dans cette catégorie les crèmes fraîches, les glaces, les gâteaux pour le goûter, le chocolat, la pâte à tartiner, etc.";
    string para7 = "Un paradoxe, en apparence seulement : « si les clients regardent plus qu'avant le Nutri-Score, et si 13 millions de Français ont téléchargé l'application de coaching alimentaire Yuka, 50 millions ne l'ont pas téléchargée », rappelle Emmanuel Fournet, qui pointe « l'importance persistante de la dimension plaisir dans les achats ». Le Nutri-Score avance. La gourmandise résiste.";
    int num;
    cout << "Enter the paragraph number:" << endl;
    string write;
    for(int i = 1; i >0; i++)
    {
        cin >> num;
        cin.ignore();
        if(num == 0)
            break;
        cout << "Enter paragraph:" << endl;
        getline(cin, write);
        if(num == 1)
            compare(write,para1);
        else if(num == 2)
            compare(write,para2);
        else if(num == 3)
            compare(write,para3);
        else if(num == 4)
            compare(write,para4);
        else if(num == 5)
            compare(write,para5);
        else if(num == 6)
            compare(write,para6);
        else if(num == 7)
            compare(write,para7);
    }


    return 0;
}
