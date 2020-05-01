//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit2.h"
#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm2 *Form2;
//---------------------------------------------------------------------------
__fastcall TForm2::TForm2(TComponent* Owner)
        : TForm(Owner)
{
        double usd = 4.18;
        double eur = 4.53;
        double chf = 4.28;
        double gbp = 5.21;
        double thb = 0.12;
        double aud = 2.71;
        double hkd = 0.53;
        double czk = 0.16;

ListBox1->Items->Add("Dolar amerykañski 1USD = " + CurrToStr(usd) + "PLN");
ListBox1->Items->Add("Euro 1EUR = " + CurrToStr(eur) + "PLN");
ListBox1->Items->Add("Frank szwajcarski 1CHF = " + CurrToStr(chf) + "PLN");
ListBox1->Items->Add("Funt szterling 1GBP = " + CurrToStr(gbp) + "PLN");
ListBox1->Items->Add("Bat tajlandzki 1THB = " + CurrToStr(thb) + "PLN");
ListBox1->Items->Add("Dolar australijski 1AUD = " + CurrToStr(aud) + "PLN");
ListBox1->Items->Add("Dolar hongkoñski 1HKD = " + CurrToStr(hkd) + "PLN");
ListBox1->Items->Add("Korona czeska 1CZK = " + CurrToStr(czk) + "PLN");
}
//---------------------------------------------------------------------------





void __fastcall TForm2::Button1Click(TObject *Sender)
{
Form2->Hide();
Form1->Show();
}
//---------------------------------------------------------------------------



