#include <iostream>
using namespace std;
void meniu()
{
    cout<<"MENIU"<<endl;
    cout<<"1.Lungime"<<endl;
    cout<<"2.Arie"<<endl;
    cout<<"3.Volum"<<endl;
    cout<<"4.Timp"<<endl;
    cout<<"5.Viteza"<<endl;
    cout<<"6.Temperatura"<<endl;
    cout<<"7.Masa"<<endl;
    cout<<"8.Energie"<<endl;
    cout<<"9.Presiune"<<endl;
    cout<<"10.Densitate"<<endl;
    cout<<"11.Consum combustibil"<<endl;
}
void citireNumarUnitateConvertire(int x)
{
    cout<<"Introduceti numarul pentru unitatea de masura pe care doriti sa o convertiti: ";
    cin>>x;
    if(x>11 && x<0) return;

}
void citireValoarePentruConvertire(int x)
{
    cout<<"Introduceti valoarea POZITIVA pe care doriti sa o convertiti: ";
    cin>>x;
    if(x<0) return;
}
void marimiLUNGIME()
{
    cout<<"1.Centimetri(cm)"<<endl;
    cout<<"2.Picioare(ft)"<<endl;
    cout<<"3.Tol(in)"<<endl;
    cout<<"4.Kilometri(km)"<<endl;
    cout<<"5.Metri(m)"<<endl;
    cout<<"6.Milimetri(mm)"<<endl;
    cout<<"7.Mile(mi, statute)"<<endl;
    cout<<"8.Mila maritima(nmi)"<<endl;
    cout<<"9.Yarzi(Yd)"<<endl;
}
void LUNGIME(int x, int y)
{
    marimiLUNGIME();
    cout<<"Introduceti numarul pentru unitatea de masura pe care doriti sa o convertiti";
    cin>>y;
    if(y<0 && y>9) return;
    citireValoarePentruConvertire(x);
    if(y==1)
    {
        cout<<"1.Centimetri(cm):"<<x<<endl;
        cout<<"2.Picioare(ft):"<<x/30.48<<endl;
        cout<<"3.Tol(in):"<<x/2.54<<endl;
        cout<<"4.Kilometri(km):"<<x/100000<<endl;
        cout<<"5.Metri(m):"<<x/100<<endl;
        cout<<"6.Milimetri(mm):"<<x*10<<endl;
        cout<<"7.Mile(mi, statute):"<<x/160934.4<<endl;
        cout<<"8.Mila maritima(nmi):"<<x/185200.000001<<endl;
        cout<<"9.Yarzi(Yd):"<<x/91.440024<<endl;
    }
    else if(y==2)
        {
            cout<<"1.Centimetri(cm):"<<x*30.48<<endl;
            cout<<"2.Picioare(ft):"<<x<<endl;
            cout<<"3.Tol(in):"<<x*12<<endl;
            cout<<"4.Kilometri(km):"<<x/3280.839895<<endl;
            cout<<"5.Metri(m):"<<x*3.280839<<endl;
            cout<<"6.Milimetri(mm):"<<x*304.8<<endl;
            cout<<"7.Mile(mi, statute):"<<x/5280<<endl;
            cout<<"8.Mila maritima(nmi):"<<x/6076.115485<<endl;
            cout<<"9.Yarzi(Yd):"<<x/3<<endl;
        }
        else if(y==3)
            {
                cout<<"1.Centimetri(cm):"<<x*2.54<<endl;
                cout<<"2.Picioare(ft):"<<x/12<<endl;
                cout<<"3.Tol(in):"<<x<<endl;
                cout<<"4.Kilometri(km):"<<x*39370.078740<<endl;
                cout<<"5.Metri(m):"<<x/39.370078<<endl;
                cout<<"6.Milimetri(mm):"<<x*25.4<<endl;
                cout<<"7.Mile(mi, statute):"<<x/63360<<endl;
                cout<<"8.Mila maritima(nmi):"<<x/72913.3858271<<endl;
                cout<<"9.Yarzi(Yd):"<<x/36.000009<<endl;
            }
    else if(y==4)
            {
                cout<<"1.Centimetri(cm):"<<x*100000<<endl;
                cout<<"2.Picioare(ft):"<<x*3280.839895<<endl;
                cout<<"3.Tol(in):"<<x*39370.0787401<<endl;
                cout<<"4.Kilometri(km):"<<x<<endl;
                cout<<"5.Metri(m):"<<x*1000<<endl;
                cout<<"6.Milimetri(mm):"<<x*1000000<<endl;
                cout<<"7.Mile(mi, statute):"<<x/1.609344<<endl;
                cout<<"8.Mila maritima(nmi):"<<x/1.852<<endl;
                cout<<"9.Yarzi(Yd):"<<x*1093.613<<endl;
            }
    else if(y==5)
            {
                cout<<"1.Centimetri(cm):"<<x*100<<endl;
                cout<<"2.Picioare(ft):"<<x*3.2808398<<endl;
                cout<<"3.Tol(in):"<<x*39.370078<<endl;
                cout<<"4.Kilometri(km):"<<x/1000<<endl;
                cout<<"5.Metri(m):"<<x<<endl;
                cout<<"6.Milimetri(mm):"<<x/1000<<endl;
                cout<<"7.Mile(mi, statute):"<<x/1609.344<<endl;
                cout<<"8.Mila maritima(nmi):"<<x/1582<<endl;
                cout<<"9.Yarzi(Yd):"<<x*1.093613<<endl;
            }
    else if(y==6)
            {
                cout<<"1.Centimetri(cm):"<<x/10<<endl;
                cout<<"2.Picioare(ft):"<<x/340<<endl;
                cout<<"3.Tol(in):"<<x/25.4<<endl;
                cout<<"4.Kilometri(km):"<<x/1000000<<endl;
                cout<<"5.Metri(m):"<<x/1000<<endl;
                cout<<"6.Milimetri(mm):"<<x<<endl;
                cout<<"7.Mile(mi, statute):"<<x/6.213711<<endl;
                cout<<"8.Mila maritima(nmi):"<<x*5.399568<<endl;
                cout<<"9.Yarzi(Yd):"<<x/914.4002494<<endl;
            }
    else if(y==7)
            {
            cout<<"1.Centimetri(cm):"<<x*160934.4<<endl;
            cout<<"2.Picioare(ft):"<<x*5280<<endl;
            cout<<"3.Tol(in):"<<x*63360<<endl;
            cout<<"4.Kilometri(km):"<<x*1.609344<<endl;
            cout<<"5.Metri(m):"<<x*1609.344<<endl;
            cout<<"6.Milimetri(mm):"<<x*1609344<<endl;
            cout<<"7.Mile(mi, statute):"<<x<<endl;
            cout<<"8.Mila maritima(nmi):"<<x/1.15077944<<endl;
            cout<<"9.Yarzi(Yd):"<<x*1759.99951996<<endl;
            }
    else if(y==8)
        {
            cout<<"1.Centimetri(cm):"<<x*185200<<endl;
            cout<<"2.Picioare(ft):"<<x*6076.1154855<<endl;
            cout<<"3.Tol(in):"<<x*72913.3858267<<endl;
            cout<<"4.Kilometri(km):"<<x*1.852<<endl;
            cout<<"5.Metri(m):"<<x*1852<<endl;
            cout<<"6.Milimetri(mm):"<<x*1852000<<endl;
            cout<<"7.Mile(mi, statute):"<<x*1.15077944<<endl;
            cout<<"8.Mila maritima(nmi):"<<x<<endl;
            cout<<"9.Yarzi(Yd):"<<x*2025.371876<<endl;
        }
    else if(y==9)
        {
            cout<<"1.Centimetri(cm):"<<x*91.440024<<endl;
            cout<<"2.Picioare(ft):"<<x*3.00000081824<<endl;
            cout<<"3.Tol(in):"<<x*36.00000981<<endl;
            cout<<"4.Kilometri(km):"<<x/1093.613000057<<endl;
            cout<<"5.Metri(m):"<<x/1.093613<<endl;
            cout<<"6.Milimetri(mm):"<<x*914.4002494<<endl;
            cout<<"7.Mile(mi, statute):"<<x/1759.99951<<endl;
            cout<<"8.Mila maritima(nmi):"<<x/2025.371876<<endl;
            cout<<"9.Yarzi(Yd):"<<x<<endl;

        }

}
int main()
{
    int x, y;
    meniu();
    citireNumarUnitateConvertire(x);
    if(x==1)
        LUNGIME(x,y);
    return 0;
}
