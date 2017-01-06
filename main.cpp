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
void marimiARIE()
{
    cout<<"1.Ari(a)"<<endl;
    cout<<"2.Acri(ac)"<<endl;
    cout<<"3.Centimetri(cm)"<<endl;
    cout<<"4.Picioare(ft)"<<endl;
    cout<<"5.Hectari(ha)"<<endl;
    cout<<"6.Tol(in)"<<endl;
    cout<<"7.Kilometri(km)"<<endl;
    cout<<"8.Metri(m)"<<endl;
    cout<<"9.Milimetri(mm)"<<endl;
    cout<<"10.Yarzi(Yd)"<<endl;
}
void ARIE(int x, int y)
{
    marimiARIE();
    cout<<"Introduceti numarul pentru unitatea de masura pe care doriti sa o convertiti";
    cin>>y;
    if(y<0 && y>10) return;
    citireValoarePentruConvertire(x);
    if(y==1)
    {
        cout<<"Ari(a):"<<x<<endl;
        cout<<"Acri(ac):"<<x/40.4685611<<endl;
        cout<<"Centimetri(cm):"<<x*1000000<<endl;
        cout<<"Picioare(ft):"<<x/1076.426<<endl;
        cout<<"Hectari(ha):"<<x/100<<endl;
        cout<<"Tol(in):"<<x*154990.700557<<endl;
        cout<<"Kilometri(km):"<<x/10000<<endl;
        cout<<"Metri(m):"<<x*100<<endl;
        cout<<"Milimetri(mm):"<<x*100000000<<endl;
        cout<<"Yarzi(Yd):"<<x*119.598939<<endl;
    }
    else if(y==2)
    {
        cout<<"Ari(a):"<<x*40.468561<<endl;
        cout<<"Acri(ac):"<<x<<endl;
        cout<<"Centimetri(cm):"<<x*40468561.19<<endl;
        cout<<"Picioare(ft):"<<x*43561.42216<<endl;
        cout<<"Hectari(ha):"<<x/2.471053<<endl;
        cout<<"Tol(in):"<<x*6272250.64941<<endl;
        cout<<"Kilometri(km):"<<x/247.1053999<<endl;
        cout<<"Metri(m):"<<x/4046.856119<<endl;
        cout<<"Milimetri(mm):"<<x*4046856119<<endl;
        cout<<"Yarzi(Yd):"<<x*4839.9969975<<endl;
    }
    else if(y==3)
    {
        cout<<"Ari(a):"<<x/1000000<<endl;
        cout<<"Acri(ac):"<<x*2.471053<<endl;
        cout<<"Centimetri(cm):"<<x<<endl;
        cout<<"Picioare(ft):"<<x/929<<endl;
        cout<<"Hectari(ha):"<<x/6.452<<endl;
        cout<<"Tol(in):"<<x<<endl;
        cout<<"Kilometri(km):"<<x<<endl;
        cout<<"Metri(m):"<<x/10000<<endl;
        cout<<"Milimetri(mm):"<<x*100<<endl;
        cout<<"Yarzi(Yd):"<<x/8361.27816<<endl;
    }
    else if(y==4)
    {
        cout<<"Ari(a):"<<x/1076.426264<<endl;
        cout<<"Acri(ac):"<<x/43561.422163<<endl;
        cout<<"Centimetri(cm):"<<x*928.999999<<endl;
        cout<<"Picioare(ft):"<<x<<endl;
        cout<<"Hectari(ha):"<<x*107642.626481<<endl;
        cout<<"Tol(in):"<<x*143.9863<<endl;
        cout<<"Kilometri(km):"<<x*9.28999999<<endl;
        cout<<"Metri(m):"<<x/10.764262<<endl;
        cout<<"Milimetri(mm):"<<x*92900<<endl;
        cout<<"Yarzi(Yd):"<<x/9.000299<<endl;
    }
    else if(y==5)
    {
        cout<<"Ari(a):"<<x*100<<endl;
        cout<<"Acri(ac):"<<x*2.471053<<endl;
        cout<<"Centimetri(cm):"<<x*100000000<<endl;
        cout<<"Picioare(ft):"<<x*107642.62648<<endl;
        cout<<"Hectari(ha):"<<x<<endl;
        cout<<"Tol(in):"<<x*15499070.0557<<endl;
        cout<<"Kilometri(km):"<<x/100<<endl;
        cout<<"Metri(m):"<<x*10000<<endl;
        cout<<"Milimetri(mm):"<<x*10000000000<<endl;
        cout<<"Yarzi(Yd):"<<x*11959.8939404<<endl;
    }
    else if(y==6)
    {

        cout<<"Ari(a):"<<x/154990.7005603<<endl;
        cout<<"Acri(ac):"<<x*1.594324<<endl;
        cout<<"Centimetri(cm):"<<x*6.4519999<<endl;
        cout<<"Picioare(ft):"<<x*143.98636<<endl;
        cout<<"Hectari(ha):"<<x<<endl;
        cout<<"Tol(in):"<<x<<endl;
        cout<<"Kilometri(km):"<<x<<endl;
        cout<<"Metri(m):"<<x/1549.907005<<endl;
        cout<<"Milimetri(mm):"<<x*645.2<<endl;
        cout<<"Yarzi(Yd):"<<x/1295.920359<<endl;
    }
    else if(y==7)
    {
        cout<<"Ari(a):"<<x*1000<<endl;
        cout<<"Acri(ac):"<<x/247.1053999<<endl;
        cout<<"Centimetri(cm):"<<x*10000000000<<endl;
        cout<<"Picioare(ft):"<<x*10764262.648<<endl;
        cout<<"Hectari(ha):"<<x*100<<endl;
        cout<<"Tol(in):"<<x*1549907005.5796<<endl;
        cout<<"Kilometri(km):"<<x<<endl;
        cout<<"Metri(m):"<<x*1000000<<endl;
        cout<<"Milimetri(mm):"<<x*1000000000000<<endl;
        cout<<"Yarzi(Yd):"<<x*1195989.39404<<endl;
    }
    else if(y==8)
    {

        cout<<"Ari(a):"<<x/100<<endl;
        cout<<"Acri(ac):"<<x/4046.856119<<endl;
        cout<<"Centimetri(cm):"<<x*10000<<endl;
        cout<<"Picioare(ft):"<<x*10.7642626<<endl;
        cout<<"Hectari(ha):"<<x/10000<<endl;
        cout<<"Tol(in):"<<x*1549.907005<<endl;
        cout<<"Kilometri(km):"<<x/1000000<<endl;
        cout<<"Metri(m):"<<x<<endl;
        cout<<"Milimetri(mm):"<<x*1000000<<endl;
        cout<<"Yarzi(Yd):"<<x*1.195989394<<endl;

    }
    else if(y==9)
    {
        cout<<"Ari(a):"<<x<<endl;
        cout<<"Acri(ac):"<<x*2.471053<<endl;
        cout<<"Centimetri(cm):"<<x/100.000000000001<<endl;
        cout<<"Picioare(ft):"<<x/92900.000000074<<endl;
        cout<<"Hectari(ha):"<<x<<endl;
        cout<<"Tol(in):"<<x*645.2<<endl;
        cout<<"Kilometri(km):"<<x<<endl;
        cout<<"Metri(m):"<<x/1000000<<endl;
        cout<<"Milimetri(mm):"<<x<<endl;
        cout<<"Yarzi(Yd):"<<x/836127.816029<<endl;
    }
    else if(y==10)
    {
        cout<<"Ari(a):"<<x/119.598939<<endl;
        cout<<"Acri(ac):"<<x/4839.99699<<endl;
        cout<<"Centimetri(cm):"<<x*8361.27816<<endl;
        cout<<"Picioare(ft):"<<x*9.0002994<<endl;
        cout<<"Hectari(ha):"<<x/11959.89394<<endl;
        cout<<"Tol(in):"<<x*1295.92035957<<endl;
        cout<<"Kilometri(km):"<<x<<endl;
        cout<<"Metri(m):"<<x/1.195989<<endl;
        cout<<"Milimetri(mm):"<<x*836127.816<<endl;
        cout<<"Yarzi(Yd):"<<x<<endl;

    }
}
void marimiVOLUM()
{
    cout<<"1.Centilitri(cl)"<<endl;
    cout<<"2.Centrimetri(cm)"<<endl;
    cout<<"3.Decilitri(dl)"<<endl;
    cout<<"4.Decimetri(dm)"<<endl;
    cout<<"5.Picioare(ft)"<<endl;
    cout<<"6.Galon(gal)"<<endl;
    cout<<"7.Tol(in)"<<endl;
    cout<<"8.Litri(l)"<<endl;
    cout<<"9.Mililitri(ml)"<<endl;
    cout<<"10.Metri(m)"<<endl;
    cout<<"11.Yarzi(Yd)"<<endl;

}
void VOLUM(int x, int y)
{

    marimiVOLUM();
    cout<<"Introduceti numarul pentru unitatea de masura pe care doriti sa o convertiti";
    cin>>y;
    if(y<0 && y>11) return;
    citireValoarePentruConvertire(x);
    if(y==1)
    {
        cout<<"Centilitri(cl):"<<x<<endl;
        cout<<"Centrimetri(cm):"<<x*10<<endl;
        cout<<"Decilitri(dl):"<<x/10<<endl;
        cout<<"Decimetri(dm):"<<x/100<<endl;
        cout<<"Picioare(ft):"<<x/2832.000357<<endl;
        cout<<"Galon(gal):"<<x/454.60124<<endl;
        cout<<"Tol(in):"<<x/1.63870<<endl;
        cout<<"Litri(l):"<<x/100<<endl;
        cout<<"Mililitri(ml):"<<x<<endl;
        cout<<"Metri(m):"<<x/100000<<endl;
        cout<<"Yarzi(Yd):"<<x/76456.10654<<endl;
    }
    else if(y==2)
    {
        cout<<"Centilitri(cl):"<<x/10<<endl;
        cout<<"Centrimetri(cm):"<<x<<endl;
        cout<<"Decilitri(dl):"<<x/100.0001<<endl;
        cout<<"Decimetri(dm):"<<x/1000<<endl;
        cout<<"Picioare(ft):"<<x/28320.00357964<<endl;
        cout<<"Galon(gal):"<<x/4546.0000654624<<endl;
        cout<<"Tol(in):"<<x/16.3810764<<endl;
        cout<<"Litri(l):"<<x/1000<<endl;
        cout<<"Mililitri(ml):"<<x<<endl;
        cout<<"Metri(m):"<<x/1000000<<endl;
        cout<<"Yarzi(Yd):"<<x/764561.0654923<<endl;
    }
    else if(y==3)
    {
        cout<<"Centilitri(cl):"<<x*10<<endl;
        cout<<"Centrimetri(cm):"<<x*100<<endl;
        cout<<"Decilitri(dl):"<<x<<endl;
        cout<<"Decimetri(dm):"<<x/10<<endl;
        cout<<"Picioare(ft):"<<x/283.20529<<endl;
        cout<<"Galon(gal):"<<x/45.460744<<endl;
        cout<<"Tol(in):"<<x*6.102374<<endl;
        cout<<"Litri(l):"<<x/10<<endl;
        cout<<"Mililitri(ml):"<<x*100<<endl;
        cout<<"Metri(m):"<<x/10000<<endl;
        cout<<"Yarzi(Yd):"<<x/7645.6106<<endl;
    }
    else if(y==4)
    {
        cout<<"Centilitri(cl):"<<x*100<<endl;
        cout<<"Centrimetri(cm):"<<x*1000<<endl;
        cout<<"Decilitri(dl):"<<x*10<<endl;
        cout<<"Decimetri(dm):"<<x<<endl;
        cout<<"Picioare(ft):"<<x/18.688<<endl;
        cout<<"Galon(gal):"<<x/4.546<<endl;
        cout<<"Tol(in):"<<x*61.02374<<endl;
        cout<<"Litri(l):"<<x<<endl;
        cout<<"Mililitri(ml):"<<x*1000<<endl;
        cout<<"Metri(m):"<<x/1000<<endl;
        cout<<"Yarzi(Yd):"<<x/765.1109<<endl;
    }
    else if(y==5)
    {
        cout<<"Centilitri(cl):"<<x*2832<<endl;
        cout<<"Centrimetri(cm):"<<x*28320<<endl;
        cout<<"Decilitri(dl):"<<x*283.2<<endl;
        cout<<"Decimetri(dm):"<<x*28.32<<endl;
        cout<<"Picioare(ft):"<<x<<endl;
        cout<<"Galon(gal):"<<x*6.2296<<endl;
        cout<<"Tol(in):"<<x*1728.1924<<endl;
        cout<<"Litri(l):"<<x*28.32<<endl;
        cout<<"Mililitri(ml):"<<x*28320<<endl;
        cout<<"Metri(m):"<<x/35.3107<<endl;
        cout<<"Yarzi(Yd):"<<x/26.99784<<endl;
    }
    else if(y==6)
    {
        cout<<"Centilitri(cl):"<<x*454.599<<endl;
        cout<<"Centrimetri(cm):"<<x*4546<<endl;
        cout<<"Decilitri(dl):"<<x*45.4599<<endl;
        cout<<"Decimetri(dm):"<<x*4.54599<<endl;
        cout<<"Picioare(ft):"<<x/6.2305<<endl;
        cout<<"Galon(gal):"<<x<<endl;
        cout<<"Tol(in):"<<x*277.4139<<endl;
        cout<<"Litri(l):"<<x*4.54599<<endl;
        cout<<"Mililitri(ml):"<<x*4546<<endl;
        cout<<"Metri(m):"<<x/219.9736<<endl;
        cout<<"Yarzi(Yd):"<<x/168.2085<<endl;
    }
    else if(y==7)
    {
        cout<<"Centilitri(cl):"<<x*1.6387<<endl;
        cout<<"Centrimetri(cm):"<<x*16.387<<endl;
        cout<<"Decilitri(dl):"<<x/6.105<<endl;
        cout<<"Decimetri(dm):"<<x/61.05<<endl;
        cout<<"Picioare(ft):"<<x/1728.3097<<endl;
        cout<<"Galon(gal):"<<x/277.4694<<endl;
        cout<<"Tol(in):"<<x<<endl;
        cout<<"Litri(l):"<<x/61.05<<endl;
        cout<<"Mililitri(ml):"<<x*16.38<<endl;
        cout<<"Metri(m):"<<x*61050.06<<endl;
        cout<<"Yarzi(Yd):"<<x*46663.5557<<endl;
    }
    else if(y==8)
    {
        cout<<"Centilitri(cl):"<<x*100<<endl;
        cout<<"Centrimetri(cm):"<<x*1000<<endl;
        cout<<"Decilitri(dl):"<<x*10<<endl;
        cout<<"Decimetri(dm):"<<x<<endl;
        cout<<"Picioare(ft):"<<x/28.3205<<endl;
        cout<<"Galon(gal):"<<x/4.546<<endl;
        cout<<"Tol(in):"<<x*61.0237<<endl;
        cout<<"Litri(l):"<<x<<endl;
        cout<<"Mililitri(ml):"<<x*1000<<endl;
        cout<<"Metri(m):"<<x/1000<<endl;
        cout<<"Yarzi(Yd):"<<x/769.2307<<endl;
    }
    else if(y==9)
    {
        cout<<"Centilitri(cl):"<<x/10<<endl;
        cout<<"Centrimetri(cm):"<<x<<endl;
        cout<<"Decilitri(dl):"<<x/100<<endl;
        cout<<"Decimetri(dm):"<<x/1000<<endl;
        cout<<"Picioare(ft):"<<x/2832.0589<<endl;
        cout<<"Galon(gal):"<<x/4547.5216<<endl;
        cout<<"Tol(in):"<<x/16.3872<<endl;
        cout<<"Litri(l):"<<x/1000<<endl;
        cout<<"Mililitri(ml):"<<x<<endl;
        cout<<"Metri(m):"<<x/1000000<<endl;
        cout<<"Yarzi(Yd):"<<x/765110.941<<endl;
    }
    else if(y==10)
    {
        cout<<"Centilitri(cl):"<<x*1000000<<endl;
        cout<<"Centrimetri(cm):"<<x*1000000<<endl;
        cout<<"Decilitri(dl):"<<x*10000<<endl;
        cout<<"Decimetri(dm):"<<x*1000<<endl;
        cout<<"Picioare(ft):"<<x*25.3107<<endl;
        cout<<"Galon(gal):"<<x*219.9736<<endl;
        cout<<"Tol(in):"<<x*61023.744<<endl;
        cout<<"Litri(l):"<<x*1000<<endl;
        cout<<"Mililitri(ml):"<<x*1000000<<endl;
        cout<<"Metri(m):"<<x<<endl;
        cout<<"Yarzi(Yd):"<<x*1.3079<<endl;
    }
    else if(y==11)
    {

        cout<<"Centilitri(cl):"<<x*76456<<endl;
        cout<<"Centrimetri(cm):"<<x*764560<<endl;
        cout<<"Decilitri(dl):"<<x/7645.6<<endl;
        cout<<"Decimetri(dm):"<<x/764.56<<endl;
        cout<<"Picioare(ft):"<<x*26.9971<<endl;
        cout<<"Galon(gal):"<<x*168.183<<endl;
        cout<<"Tol(in):"<<x*46656.313<<endl;
        cout<<"Litri(l):"<<x*764.56<<endl;
        cout<<"Mililitri(ml):"<<x*764560<<endl;
        cout<<"Metri(m):"<<x/1.30794<<endl;
        cout<<"Yarzi(Yd):"<<x<<endl;
    }

}
void marimiTIMP()
{
    cout<<"1.Attosecunda(as)"<<endl;
    cout<<"2.Centisecunda(cs)"<<endl;
    cout<<"3.Decisecunda(ds)"<<endl;
    cout<<"4.Femtosecunda(fs)"<<endl;
    cout<<"5.Ora(h)"<<endl;
    cout<<"6.Megaannum(ma)"<<endl;
    cout<<"7.Minute(min)"<<endl;
    cout<<"8.Milisecunda(ms)"<<endl;
    cout<<"9.Nanosecunda(ns)"<<endl;
    cout<<"10.Picosecunda(ps)"<<endl;
    cout<<"11.Secunda(s)"<<endl;
}
void TIMP(int x, int y)
{
    marimiTIMP();
    cout<<"Introduceti numarul pentru unitatea de masura pe care doriti sa o convertiti";
    cin>>y;
    if(y<0 && y>11) return;
    citireValoarePentruConvertire(x);
    if(y==1)
    {
        cout<<"Attosecunda(as): "<<x<<endl;
        cout<<"Centisecunda(cs): "<<x<<endl;
        cout<<"Decisecunda(ds): "<<x<<endl;
        cout<<"Femtosecunda(fs): "<<x/1000<<endl;
        cout<<"Ora(h): "<<x*2.777<<endl;
        cout<<"Megaannum(ma): "<<x*3.17323<<endl;
        cout<<"Minute(min): "<<x*1.666<<endl;
        cout<<"Milisecunda(ms): "<<x<<endl;
        cout<<"Nanosecunda(ns): "<<x<<endl;
        cout<<"Picosecunda(ps): "<<x/1000000<<endl;
        cout<<"Secunda(s): "<<x<<endl;
    }
    else if(y==2)
    {
        cout<<"Attosecunda(as): "<<x*10000000000000000<<endl;
        cout<<"Centisecunda(cs): "<<x<<endl;
        cout<<"Decisecunda(ds): "<<x/10<<endl;
        cout<<"Femtosecunda(fs): "<<x*10000000000000<<endl;
        cout<<"Ora(h): "<<x/360000<<endl;
        cout<<"Megaannum(ma): "<<x<<endl;
        cout<<"Minute(min): "<<x/6000<<endl;
        cout<<"Milisecunda(ms): "<<x*10<<endl;
        cout<<"Nanosecunda(ns): "<<x*10000000<<endl;
        cout<<"Picosecunda(ps): "<<x*10000000000<<endl;
        cout<<"Secunda(s): "<<x/100<<endl;
    }
    else if(y==3)
    {
        cout<<"Attosecunda(as): "<<x*100000000000000000<<endl;
        cout<<"Centisecunda(cs): "<<x*10<<endl;
        cout<<"Decisecunda(ds): "<<x<<endl;
        cout<<"Femtosecunda(fs): "<<x*100000000000000<<endl;
        cout<<"Ora(h): "<<x/36000<<endl;
        cout<<"Megaannum(ma): "<<x*3.1732<<endl;
        cout<<"Minute(min): "<<x/600<<endl;
        cout<<"Milisecunda(ms): "<<x*100<<endl;
        cout<<"Nanosecunda(ns): "<<x*100000000<<endl;
        cout<<"Picosecunda(ps): "<<x*100000000000<<endl;
        cout<<"Secunda(s): "<<x/10<<endl;
    }
    else if(y==4)
    {
        cout<<"Attosecunda(as): "<<x*1000<<endl;
        cout<<"Centisecunda(cs): "<<x/1e-13<<endl;
        cout<<"Decisecunda(ds): "<<x*1e-14<<endl;
        cout<<"Femtosecunda(fs): "<<x<<endl;
        cout<<"Ora(h): "<<x*2.777777777777778e-19<<endl;
        cout<<"Megaannum(ma): "<<x*3.1732331437855404e-30<<endl;
        cout<<"Minute(min): "<<x*1.6666666666666667e-17<<endl;
        cout<<"Milisecunda(ms): "<<x*1e-12<<endl;
        cout<<"Nanosecunda(ns): "<<x/1000000<<endl;
        cout<<"Picosecunda(ps): "<<x/1000<<endl;
        cout<<"Secunda(s): "<<x*1e-15<<endl;
    }
    else if(y==5)
    {
        cout<<"Attosecunda(as): "<<x*3.6e+21<<endl;
        cout<<"Centisecunda(cs): "<<x*360000<<endl;
        cout<<"Decisecunda(ds): "<<x*36000<<endl;
        cout<<"Femtosecunda(fs): "<<x*3599999999999999500<<endl;
        cout<<"Ora(h): "<<x<<endl;
        cout<<"Megaannum(ma): "<<x*1.1423639317627944e-11<<endl;
        cout<<"Minute(min): "<<x*60<<endl;
        cout<<"Milisecunda(ms): "<<x*3600000<<endl;
        cout<<"Nanosecunda(ns): "<<x*3600000000000<<endl;
        cout<<"Picosecunda(ps): "<<x*3600000000000000<<endl;
        cout<<"Secunda(s): "<<x*3600<<endl;
    }
    else if(y==6)
    {
        cout<<"Attosecunda(as): "<<x*3.15136e+32<<endl;
        cout<<"Centisecunda(cs): "<<x*31513600000000000<<endl;
        cout<<"Decisecunda(ds): "<<x*3151360000000000<<endl;
        cout<<"Femtosecunda(fs): "<<x*3.15136e+29<<endl;
        cout<<"Ora(h): "<<x*87537777777.77777<<endl;
        cout<<"Megaannum(ma): "<<x<<endl;
        cout<<"Minute(min): "<<x*5252266666666.667<<endl;
        cout<<"Milisecunda(ms): "<<x*315136000000000000<<endl;
        cout<<"Nanosecunda(ns): "<<x*3.15136e+23<<endl;
        cout<<"Picosecunda(ps): "<<x*3.15136e+26<<endl;
        cout<<"Secunda(s): "<<x*315136000000000<<endl;
    }
    else if(y==7)
    {
        cout<<"Attosecunda(as): "<<x*59999999999999990000<<endl;
        cout<<"Centisecunda(cs): "<<x*6000<<endl;
        cout<<"Decisecunda(ds): "<<x*600<<endl;
        cout<<"Femtosecunda(fs): "<<x*59999999999999990<<endl;
        cout<<"Ora(h): "<<x/60<<endl;
        cout<<"Megaannum(ma): "<<x*1.903939886271324e-13<<endl;
        cout<<"Minute(min): "<<x<<endl;
        cout<<"Milisecunda(ms): "<<x*60000<<endl;
        cout<<"Nanosecunda(ns): "<<x*60000000000<<endl;
        cout<<"Picosecunda(ps): "<<x*60000000000000<<endl;
        cout<<"Secunda(s): "<<x*60<<endl;
    }
    else if(y==8)
    {
        cout<<"Attosecunda(as): "<<x*1000000000000000<<endl;
        cout<<"Centisecunda(cs): "<<x/10<<endl;
        cout<<"Decisecunda(ds): "<<x/100<<endl;
        cout<<"Femtosecunda(fs): "<<x*1000000000000<<endl;
        cout<<"Ora(h): "<<x*2.7777777777777776e-7<<endl;
        cout<<"Megaannum(ma): "<<x*3.1732331437855403e-18<<endl;
        cout<<"Minute(min): "<<x*60000<<endl;
        cout<<"Milisecunda(ms): "<<x<<endl;
        cout<<"Nanosecunda(ns): "<<x*1000000<<endl;
        cout<<"Picosecunda(ps): "<<x*1000000000<<endl;
        cout<<"Secunda(s): "<<x/1000<<endl;
    }
    else if(y==9)
    {
        cout<<"Attosecunda(as): "<<x*1000000000<<endl;
        cout<<"Centisecunda(cs): "<<x*1.0000000000000001e-7<<endl;
        cout<<"Decisecunda(ds): "<<x*1e-8<<endl;
        cout<<"Femtosecunda(fs): "<<x*1000000<<endl;
        cout<<"Ora(h): "<<x*2.777777777777778e-13<<endl;
        cout<<"Megaannum(ma): "<<x*3.1732331437855405e-24<<endl;
        cout<<"Minute(min): "<<x*1.6666666666666667e-11<<endl;
        cout<<"Milisecunda(ms): "<<x/1000000<<endl;
        cout<<"Nanosecunda(ns): "<<x<<endl;
        cout<<"Picosecunda(ps): "<<x*1000<<endl;
        cout<<"Secunda(s): "<<x*1e-9<<endl;
    }
    else if(y==10)
    {
        cout<<"Attosecunda(as): "<<x*1000000<<endl;
        cout<<"Centisecunda(cs): "<<x*10<<endl;
        cout<<"Decisecunda(ds): "<<x*1e-11<<endl;
        cout<<"Femtosecunda(fs): "<<x*1000<<endl;
        cout<<"Ora(h): "<<x*2.7777777777777775e-16<<endl;
        cout<<"Megaannum(ma): "<<x*3.17323314378554e-27<<endl;
        cout<<"Minute(min): "<<x*1.6666666666666667e-14<<endl;
        cout<<"Milisecunda(ms): "<<x*1e-9<<endl;
        cout<<"Nanosecunda(ns): "<<x/1000<<endl;
        cout<<"Picosecunda(ps): "<<x<<endl;
        cout<<"Secunda(s): "<<x*1e-12<<endl;
    }
    else if(y==11)
    {
        cout<<"Attosecunda(as): "<<x*999999999999999900<<endl;
        cout<<"Centisecunda(cs): "<<x*100<<endl;
        cout<<"Decisecunda(ds): "<<x*10<<endl;
        cout<<"Femtosecunda(fs): "<<x*1000000000000000<<endl;
        cout<<"Ora(h): "<<x3600<<endl;
        cout<<"Megaannum(ma): "<<x*3.1732331437855403e-15<<endl;
        cout<<"Minute(min): "<<x/60<<endl;
        cout<<"Milisecunda(ms): "<<x*1000<<endl;
        cout<<"Nanosecunda(ns): "<<x*1000000000<<endl;
        cout<<"Picosecunda(ps): "<<x*1000000000000<<endl;
        cout<<"Secunda(s): "<<x<<endl;
    }
}
void marimiVITEZA()
{
    cout<<"1.Centimetri pe minut(cm/min)"<<endl;
    cout<<"2.Centimetri pe secunda(cm/s)"<<endl;
    cout<<"3.Picioare pe ora(fph)"<<endl;
    cout<<"4.Picioare pe secunda(fps)"<<endl;
    cout<<"5.Picioare pe minut(ft/min)"<<endl;
    cout<<"6.Metri pe ora(m/h)"<<endl;
    cout<<"7.Metri pe minut(m/min)"<<endl;
    cout<<"8.Metri pe secunda(mps)"<<endl;
    cout<<"9.Tol pe secunda(ips)"<<endl;
    cout<<"10.Mile pe ora(mph)"<<endl;
    cout<<"11.Mile pe secunda(mps)"<<endl;
    cout<<"12.Mila marina pe ora(nmi/h)"<<endl;
    cout<<"13.Yarzi pe ora(Yd/h)"<<endl;
    cout<<"14.Yarzi pe min(Yd/min)"<<endl;
    cout<<"15.Yarzi pe secunda(Yd/s)"<<endl;

}
void VITEZA(int x, int y)
{
    void marimiVITEZA();
    cout<<"Introduceti numarul pentru unitatea de masura pe care doriti sa o convertiti";
    cin>>y;
    if(y<0 && y>15) return;
    citireValoarePentruConvertire(x);
    if(y==1)
    {
        cout<<"Centimetri pe minut(cm/min): "<<x<<endl;
        cout<<"Centimetri pe secunda(cm/s): "<<x/59.999<<endl;
        cout<<"Picioare pe ora(fph): "<<x*1.968496580722123<<endl;
        cout<<"Picioare pe secunda(fps): "<<x/1828.7996<<endl;
        cout<<"Picioare pe minut(ft/min): "<<x/30.4799<<endl;
        cout<<"Tol pe secunda(ips): "<<x/152.3999<<endl;
        cout<<"Metri pe ora(m/h): "<<x/1.6666<<endl;
        cout<<"Metri pe minut(m/min): "<<x/99.9999<<endl;
        cout<<"Metri pe secunda(m/s): "<<x/5999.9988<<endl;
        cout<<"Mile pe ora(mph): "<<x/2682.2394<<endl;
        cout<<"Mile pe secunda(mps): "<<x/5999.9988<<endl;
        cout<<"Mila marina pe ora(nmi/h): "<<x/3086.3993<<endl;;
        cout<<"Yarzi pe ora(Yd/h): "<<x/1.52399<<endl;
        cout<<"Yarzi pe min(Yd/min): "<<x/91.44<<endl;
        cout<<"Yarzi pe secunda(Yd/s): "<<x/5486.4003<<endl;
    }
    else if(y==2)
    {
        cout<<"Centimetri pe minut(cm/min): "<<x/59.9999<<endl;
        cout<<"Centimetri pe secunda(cm/s): "<<x<<endl;
        cout<<"Picioare pe ora(fph): "<<x*118.10977122137315<<endl;
        cout<<"Picioare pe secunda(fps): "<<x/30.48<<endl;
        cout<<"Picioare pe minut(ft/min): "<<x*1.9685039370078738<<endl;
        cout<<"Metri pe ora(m/h): "<<x*35.99997120002304<<endl;
        cout<<"Metri pe minut(m/min): "<<x/1.6<<endl;
        cout<<"Metri pe secunda(mps): "<<x/100<<endl;
        cout<<"Tol pe secunda(ips): "<<x/2.54<<endl;
        cout<<"Mile pe ora(mph): "<<x/44.704<<endl;
        cout<<"Mile pe secunda(mps): "<<x/100<<endl;
        cout<<"Mila marina pe ora(nmi/h): "<<x/51.44<<endl;
        cout<<"Yarzi pe ora(Yd/h): "<<x/39.37007874015748<<endl;
        cout<<"Yarzi pe min(Yd/min): "<<x/1.524<<endl;
        cout<<"Yarzi pe secunda(Yd/s): "<<x/91.44<<endl;
    }
    else if(y==3)
    {
        cout<<"Centimetri pe minut(cm/min): "<<x/1.968<<endl;
        cout<<"Centimetri pe minut(cm/s): "<<x/118.1097<<endl;
        cout<<"Picioare pe ora(fph): "<<x<<endl;
        cout<<"Picioare pe secunda(fps): "<<x/3599.9858<<endl;
        cout<<"Picioare pe minut(ft/min): "<<x/59.9997<<endl;
        cout<<"Metri pe ora(m/h): "<<x/3.2808<<endl;
        cout<<"Metri pe minut(m/min): "<<x/196.8496<<endl;
        cout<<"Metri pe secunda(m/s): "<<x/11810.9771<<endl;
        cout<<"Tol pe secunda(ips): "<<x/299.9988<<endl;
        cout<<"Mile pe ora(mph): "<<x/5279.9792<<endl;
        cout<<"Mile pe secunda(mps): "<<x11810.977<<endl;
        cout<<"Mila marina pe ora(nmi/h): "<<x/6075.5666<<endl;
        cout<<"Yarzi pe ora(Yd/h): "<<x/2.999<<endl;
        cout<<"Yarzi pe min(Yd/min): "<<x/179.9993<<endl;
        cout<<"Yarzi pe secunda(Yd/s): "<<x/10799.9604<<endl;
    }
    else if(y==5)
    {
        cout<<"Centimetri pe minut(cm/min): "<<x*30.479993904001223<<endl;
        cout<<"Centimetri pe secunda(cm/s): "<<x/1.9685<<endl;
        cout<<"Picioare pe ora(fph): "<<x*59.99976378045756<<endl;
        cout<<"Picioare pe secunda(fps): "<<x/60<<endl;
        cout<<"Picioare pe minut(ft/min): "<<x<<endl;
        cout<<"Metri pe ora(m/h): "<<x*18.287985369611704<<endl;
        cout<<"Metri pe minut(m/min): "<<x/3.2808<<endl;
        cout<<"Metri pe secunda(m/s): "<<x/196.8503<<endl;
        cout<<"Tol pe secunda(ips): "<<x/5<<endl;
        cout<<"Mile pe ora(mph): "<<x/88<<endl;
        cout<<"Mile pe secunda(mps): "<<x/196.8503<<endl;
        cout<<"Mila marina pe ora(nmi/h): "<<x/101.2598<<endl;
        cout<<"Yarzi pe ora(Yd/h): "<<x*20<<endl;
        cout<<"Yarzi pe min(Yd/min): "<<x/3.000000787<<endl;
        cout<<"Yarzi pe secunda(Yd/s): "<<x/180.00004<<endl;
    }
    else if(y==4)
    {
        cout<<"Centimetri pe minut(cm/min): "<<x*1828.7996342400734<<endl;
        cout<<"Centimetri pe secunda(cm/s): "<<x*30.48<<endl;
        cout<<"Picioare pe ora(fph): "<<x*3599.985826827454<<endl;
        cout<<"Picioare pe secunda(fps): "<<x<<endl;
        cout<<"Picioare pe minut(ft/min): "<<x*60<<endl;
        cout<<"Metri pe ora(m/h): "<<x*1097.2791221767022<<endl;
        cout<<"Metri pe minut(m/min): "<<x*18.28799963424001<<endl;
        cout<<"Metri pe secunda(m/s): "<<x/3.2808<<endl;
        cout<<"Tol pe secunda(ips): "<<x*12<<endl;
        cout<<"Mile pe ora(mph): "<<x/1.4666<<endl;
        cout<<"Mile pe secunda(mps): "<<x/3.2808<<endl;
        cout<<"Mila marina pe ora(nmi/h): "<<x/1.68766<<endl;
        cout<<"Yarzi pe ora(Yd/h): "<<x*1200<<endl;
        cout<<"Yarzi pe min(Yd/min): "<<x*19.999994750657546<<endl;
        cout<<"Yarzi pe secunda(Yd/s): "<<x/3<<endl;
    }
    else if(y==6)
    {
        cout<<"Centimetri pe minut(cm/min): "<<x*1.6666676666664668<<endl;
        cout<<"Centimetri pe secunda(cm/s): "<<x/35.999<<endl;
        cout<<"Picioare pe ora(fph): "<<x*3.2808296030330593<<endl;
        cout<<"Picioare pe secunda(fps): "<<x/1097.2791<<endl;
        cout<<"Picioare pe minut(ft/min): "<<x/18.287<<endl;
        cout<<"Metri pe ora(m/h): "<<x<<endl;
        cout<<"Metri pe minut(m/min): "<<x/59.999953<<endl;
        cout<<"Metri pe secunda(m/s): "<<x/3599.9971<<endl;
        cout<<"Tol pe secunda(ips): "<<x/91.4399<<endl;
        cout<<"Mile pe ora(mph): "<<x/1609.3427<<endl;
        cout<<"Mile pe secunda(mps): "<<x/3599.9971<<endl;
        cout<<"Mila marina pe ora(nmi/h): "<<x/1851.8385<<endl;
        cout<<"Yarzi pe ora(Yd/h): "<<x*1.0936141732283464<<endl;
        cout<<"Yarzi pe min(Yd/min): "<<x/54.8639<<endl;
        cout<<"Yarzi pe secunda(Yd/s): "<<x/3291.8382<<endl;
    }
    else if(y==7)
    {
        cout<<"Centimetri pe minut(cm/min): "<<x*99.9999820000036<<endl;
        cout<<"Centimetri pe secunda(cm/s): "<<x*1.6666667<<endl;
        cout<<"Picioare pe ora(fph): "<<x*196.84962263928097<<endl;
        cout<<"Picioare pe secunda(fps): "<<x/18.28799<<endl;
        cout<<"Picioare pe minut(ft/min): "<<x*3.280839960629921<<endl;
        cout<<"Metri pe ora(m/h): "<<x*59.99995320003744<<endl;
        cout<<"Metri pe minut(m/min): "<<x<<endl;
        cout<<"Metri pe secunda(m/s): "<<x/60<<endl;
        cout<<"Tol pe secunda(ips): "<<x/1052399<<endl;
        cout<<"Mile pe ora(mph): "<<x/26.8223<<endl;
        cout<<"Mile pe secunda(mps): "<<x/60<<endl;
        cout<<"Mila marina pe ora(nmi/h): "<<x/30.8639<<endl;
        cout<<"Yarzi pe ora(Yd/h): "<<x*65.61679921259842<<endl;
        cout<<"Yarzi pe min(Yd/min): "<<x*1.0936130331724323<<endl;
        cout<<"Yarzi pe secunda(Yd/s): "<<x/54.864<<endl;
    }
    else if(y==8)
    {
        cout<<"Centimetri pe minut(cm/min): "<<x*5999.99880000024<<endl;
        cout<<"Centimetri pe secunda(cm/s): "<<x*100<<endl;
        cout<<"Picioare pe ora(fph): "<<x*11810.977122137316<<endl;
        cout<<"Picioare pe secunda(fps): "<<x*3.280839895013123<<endl;
        cout<<"Picioare pe minut(ft/min): "<<x*196.85039370078738<<endl;
        cout<<"Metri pe ora(m/h): "<<x*3599.9971200023037<<endl;
        cout<<"Metri pe minut(m/min): "<<x*59.99999880000003<<endl;
        cout<<"Metri pe secunda(m/s): "<<x<<endl;
        cout<<"Tol pe secunda(ips): "<<x*39.37007874015748<<endl;
        cout<<"Mile pe ora(mph): "<<x*2.2369362920544025<<endl;
        cout<<"Mile pe secunda(mps): "<<x<<endl;
        cout<<"Mila marina pe ora(nmi/h): "<<x*1.944012441679627*<<endl;
        cout<<"Yarzi pe ora(Yd/h): "<<x*3937.0078740157483<<endl;
        cout<<"Yarzi pe min(Yd/min): "<<x*65.61678067801033<<endl;
        cout<<"Yarzi pe secunda(Yd/s): "<<x*1.0936130000578717<<endl;
    }
    else if(y==9)
    {
        cout<<"Centimetri pe minut(cm/min): "<<x*152.3999695200061<<endl;
        cout<<"Centimetri pe secunda(cm/s): "<<x*2.54<<endl;
        cout<<"Picioare pe ora(fph): "<<x*299.9988189022878<<endl;
        cout<<"Picioare pe secunda(fps): "<<x/12<<endl;
        cout<<"Picioare pe minut(ft/min): "<<x*4.999999999999999<<endl;
        cout<<"Metri pe ora(m/h): "<<x*91.43992684805852<<endl;
        cout<<"Metri pe minut(m/min): "<<x*1.5239999695200006<<endl;
        cout<<"Metri pe secunda(m/s): "<<x/39.37<<endl;
        cout<<"Tol pe secunda(ips): "<<x<<endl;
        cout<<"Mile pe ora(mph): "<<x/17.6<<endl;
        cout<<"Mile pe secunda(mps): "<<x/39.37<<endl;
        cout<<"Mila marina pe ora(nmi/h): "<<x/20.25<<endl;
        cout<<"Yarzi pe ora(Yd/h): "<<x*100<<endl;
        cout<<"Yarzi pe min(Yd/min): "<<x*1.666666229221462<<endl;
        cout<<"Yarzi pe secunda(Yd/s): "<<x/36<<endl;
    }
    else if(y==10)
    {
        cout<<"Centimetri pe minut(cm/min): "<<x*2682.2394635521073<<endl;
        cout<<"Centimetri pe secunda(cm/s): "<<x*44.704<<endl;
        cout<<"Picioare pe ora(fph): "<<x*5279.979212680265<<endl;
        cout<<"Picioare pe secunda(fps): "<<x*1.4666666666666666<<endl;
        cout<<"Picioare pe minut(ft/min): "<<x*88<<endl;
        cout<<"Metri pe ora(m/h): "<<x*1609.34271252583<<endl;
        cout<<"Metri pe minut(m/min): "<<x*26.82239946355201<<endl;
        cout<<"Metri pe secunda(m/s): "<<x/2.2369<<endl;
        cout<<"Tol pe secunda(ips): "<<x*17.6<<endl;
        cout<<"Mile pe ora(mph): "<<x<<endl;
        cout<<"Meter per second(mps): "<<x/2.2369<<endl;
        cout<<"Mila marina pe ora(nmi/h): "<<x/1.15068<<endl;
        cout<<"Yarzi pe ora(Yd/h): "<<x*1760<<endl;
        cout<<"Yarzi pe min(Yd/min): "<<x*29.333325634297733<<endl;
        cout<<"Yarzi pe secunda(Yd/s): "<<x/2.045455<<endl;
    }
    else if(y==11)
    {
        cout<<"Centimetri pe minut(cm/min): "<<x*5999.99880000024<<endl;
        cout<<"Centimetri pe secunda(cm/s): "<<x*100<<endl;
        cout<<"Picioare pe ora(fph): "<<x*11810.977122137316<<endl;
        cout<<"Picioare pe secunda(fps): "<<x*3.280839895013123<<endl;
        cout<<"Picioare pe minut(ft/min): "<<x*196.85039370078738<<endl;
        cout<<"Metri pe ora(m/h): "<<x*3599.9971200023037<<endl;
        cout<<"Metri pe minut(m/min): "<<x*59.99999880000003<<endl;
        cout<<"Metri pe secunda(m/s): "<<x<<endl;
        cout<<"Tol pe secunda(ips): "<<x*39.37007874015748<<endl;
        cout<<"Mile pe ora(mph): "<<x*2.2369362920544025<<endl;
        cout<<"Mile pe secunda(mps): "<<x<<endl;
        cout<<"Mila marina pe ora(nmi/h): "<<x*1.944012441679627<<endl;
        cout<<"Yarzi pe ora(Yd/h): "<<x*3937.0078740157483<<endl;
        cout<<"Yarzi pe min(Yd/min): "<<x*65.61678067801033<<endl;
        cout<<"Yarzi pe secunda(Yd/s): "<<x*1.0936130000578717<<endl;
    }
    else if(y==12)
    {
        cout<<"Centimetri pe minut(cm/min): "<<x*3086.3993827201234<<endl;
        cout<<"Centimetri pe secunda(cm/s): "<<x*51.44<<endl;
        cout<<"Picioare pe ora(fph): "<<x*6075.566631627435<<endl;
        cout<<"Picioare pe secunda(fps): "<<x*1.6876640419947504<<endl;
        cout<<"Picioare pe minut(ft/min): "<<x*101.25984251968502<<endl;
        cout<<"Metri pe ora(m/h): "<<x*1851.838518529185<<endl;
        cout<<"Metri pe minut(m/min): "<<x*30.86399938272001<<endl;
        cout<<"Metri pe secunda(m/s): "<<x/1.944012<<endl;
        cout<<"Tol pe secunda(ips): "<<x*20.251968503937007<<endl;
        cout<<"Mile pe ora(mph): "<<x*1.1506800286327845<<endl;
        cout<<"Mile pe secunda(mps): "<<x/1.944012<<endl;
        cout<<"Mila marina pe ora(nmi/h): "<<x<<endl;
        cout<<"Yarzi pe ora(Yd/h): "<<x*2025.1968503937007<<endl;
        cout<<"Yarzi pe min(Yd/min): "<<x*33.75327198076851<<endl;
        cout<<"Yarzi pe secunda(Yd/s): "<<x/17776<<endl;
    }
    else if(y==13)
    {
        cout<<"Centimetri pe minut(cm/min): "<<x*1.523999695200061<<endl;
        cout<<"Centimetri pe secunda(cm/s): "<<x/39.37<<endl;
        cout<<"Picioare pe ora(fph): "<<x*2.999988189022878<<endl;
        cout<<"Picioare pe secunda(fps): "<<x/1200<<endl;
        cout<<"Picioare pe minut(ft/min): "<<x/20<<endl;
        cout<<"Metri pe ora(m/h): "<<x/1.0936<<endl;
        cout<<"Metri pe minut(m/min): "<<x/65.6167<<endl;
        cout<<"Metri pe secunda(m/s): "<<x/3937.0078<<endl;
        cout<<"Tol pe secunda(ips): "<<x/100<<endl;
        cout<<"Mile pe ora(mph): "<<x/1760<<endl;
        cout<<"Mile pe secunda(mps): "<<x/3937.0078<<endl;
        cout<<"Mila marina pe ora(nmi/h): "<<x*2025.1968<<endl;
        cout<<"Yarzi pe ora(Yd/h): "<<x<<endl;
        cout<<"Yarzi pe min(Yd/min): "<<x/60<<endl;
        cout<<"Yarzi pe secunda(Yd/s): "<<x/3600.00098<<endl;
    }
    else if(y==14)
    {
        cout<<"Centimetri pe minut(cm/min): "<<x*91.44000571199886<<endl;
        cout<<"Centimetri pe secunda(cm/s): "<<x*1.5240004<<endl;
        cout<<"Picioare pe ora(fph): "<<x*179.99933858528118<<endl;
        cout<<"Picioare pe secunda(fps): "<<x/19.9999<<endl;
        cout<<"Picioare pe minut(ft/min): "<<x*3.0000007874015746<<endl;
        cout<<"Metri pe ora(m/h): "<<x*54.86397050882359<<endl;
        cout<<"Metri pe minut(m/min): "<<x/1.0936<<endl;
        cout<<"Metri pe secunda(m/s): "<<x/65.6167<<endl;
        cout<<"Tol pe secunda(ips): "<<x/1.6666<<endl;
        cout<<"Mile pe ora(mph): "<<x/29.3333<<endl;
        cout<<"Mile pe secunda(mps): "<<x/65.6167<<endl;
        cout<<"Mila marina pe ora(nmi/h): "<<x/33.7532<<endl;
        cout<<"Yarzi pe ora(Yd/h): "<<x*60.000015748031494<<endl;
        cout<<"Yarzi pe min(Yd/min): "<<x<<endl;
        cout<<"Yarzi pe secunda(Yd/s): "<<x/60<<endl;
    }
    else if(y==15)
    {
        cout<<"Centimetri pe minut(cm/min): "<<x*5486.400399119921<<endl;
        cout<<"Centimetri pe secunda(cm/s): "<<x*91.44002494<<endl;
        cout<<"Picioare pe ora(fph): "<<x*10799.960426140055<<endl;
        cout<<"Picioare pe secunda(fps): "<<x*3.0000008182414697<<endl;
        cout<<"Picioare pe minut(ft/min): "<<x*180.00004909448816<<endl;
        cout<<"Metri pe ora(m/h): "<<x*3291.8382643693885<<endl;
        cout<<"Metri pe minut(m/min): "<<x*54.86401386671972<<endl;
        cout<<"Metri pe secunda(m/s): "<<x/1.03936<<endl;
        cout<<"Tol pe secunda(ips): "<<x*36.00000981889764<<endl;
        cout<<"Mile pe ora(mph): "<<x*2.0454551033464567<<endl;
        cout<<"Mile pe secunda(mps): "<<x*0.9144002494<<endl;
        cout<<"Mila marina pe ora(nmi/h): "<<x*1.7776054615085537<<endl;
        cout<<"Yarzi pe ora(Yd/h): "<<x*3600.000981889764<<endl;
        cout<<"Yarzi pe min(Yd/min): "<<x*60.000000616797735<<endl;
        cout<<"Yarzi pe secunda(Yd/s): "<<x<<endl;
    }
}
void marimiTEMPERATURA()
{
    cout<<"1.Grade Celsius(C°)"<<endl;
    cout<<"2.Grade Fahrenheit(F°)"<<endl;
    cout<<"3.Grade Kelvin(K°)"<<endl;
    cout<<"4.Grade Rankie(R°)"<<endl;
}
void TEMPERATURA(int x, int y)
{
    void marimiTEMPERATURA();
    cout<<"Introduceti numarul pentru unitatea de masura pe care doriti sa o convertiti";
    cin>>y;
    if(y<0 && y>4) return;
    citireValoarePentruConvertire(x);
    if(y==1)
    {
        cout<<"Grade Celsius(C°): "<<x<<endl;
        cout<<"Grade Fahrenheit(F°): "<<(x*9)/5+32<<endl;
        cout<<"Grade Kelvin(K°): "<<x+273.15<<endl;
        cout<<"Grade Rankie(R°): "<<(x+273.15)*9/5<<endl;
    }
    else if(y==2)
    {
        cout<<"Grade Celsius(C°): "<<(x-32)*5/9<<endl;
        cout<<"Grade Fahrenheit(F°): "<<x<<endl;
        cout<<"Grade Kelvin(K°): "<<(x+459.67)*5/9<<endl;
        cout<<"Grade Rankie(R°): "<<(x-32)+491.67<<endl;
    }
    else if(y==3)
    {
        cout<<"Grade Celsius(C°): "<<x-273.15<<endl;
        cout<<"Grade Fahrenheit(F°): "<<x*9/5-459.67<<endl;
        cout<<"Grade Kelvin(K°): "<<x<<endl;
        cout<<"Grade Rankie(R°): "<<x*9/5<<endl;
    }
    else if(y==4)
    {
        cout<<"Grade Celsius(C°): "<<(x-491.67)*5/9<<endl;
        cout<<"Grade Fahrenheit(F°): "<<x-459.67<<endl;
        cout<<"Grade Kelvin(K°): "<<x*5/9<<endl;
        cout<<"Grade Rankie(R°): "<<x<<endl;
    }
}
void marimiMASA()
{
        cout<<"1.Grame(g)"<<endl;
        cout<<"2.Kilograme(kg)"<<endl;
        cout<<"3.Funte(pound)"<<endl;
        cout<<"4.Miligrame(mg)"<<endl;
        cout<<"5.Unici(oz(AV))"<<endl;
        cout<<"6.Unici(oz(Troy)"<<endl;
        cout<<"7.Slug(slug)"<<endl;
        cout<<"8.Tone(t)"<<endl;
}
void MASA(int x, int y)
{
    marimiMASA();
    cout<<"Introduceti numarul pentru unitatea de masura pe care doriti sa o convertiti";
    cin>>y;
    if(y<0 && y>8) return;
    citireValoarePentruConvertire(x);
    if(y==1)
    {
        cout<<"Grame(g): "<<x<<endl;
        cout<<"Kilograme(kg): "<<x/1000<<endl;
        cout<<"Funte(pound): "<<x*0.0022046244201837776<<endl;
        cout<<"Miligrame(mg): "<<x*1000<<endl;
        cout<<"Unici(oz(AV)): "<<x*0.03527399072294044<<endl;
        cout<<"Unici(oz(Troy): "<<x*0.0643014451749803<<endl;
        cout<<"Slug(slug): "<<x*0.00006852176556196105<<endl;
        cout<<"Tone(t): "<<x*0.000001<<endl;
    }
    else if(y==2)
    {
        cout<<"Grame(g): "<<x*1000<<endl;
        cout<<"Kilograme(kg): "<<x<<endl;
        cout<<"Funte(pound): "<<x*2.2046244201837775<<endl;
        cout<<"Miligrame(mg): "<<x*1000000<<endl;
        cout<<"Unici(oz(AV)): "<<x*35.27399072294044<<endl;
        cout<<"Unici(oz(Troy): "<<x*32.15072258749016<<endl;
        cout<<"Slug(slug): "<<x*0.06852176556196105<<endl;
        cout<<"Tone(t): "<<x/1000<<endl;

    }
    else if(y==3)
    {
        cout<<"Grame(g): "<<x*453.592<<endl;
        cout<<"Kilograme(kg): "<<x*0.453592<<endl;
        cout<<"Funte(pound): "<<x<<endl;
        cout<<"Miligrame(mg): "<<x*453592<<endl;
        cout<<"Unici(oz(AV)): "<<x*16<<endl;
        cout<<"Unici(oz(Troy): "<<x*14.583310559904834<<endl;
        cout<<"Slug(slug): "<<x*0.031080924684781037<<endl;
        cout<<"Tone(t): "<<x*0.000453592<<endl;

    }
    else if(y==4)
    {
        cout<<"Grame(g): "<<x/1000<<endl;
        cout<<"Kilograme(kg): "<<x/1000000<<endl;
        cout<<"Funte(pound): "<<x*0.0000022046244201837775<<endl;
        cout<<"Miligrame(mg): "<<x<<endl;
        cout<<"Unici(oz(AV)): "<<x*0.00003527399072294044<<endl;
        cout<<"Unici(oz(Troy): "<<x*0.00003215072258749015<<endl;
        cout<<"Slug(slug): "<<x*6.852176556196105e-8<<endl;
        cout<<"Tone(t): "<<x*9.999999999999999e-10<<endl;
    }
    else if(y==5)
    {
        cout<<"Grame(g): "<<x*28.3495<<endl;
        cout<<"Kilograme(kg): "<<x*0.0283495<<endl;
        cout<<"Funte(pound): "<<x*0.0625<<endl;
        cout<<"Miligrame(mg): "<<x*28349.5<<endl;
        cout<<"Unici(oz(AV)): "<<x<<endl;
        cout<<"Unici(oz(Troy): "<<x*0.9114569099940522<<endl;
        cout<<"Slug(slug): "<<x*0.0019425577927988148<<endl;
        cout<<"Tone(t): "<<x*0.0000283495<<endl;

    }
    else if(y==6)
    {
        cout<<"Grame(g): "<<x*31.103499999999997<<endl;
        cout<<"Kilograme(kg): "<<x*0.0311035<<endl;
        cout<<"Funte(pound): "<<x*0.06857153565318612<<endl;
        cout<<"Miligrame(mg): "<<x*31103.5<<endl;
        cout<<"Unici(oz(AV)): "<<x*1.097144570450978<<endl;
        cout<<"Unici(oz(Troy): "<<x<<endl;
        cout<<"Slug(slug): "<<x*0.0021312667351564554<<endl;
        cout<<"Tone(t): "<<x*0.0000311035<<endl;

    }
    else if(y==7)
    {
        cout<<"Grame(g): "<<x*14593.902999999998<<endl;
        cout<<"Kilograme(kg): "<<x*14.593903<<endl;
        cout<<"Funte(pound): "<<x*32.17407493959329<<endl;
        cout<<"Miligrame(mg): "<<x*14593903<<endl;
        cout<<"Unici(oz(AV)): "<<x*514.7851990334926<<endl;
        cout<<"Unici(oz(Troy): "<<x*469.20452682174033<<endl;
        cout<<"Slug(slug): "<<x<<endl;
        cout<<"Tone(t): "<<x*0.014593902999999998<<endl;

    }
    else if(y==8)
    {
        cout<<"Grame(g): "<<x*1000000<<endl;
        cout<<"Kilograme(kg): "<<x*1000<<endl;
        cout<<"Funte(pound): "<<x*2204.6244201837776<<endl;
        cout<<"Miligrame(mg): "<<x<*1000000000<endl;
        cout<<"Unici(oz(AV)): "<<x*35273.99072294044<<endl;
        cout<<"Unici(oz(Troy): "<<x<32150.722587490156<endl;
        cout<<"Slug(slug): "<<x*68.52176556196105<<endl;
        cout<<"Tone(t): "<<x<<endl;

    }
}
void marimiENERGIE()
{
    cout<<"1.British Thermal Unit(Btu)"<<endl;
    cout<<"2.Calorie(cal)"<<endl;
    cout<<"3.Erg(erg)"<<endl;
    cout<<"4.Picioare pe Livre-forta(ft-lbf)"<<endl;
    cout<<"5.Toli pe Livre-forta(in-lbf)"<<endl;
    cout<<"6.Jouli(J)"<<endl;
    cout<<"7.Kilocalorie(kcal)"<<endl;
    cout<<"8.Kilojouli(kJ)"<<endl;
    cout<<"9.Kilowatt pe ora(kW-h)"<<endl;
    cout<<"10.Quad BTU(quad BTU)"<<endl;
    cout<<"11.Tona de combustibil conventional(tcc)"<<endl;
    cout<<"12.Tona Echivalent Petrol(tep)"<<endl;
    cout<<"13.Thermie(th)"<<endl;
    cout<<"14.Watt pe ora(W-h)"<<endl;
    cout<<"15.Watt pe secunda(W-s)"<<endl;
}
void ENERGIE(int x, int y)
{
    marimiENERGIE();
    cout<<"Introduceti numarul pentru unitatea de masura pe care doriti sa o convertiti";
    cin>>y;
    if(y<0 && y>15) return;
    citireValoarePentruConvertire(x);
    if(y==1)
    {
        cout<<"British Thermal Unit(Btu): "<<x<<endl;
        cout<<"Calorie(cal): "<<x*251.99675169580587<<endl;
        cout<<"Erg(erg): "<<x*10550600000<<endl;
        cout<<"Picioare pe Livre-forta(ft-lbf): "<<x*778.1723212164718<<endl;
        cout<<"Toli pe Livre-forta(in-lbf): "<<x*9338.067855227171<<endl;
        cout<<"Jouli(J): "<<x*1055.06<<endl;
        cout<<"Kilocalorie(kcal): "<<x*0.2519967516958058<<endl;
        cout<<"Kilojouli(kJ): "<<x*1.0550599999999999<<endl;
        cout<<"Kilowatt pe ora(kW-h): "<<x*0.0002930722222222222<<endl;
        cout<<"Quad BTU(quad BTU): "<<x*9.999999999999999e-16<<endl;
        cout<<"Tona de combustibil conventional(tcc): "<<x*3.599953595654369e-8<<endl;
        cout<<"Tona Echivalent Petrol(tep): "<<x*2.5199675169580585e-8<<endl;
        cout<<"Thermie(th): "<<x*0.00025199675169580585<<endl;
        cout<<"Watt pe ora(W-h): "<<x*0.29307222222222223<<endl;
        cout<<"Watt pe secunda(W-s): "<<x*1055.06<<endl;
    }
    else if(y==2)
    {
        cout<<"British Thermal Unit(Btu): "<<x*0.003968305120087957<<endl;
        cout<<"Calorie(cal): "<<x<<endl;
        cout<<"Erg(erg): "<<x*41868000<<endl;
        cout<<"Picioare pe Livre-forta(ft-lbf): "<<x*3.0880252065940557<<endl;
        cout<<"Toli pe Livre-forta(in-lbf): "<<x*37.05630248162675<<endl;
        cout<<"Jouli(J): "<<x*4.1868<<endl;
        cout<<"Kilocalorie(kcal): "<<x/1000<<endl;
        cout<<"Kilojouli(kJ): "<<x*0.0041868<<endl;
        cout<<"Kilowatt pe ora(kW-h): "<<x*0.000001163<<endl;
        cout<<"Quad BTU(quad BTU): "<<x*3.968305120087957e-18<<endl;
        cout<<"Tona de combustibil conventional(tcc): "<<x*1.4285714285714285e-10<<endl;
        cout<<"Tona Echivalent Petrol(tep): "<<x*9.999999999999999e-11<<endl;
        cout<<"Thermie(th): "<<x/1000000<<endl;
        cout<<"Watt pe ora(W-h): "<<x*0.001163<<endl;
        cout<<"Watt pe secunda(W-s): "<<x*4.1868<<endl;
    }
    else if(y==3)
    {
        cout<<"British Thermal Unit(Btu): "<<x*9.478133944988911e-11<<endl;
        cout<<"Calorie(cal): "<<x*2.3884589662749594e-8<<endl;
        cout<<"Erg(erg): "<<x<<endl;
        cout<<"Picioare pe Livre-forta(ft-lbf): "<<x*7.375621492772656e-8<<endl;
        cout<<"Toli pe Livre-forta(in-lbf): "<<x*8.85074<<endl;
        cout<<"Jouli(J): "<<x*1e-7<<endl;
        cout<<"Kilocalorie(kcal): "<<x*2.388458966274959e-11<<endl;
        cout<<"Kilojouli(kJ): "<<x*9.999999999999999e-11<<endl;
        cout<<"Kilowatt pe ora(kW-h): "<<x*2.7777777777777778e-14<<endl;
        cout<<"Quad BTU(quad BTU): "<<x*9.47813394498891e-26<<endl;
        cout<<"Tona de combustibil conventional(tcc): "<<x*3.412084237535656e-18<<endl;
        cout<<"Tona Echivalent Petrol(tep): "<<x*2.388458966274959e-18<<endl;
        cout<<"Thermie(th): "<<x*2.3884589662749592e-14<<endl;
        cout<<"Watt pe ora(W-h): "<<x*2.7777777777777777e-11<<endl;
        cout<<"Watt pe secunda(W-s): "<<x*1e-7<<endl;
    }
    else if(y==4)
    {
        cout<<"British Thermal Unit(Btu): "<<x*0.0012850624119305062<<endl;
        cout<<"Calorie(cal): "<<x*0.3238315535328652<<endl;
        cout<<"Erg(erg): "<<x*13558179.483314<<endl;
        cout<<"Picioare pe Livre-forta(ft-lbf): "<<x<<endl;
        cout<<"Toli pe Livre-forta(in-lbf): "<<x*12.000000000808958<<endl;
        cout<<"Jouli(J): "<<x*1.3558179483314<<endl;
        cout<<"Kilocalorie(kcal): "<<x*0.00032383155353286517<<endl;
        cout<<"Kilojouli(kJ): "<<x*0.0013558179483314<<endl;
        cout<<"Kilowatt pe ora(kW-h): "<<x*3.766160967587222e-7<<endl;
        cout<<"Quad BTU(quad BTU): "<<x*1.2850624119305062e-18<<endl;
        cout<<"Tona de combustibil conventional(tcc): "<<x*4.626165050469502e-11<<endl;
        cout<<"Tona Echivalent Petrol(tep): "<<x*3.2383155353286514e-11<<endl;
        cout<<"Thermie(th): "<<x*3.238315535328652e-7<<endl;
        cout<<"Watt pe ora(W-h): "<<x*0.0003766160967587222<<endl;
        cout<<"Watt pe secunda(W-s): "<<x*1.3558179483314<<endl;
    }
    else if(y==5)
    {
        cout<<"British Thermal Unit(Btu): "<<x*0.00010708853432032301<<endl;
        cout<<"Calorie(cal): "<<x*0.026985962792586225<<endl;
        cout<<"Erg(erg): "<<x*1129848.2902<<endl;
        cout<<"Picioare pe Livre-forta(ft-lbf): "<<x*0.08333333332771557<<endl;
        cout<<"Toli pe Livre-forta(in-lbf): "<<x<<endl;
        cout<<"Jouli(J): "<<x*0.11298482902<<endl;
        cout<<"Kilocalorie(kcal): "<<x*0.00002698596279258622<<endl;
        cout<<"Kilojouli(kJ): "<<x*0.00011298482902<<endl;
        cout<<"Kilowatt pe ora(kW-h): "<<x*3.138467472777778e-8<<endl;
        cout<<"Quad BTU(quad BTU): "<<x*1.0708853432032301e-19<<endl;
        cout<<"Tona de combustibil conventional(tcc): "<<x*3.855137541798032e-12<<endl;
        cout<<"Tona Echivalent Petrol(tep): "<<x*2.6985962792586224e-12<<endl;
        cout<<"Thermie(th): "<<x*2.6985962792586224e-8<<endl;
        cout<<"Watt pe ora(W-h): "<<x*0.000031384674727777776<<endl;
        cout<<"Watt pe secunda(W-s): "<<x*0.11298482902<<endl;
    }
    else if(y==6)
    {
        cout<<"British Thermal Unit(Btu): "<<x*0.0009478133944988911<<endl;
        cout<<"Calorie(cal): "<<x*0.23884589662749595<<endl;
        cout<<"Erg(erg): "<<x*10000000<<endl;
        cout<<"Picioare pe Livre-forta(ft-lbf): "<<x*0.7375621492772656<<endl;
        cout<<"Toli pe Livre-forta(in-lbf): "<<x*8.850745791923844<<endl;
        cout<<"Jouli(J): "<<x<<endl;
        cout<<"Kilocalorie(kcal): "<<x*0.00023884589662749592<<endl;
        cout<<"Kilojouli(kJ): "<<x/1000<<endl;
        cout<<"Kilowatt pe ora(kW-h): "<<x*2.7777777777777776e-7<<endl;
        cout<<"Quad BTU(quad BTU): "<<x*9.47813394498891e-19<<endl;
        cout<<"Tona de combustibil conventional(tcc): "<<x*3.412084237535656e-11<<endl;
        cout<<"Tona Echivalent Petrol(tep): "<<x*2.3884589662749594e-11<<endl;
        cout<<"Thermie(th): "<<x*2.388458966274959e-7<<endl;
        cout<<"Watt pe ora(W-h): "<<x*0.0002777777777777778<<endl;
        cout<<"Watt pe secunda(W-s): "<<x<<endl;
    }
    else if(y==7)
    {
        cout<<"British Thermal Unit(Btu): "<<x*3.9683051200879573<<endl;
        cout<<"Calorie(cal): "<<x*1000.0000000000001<<endl;
        cout<<"Erg(erg): "<<x*41868000000<<endl;
        cout<<"Picioare pe Livre-forta(ft-lbf): "<<x*3088.025206594056<<endl;
        cout<<"Toli pe Livre-forta(in-lbf): "<<x*37056.30248162675<<endl;
        cout<<"Jouli(J): "<<x*4186.8<<endl;
        cout<<"Kilocalorie(kcal): "<<x<<endl;
        cout<<"Kilojouli(kJ): "<<x<<endl;
        cout<<"Kilowatt pe ora(kW-h): "<<x<<endl;
        cout<<"Quad BTU(quad BTU): "<<x<<endl;
        cout<<"Tona de combustibil conventional(tcc): "<<x<<endl;
        cout<<"Tona Echivalent Petrol(tep): "<<x<<endl;
        cout<<"Thermie(th): "<<x<<endl;
        cout<<"Watt pe ora(W-h): "<<x<<endl;
        cout<<"Watt pe secunda(W-s): "<<x<<endl;
    }
    else if(y==8)
    {
        cout<<"British Thermal Unit(Btu): "<<x*0.9478133944988911<<endl;
        cout<<"Calorie(cal): "<<x*238.84589662749596<<endl;
        cout<<"Erg(erg): "<<x*10000000000<<endl;
        cout<<"Picioare pe Livre-forta(ft-lbf): "<<x*737.5621492772657<<endl;
        cout<<"Toli pe Livre-forta(in-lbf): "<<x*8850.745791923844<<endl;
        cout<<"Jouli(J): "<<x*1000<<endl;
        cout<<"Kilocalorie(kcal): "<<x*0.23884589662749592<<endl;
        cout<<"Kilojouli(kJ): "<<x<<endl;
        cout<<"Kilowatt pe ora(kW-h): "<<x*0.0002777777777777778<<endl;
        cout<<"Quad BTU(quad BTU): "<<x*9.47813394498891e-16<<endl;
        cout<<"Tona de combustibil conventional(tcc): "<<x*3.4120842375356563e-8<<endl;
        cout<<"Tona Echivalent Petrol(tep): "<<x*2.3884589662749594e-8<<endl;
        cout<<"Thermie(th): "<<x*0.00023884589662749594<<endl;
        cout<<"Watt pe ora(W-h): "<<x*0.2777777777777778<<endl;
        cout<<"Watt pe secunda(W-s): "<<x*1000<<endl;
    }
    else if(y==9)
    {
        cout<<"British Thermal Unit(Btu): "<<x*3412.128220196008<<endl;
        cout<<"Calorie(cal): "<<x*859845.2278589854<<endl;
        cout<<"Erg(erg): "<<x*36000000000000<<endl;
        cout<<"Picioare pe Livre-forta(ft-lbf): "<<x*2655223.7373981564<<endl;
        cout<<"Toli pe Livre-forta(in-lbf): "<<x*31862684.85092584<<endl;
        cout<<"Jouli(J): "<<x*3600000<<endl;
        cout<<"Kilocalorie(kcal): "<<x*859.8452278589854<<endl;
        cout<<"Kilojouli(kJ): "<<x*3600<<endl;
        cout<<"Kilowatt pe ora(kW-h): "<<x<<endl;
        cout<<"Quad BTU(quad BTU): "<<x*3.4121282201960077e-12<<endl;
        cout<<"Tona de combustibil conventional(tcc): "<<x*0.00012283503255128362<<endl;
        cout<<"Tona Echivalent Petrol(tep): "<<x*0.00008598452278589854<<endl;
        cout<<"Thermie(th): "<<x*0.8598452278589854<<endl;
        cout<<"Watt pe ora(W-h): "<<x*1000<<endl;
        cout<<"Watt pe secunda(W-s): "<<x*3600000<<endl;
    }
    else if(y==10)
    {
        cout<<"British Thermal Unit(Btu): "<<x*1000000000000000<<endl;
        cout<<"Calorie(cal): "<<x*251996751695805900<<endl;
        cout<<"Erg(erg): "<<x*1.05506e+25<<endl;
        cout<<"Picioare pe Livre-forta(ft-lbf): "<<x*778172321216471900<<endl;
        cout<<"Toli pe Livre-forta(in-lbf): "<<x*9338067855227170000<<endl;
        cout<<"Jouli(J): "<<x*1055060000000000000<<endl;
        cout<<"Kilocalorie(kcal): "<<x*251996751695805.84<<endl;
        cout<<"Kilojouli(kJ): "<<x*1055060000000000<<endl;
        cout<<"Kilowatt pe ora(kW-h): "<<x*293072222222.2222<<endl;
        cout<<"Quad BTU(quad BTU): "<<x<<endl;
        cout<<"Tona de combustibil conventional(tcc): "<<x*35999535.95654369<<endl;
        cout<<"Tona Echivalent Petrol(tep): "<<x*25199675.169580586<<endl;
        cout<<"Thermie(th): "<<x*251996751695.80588<<endl;
        cout<<"Watt pe ora(W-h): "<<x*293072222222222.25<<endl;
        cout<<"Watt pe secunda(W-s): "<<x*1055060000000000000<<endl;
    }
    else if(y==11)
    {
        cout<<"British Thermal Unit(Btu): "<<x*27778135.8406157<<endl;
        cout<<"Calorie(cal): "<<x*7000000000<<endl;
        cout<<"Erg(erg): "<<x*293076000000000000<<endl;
        cout<<"Picioare pe Livre-forta(ft-lbf): "<<x*21616176446.15839<<endl;
        cout<<"Toli pe Livre-forta(in-lbf): "<<x*259394117371.38727<<endl;
        cout<<"Jouli(J): "<<x*29307600000<<endl;
        cout<<"Kilocalorie(kcal): "<<x*7000000<<endl;
        cout<<"Kilojouli(kJ): "<<x*29307600<<endl;
        cout<<"Kilowatt pe ora(kW-h): "<<x*8141<<endl;
        cout<<"Quad BTU(quad BTU): "<<x*2.77781358406157e-8<<endl;
        cout<<"Tona de combustibil conventional(tcc): "<<x<<endl;
        cout<<"Tona Echivalent Petrol(tep): "<<x*0.7<<endl;
        cout<<"Thermie(th): "<<x*7000<<endl;
        cout<<"Watt pe ora(W-h): "<<x*8141000<<endl;
        cout<<"Watt pe secunda(W-s): "<<x*29307600000<<endl;
    }
    else if(y==12)
    {
        cout<<"British Thermal Unit(Btu): "<<x*39683051.200879574<<endl;
        cout<<"Calorie(cal): "<<x*10000000000<<endl;
        cout<<"Erg(erg): "<<x*418680000000000000<<endl;
        cout<<"Picioare pe Livre-forta(ft-lbf): "<<x*30880252065.94056<<endl;
        cout<<"Toli pe Livre-forta(in-lbf): "<<x*370563024816.2675<<endl;
        cout<<"Jouli(J): "<<x*41868000000<<endl;
        cout<<"Kilocalorie(kcal): "<<x*10000000<<endl;
        cout<<"Kilojouli(kJ): "<<x*41868000<<endl;
        cout<<"Kilowatt pe ora(kW-h): "<<x*11630<<endl;
        cout<<"Quad BTU(quad BTU): "<<x*3.968305120087957e-8<<endl;
        cout<<"Tona de combustibil conventional(tcc): "<<x*1.4285714285714286<<endl;
        cout<<"Tona Echivalent Petrol(tep): "<<x<<endl;
        cout<<"Thermie(th): "<<x*10000<<endl;
        cout<<"Watt pe ora(W-h): "<<x*11630000<<endl;
        cout<<"Watt pe secunda(W-s): "<<x*41868000000<<endl;
    }
    else if(y==13)
    {
        cout<<"British Thermal Unit(Btu): "<<x*3968.305120087957<<endl;
        cout<<"Calorie(cal): "<<x*1000000<<endl;
        cout<<"Erg(erg): "<<x*41868000000000<<endl;
        cout<<"Picioare pe Livre-forta(ft-lbf): "<<x*3088025.206594056<<endl;
        cout<<"Toli pe Livre-forta(in-lbf): "<<x*37056302.48162675<<endl;
        cout<<"Jouli(J): "<<x*4186800<<endl;
        cout<<"Kilocalorie(kcal): "<<x*1000<<endl;
        cout<<"Kilojouli(kJ): "<<x*4186.8<<endl;
        cout<<"Kilowatt pe ora(kW-h): "<<x*1.163<<endl;
        cout<<"Quad BTU(quad BTU): "<<x*3.968305120087957e-12<<endl;
        cout<<"Tona de combustibil conventional(tcc): "<<x*0.00014285714285714287<<endl;
        cout<<"Tona Echivalent Petrol(tep): "<<x/10000<<endl;
        cout<<"Thermie(th): "<<x<<endl;
        cout<<"Watt pe ora(W-h): "<<x*1163<<endl;
        cout<<"Watt pe secunda(W-s): "<<x*4186800<<endl;
    }
    else if(y==14)
    {
        cout<<"British Thermal Unit(Btu): "<<x*3.412128220196008<<endl;
        cout<<"Calorie(cal): "<<x*859.8452278589854<<endl;
        cout<<"Erg(erg): "<<x*36000000000<<endl;
        cout<<"Picioare pe Livre-forta(ft-lbf): "<<x*2655.223737398156<<endl;
        cout<<"Toli pe Livre-forta(in-lbf): "<<x*31862.684850925838<<endl;
        cout<<"Jouli(J): "<<x*3600<<endl;
        cout<<"Kilocalorie(kcal): "<<x*0.8598452278589853<<endl;
        cout<<"Kilojouli(kJ): "<<x*3.6<<endl;
        cout<<"Kilowatt pe ora(kW-h): "<<x/1000<<endl;
        cout<<"Quad BTU(quad BTU): "<<x*3.412128220196008e-15<<endl;
        cout<<"Tona de combustibil conventional(tcc): "<<x*1.2283503255128362e-7<<endl;
        cout<<"Tona Echivalent Petrol(tep): "<<x*8.598452278589854e-8<<endl;
        cout<<"Thermie(th): "<<x*0.0008598452278589854<<endl;
        cout<<"Watt pe ora(W-h): "<<x<<endl;
        cout<<"Watt pe secunda(W-s): "<<x*3600<<endl;
    }
    else if(y==15)
    {
        cout<<"British Thermal Unit(Btu): "<<x*0.0009478133944988911<<endl;
        cout<<"Calorie(cal): "<<x*0.23884589662749595<<endl;
        cout<<"Erg(erg): "<<x*10000000<<endl;
        cout<<"Picioare pe Livre-forta(ft-lbf): "<<x*0.7375621492772656<<endl;
        cout<<"Toli pe Livre-forta(in-lbf): "<<x*8.850745791923844<<endl;
        cout<<"Jouli(J): "<<x<<endl;
        cout<<"Kilocalorie(kcal): "<<x*0.00023884589662749592<<endl;
        cout<<"Kilojouli(kJ): "<<x/1000<<endl;
        cout<<"Kilowatt pe ora(kW-h): "<<x*2.7777777777777776e-7<<endl;
        cout<<"Quad BTU(quad BTU): "<<x*9.47813394498891e-19<<endl;
        cout<<"Tona de combustibil conventional(tcc): "<<x*3.412084237535656e-11<<endl;
        cout<<"Tona Echivalent Petrol(tep): "<<x*2.3884589662749594e-11<<endl;
        cout<<"Thermie(th): "<<x*2.388458966274959e-7<<endl;
        cout<<"Watt pe ora(W-h): "<<x*0.0002777777777777778<<endl;
        cout<<"Watt pe secunda(W-s): "<<x<<endl;
    }
}
int main()
{
    int x, y, z;
    meniu();
    citireNumarUnitateConvertire(x);
    if(x==1)
        LUNGIME(x,y);
    return 0;
}
