
#include <iostream>
#include <cmath>
using namespace std;

void oddelovac1() 
{//akcia
  cout << "---------------------------------------------------------------------------------------" << endl;
};
void oddelovac2() 
{//statystiky
  cout << "(((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((" << endl << endl;
};
void oddelovac3() 
{//vysvetlivky
  cout << "???????????????????????????????????????????????????????????????????????????????????????" << endl << endl;
};
void oddelovac4() 
{//info/text
  cout << "<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<" << endl << endl;
};
void oddelovac5() 
{//problem
  cout << "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX" << endl << endl;
};
void staty(int hodiny, int sila, int peniaze, int unava, int hlad) 
{//staty
  oddelovac2();
  cout << "Statistiky:" << endl << endl;
  cout << "Cas:" << hodiny / 24 << " dni " << hodiny % 31 << " hodin" << endl;
  cout << "Sila:" << sila << " %" << endl;
  cout << "Peniaze:" << peniaze << " EUR" << endl;
  cout << "Unava:" << unava << " %" << endl;
  cout << "Hlad:" << hlad << " %" << endl << endl;
  oddelovac2();
}
void olympiada(int vstupenkax, int vstupenka, int prehra)
{
  oddelovac3();
  cout << "Dnes je tvoj velky den!" << endl << "Cely mesiac si sa pripravoval a je na case otestovat tvoju silu a taktiku." << endl 
  << "Tvojim cielom je dohodit gulu co najdalej." << endl << "Ale aby sa tak stalo musis zhodnotit svoju situaciu a hodit gulu spravne." << endl 
  << "To znamena ze musis zistit alebo odhadnut tieto informacie:" << endl 
  << "Silu, vietor, uhol hodu, vahu gule, poradie kolkaty budes hadzat a vysledky tvojich protivnikov." << endl;
  oddelovac3();
  oddelovac4();
  cout << "-Dobry den!-" << endl << "-Olympijsku vstupenku prosim!-" << endl << "Odovzdat olympijsku vstupenku:" << endl;
  oddelovac4();
  oddelovac1();
  cin >> vstupenkax;
  if (vstupenkax == 1)
  {
    if (vstupenka == 0)
    {
      cout << "Prehral si!" << endl << "Nekupil si si vstupenku!";
      prehra = 1;
    }
  }
  oddelovac1();

};

int main()
{
  cout << "ODPORUCAM HRAT NA FULLSCREEN" << endl;
  int prehra = 0;
  int hra = 0;
  int vyber = 0;
  int hodiny = 744;
  int sila = 0;
  int peniaze = 100;
  int unava = 0;
  int hlad = 0;
  int vstupenkax = 0;
  int vstupenka = 0;
  oddelovac4();
  cout << "Priprav sa na olympyadu!" << endl << endl;
  cout << "START" << endl << "ODIST" << endl << endl << "stlac 1 aby si zacal" << endl << "stlac hocico ine aby si odisiel" << endl;
  oddelovac4();
  oddelovac1();
  cin >> hra;
  oddelovac1();
  if (hra == 1) 
  {
    oddelovac3();
    cout << "Vitaj v hre!" << endl;               
  }      
  else 
  {
    return 0;
  }     
  cout << endl << "Teraz ta prevediem touto hrou:" << endl << endl << "Cielom tejto hry je vyhrat olympiadu v hadzani tazkou gulou." << endl;
  cout << "Ma to vsak jeden hacik: Oympiada sa zacina uz o mesiac a ty si slaby ako pierko." << endl;
  cout << "A aby toho nebolo malo, tak si chudobny skoro ako bezdomovec. Ale ty mas plan!" << endl;
  cout << "Zarabaj vo svojej praci, plat za treningy a pripravuj sa." << endl << endl;
  oddelovac3();
  system("PAUSE");
  staty(hodiny, sila, peniaze, unava, hlad);
  system("PAUSE");    
  oddelovac3(); 
  cout << endl << "Toto su tvoje statystiky:" << endl << "Cas urcuje kolko casu ti este zostava do dna olympiady." << endl;
  cout << "Sila urcuje ako silny si. Odporucam zamerat sa hlavne na tuto statistiku lebo je velmi rozhodujuca." << endl;
  cout << "Peniaze urcuju kolko mas penazi. Pocas tohto mesiaca si nezabudni kupit olympijsku vstupenku za 2000 EUR kedze tato olympiada nie je zadarmo." << endl;
  cout << "Hlad urcuje ako hladny si. Ak je hlad na 100% zacne sa ti kazdym tahom zvisovat unava.";
  cout << "Aby si znizil hlad id do obchodu a kup si jedlo. A mozno aj nejake boosty. :)" << endl << endl;
  cout << "Ostatne dolezite podrobnosti budu vysvetlene priebezne pocas hry." << endl << endl;
  oddelovac3();
  system("PAUSE"); 
  staty(hodiny, sila, peniaze, unava, hlad);
  while (true) 
  {
    do 
    {
      if (hodiny < 1)
      {
        hodiny = 0;           
        olympiada(vstupenkax, vstupenka, vyber);
      }
      oddelovac4();
      cout << "Chces ist do prace na trening alebo spat?" << endl << endl;
      cout << "PRACA: stlac 1" << endl << "-10 hodin" << endl << "+200 EUR" << endl << "+10% unavy" << endl << "+40% hladu" << endl;
      cout << "Uberie sa ti 10 hodin z casu, zarobis si 200 EUR, unavis sa na dalsich 10% a vyhladnes o 40%" << endl << endl;
      cout << "TRENING: stlac 2" << endl << "-5 hodin" << endl << "-50 EUR" << endl << "+10% unavy" << endl << "+20% hladu" << endl;
      cout << "Uberie sa ti 5 hodin z casu, minies 50 EUR, unavis sa na dalsich 10% a vyhladnes o 20%" << endl << endl;
      cout << "SPANOK: stlac 3" << endl << "-7 hodin" << endl << "-50% unavy" << endl << "+50% hladu" << endl;
      cout << "Uberie sa ti 7 hodin casu, unava sa ti znizi o 50% a vyhladnes o 50%" << endl << endl;
      cout << "OBCHOD: stlac 4" << endl;
      oddelovac4();      
      oddelovac1();
      cin >> vyber;
      if (prehra == 1) 
      {
        vyber = 5;
      }
      oddelovac1();
      switch (vyber) 
      { 
        default:
         oddelovac5();
         cout << "Vyberaj len cisla 1,2,3,4! " << endl;
         oddelovac5();
         staty(hodiny, sila, peniaze, unava, hlad);   
         system("PAUSE");
        case 6: //CHEATCODE
         if (hodiny < 1)
         {
           hodiny = 0;
           oddelovac5();
           cout << "Cas ti vyprsal!" << endl;
           oddelovac5();
           staty(hodiny, sila, peniaze, unava, hlad);
           olympiada(vstupenkax, vstupenka, vyber);
         }
         hodiny = hodiny - 743;
         vstupenka = vstupenka + 1;
         break;
        case 5: //PREHRA
         hodiny = 744;
         sila = 0;
         peniaze = 100;
         unava = 0;
         hlad = 0;
         break;
        case 1://PRACA// 
         if (hodiny < 10) 
         {
           hodiny = 0;
           oddelovac5();
           cout << "Cas ti vyprsal!" << endl;
           oddelovac5();
           staty(hodiny, sila, peniaze, unava, hlad);           
           olympiada(vstupenkax, vstupenka, vyber);
         }
         if (unava >= 91) 
         {
           oddelovac5();
           cout << "Si moc unaveny!" << endl << "Chod spat alebo kup nieco proti unave v obchode" << endl;
           oddelovac5();
           staty(hodiny, sila, peniaze, unava, hlad);
           break;
         }                
         if (hlad >= 81) 
         {
           oddelovac5();
           cout << "Si moc hladny!" << endl << "Kup si jedlo" << endl;
           oddelovac5();
           staty(hodiny, sila, peniaze, unava, hlad);
           break;
         }
         hodiny = hodiny - 10;
         peniaze = peniaze + 200;
         unava = unava + 10;
         hlad = hlad + 20;
         staty(hodiny, sila, peniaze, unava, hlad);
         break;
        case 2://TRENING// 
         if (hodiny < 1) 
         {
           hodiny = 0;
           oddelovac5();
           cout << "Cas ti vyprsal!" << endl;
           oddelovac5();
           staty(hodiny, sila, peniaze, unava, hlad);           
           olympiada(vstupenkax, vstupenka, vyber);
         }              
         if (peniaze <= 50) 
         {                   
           oddelovac5();
           cout << "Nemas dostatok penazi!" << endl << "Chod do prace aby si ziskal peniaze." << endl;
           oddelovac5();
           staty(hodiny, sila, peniaze, unava, hlad);
           break;
         }                
         if (unava >= 91) 
         {
           oddelovac5();
           cout << "Si moc unaveny!" << endl << "Chod spat alebo kup nieco proti unave v obchode." << endl;
           oddelovac5();
           staty(hodiny, sila, peniaze, unava, hlad);
           break;
         }                
         if (hlad >= 61) 
         {                    
           oddelovac5();
           cout << "Si moc hladny!" << endl << "Kup si jedlo" << endl;
           oddelovac5();
           staty(hodiny, sila, peniaze, unava, hlad);
           break;
         }                
         hodiny = hodiny - 5;
         peniaze = peniaze - 50;
         sila = sila + 1;
         unava = unava + 10;
         hlad = hlad + 40;
         staty(hodiny, sila, peniaze, unava, hlad);
         break;
        case 3://POSTEL//               
         if (hodiny < 1) 
         {
           hodiny = 0;
           oddelovac5();
           cout << "Cas ti vyprsal!" << endl;
           oddelovac5();
           staty(hodiny, sila, peniaze, unava, hlad);
           olympiada(vstupenkax, vstupenka, vyber);
         }
         if (unava <= 49) 
         {                    
           oddelovac5();
           cout << "Nie si unaveny!" << endl << "Chod nieco robit! " << endl;
           oddelovac5();
           staty(hodiny, sila, peniaze, unava, hlad);
           break;
         }                
         if (hlad > 100) 
         {                    
           oddelovac5();
           cout << "Si moc hladny!" << endl << "Kup si jedlo" << endl;
           oddelovac5();
           staty(hodiny, sila, peniaze, unava, hlad);
           break;
         }               
         hodiny = hodiny - 7;
         unava = unava - 50;
         hlad = hlad + 50;
         staty(hodiny, sila, peniaze, unava, hlad);
         break;
        case 4://OBCHOD//
         if (peniaze < 5) 
         {                    
           oddelovac5();
           cout << "Nemas dostatok penazi!" << endl << "Chod do prace aby si ziskal peniaze." << endl;
           oddelovac5();
           staty(hodiny, sila, peniaze, unava, hlad);
           break;
         }                        
         int Domov = 1;
         while (Domov == 1) 
         {
           if (peniaze < 5) 
           {
             oddelovac5();
             cout << "Nemas dostatok penazi!" << endl << "Chod do prace aby si ziskal peniaze." << endl;
             oddelovac5();
             staty(hodiny, sila, peniaze, unava, hlad);
             break;
           }
           oddelovac1();
           cout << "Chces pokracovat v platbe alebo ist domov?" << endl << endl;
           cout << "DOMOV: stlac 0" << endl << "DO OBCHODU: stlac 1" << endl << endl;
           oddelovac1();
           cin >> Domov;
           oddelovac4();
           if (Domov == 0) 
           {
             break;
           }
           staty(hodiny, sila, peniaze, unava, hlad);
           oddelovac4();
           cout << "Tu mas na vyber rozne produkty:" << endl << endl;
           cout << "Ist domov: stlac 0" << endl << endl;
           cout << "Cukriky: stlac 1" << endl << "Hlad: -5" << endl << "Unava: -5 " << endl << "Peniaze: -5 EUR" << endl << endl;
           cout << "Gulas: stlac 2" << endl << "Hlad: -50" << endl << "Peniaze: -20 EUR" << endl << endl;
           cout << "Energetak: stlac 3" << endl << "Unava: -30" << endl << "Peniaze: -5 EUR" << endl << endl;
           cout << "Zosilovace: stlac 4" << endl << "Sila: +10" << endl << "Peniaze: -100 EUR" << endl << endl;
           cout << "Supergulas: stlac 5" << endl << "Hlad: reset" << endl << "Unava: reset" << endl << "Sila: +30" << endl << "Peniaze: -1000 EUR" << endl << endl;
           cout << "Olympijska vstupenka: slac 6" << endl << "Peniaze: -2000 EUR" << endl;
           oddelovac4();
           int kupa = 0;
           cin >> kupa;
           switch (kupa) 
           { 
             default:
              oddelovac5();
              cout << "Vyberaj len cisla 0,1,2,3,4,5! " << endl;
              oddelovac5();     
             case 0:
              break;
             case 1:
              hlad = hlad - 5;
              if (hlad < 0) 
              {
                hlad = 0;
              }
              unava = unava - 5;
              if (unava <= 4) 
              {
                oddelovac5();
                cout << "Nie si unaveny!" << endl << "Chod nieco robit! " << endl;
                oddelovac5();
                staty(hodiny, sila, peniaze, unava, hlad);
                break;
              }                        
              peniaze = peniaze - 5; 
              break;
             case 2:
              hlad = hlad - 50;
              if (hlad < 0) 
              {
                hlad = 0;
              }
              peniaze = peniaze - 20;
              break;
             case 3:
              unava = unava - 30;
              if (unava < 30) 
              {
                oddelovac5();
                cout << "Nie si unaveny!" << endl << "Chod nieco robit! " << endl;
                oddelovac5();
                staty(hodiny, sila, peniaze, unava, hlad);
                break;
              }
              peniaze = peniaze - 5;
              break;
             case 4:
              hlad = hlad - 50;
              if (hlad < 0) 
              {
                hlad = 0;
              }
              peniaze = peniaze - 100;
              break;
             case 5:
              hlad = 0;
              unava = 0;
              sila = sila + 30;
              peniaze = peniaze - 1000;
              break;
             case 6:              
              if (peniaze < 2000)
              {
                break;
              }
              vstupenka = 1;            
           }
           staty(hodiny, sila, peniaze, unava, hlad);           
         }              
      }      
    }
    while (hodiny <= 0);
  }
  return 0;
}
