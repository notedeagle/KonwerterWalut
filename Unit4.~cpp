//---------------------------------------------------------------------------

#include <vcl.h>
#include <math.hpp>
#pragma hdrstop

#include "Unit1.h"
#include "Unit4.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm4 *Form4;
//---------------------------------------------------------------------------
__fastcall TForm4::TForm4(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------

void __fastcall TForm4::Button2Click(TObject *Sender)
{
        Edit1->SetFocus();
        Edit1->SelectAll();

        double usd = 4.18;
        double eur = 4.53;
        double chf = 4.28;
        double gbp = 5.21;
        double thb = 0.12;
        double aud = 2.71;
        double hkd = 0.53;
        double czk = 0.16;


        double wybor;
        double wynik;
        double zloty;

   try
   {
   ImageUSD->Hide();
   ImageEUR->Hide();
   ImageCHF->Hide();
   ImageGBP->Hide();
   ImageAUD->Hide();
   ImageCZK->Hide();
   ImageHKD->Hide();
   ImageTHB->Hide();

   switch(ComboBox1->ItemIndex)
   {
   case 0 :
        wybor = usd;
        ImageUSD->Show();
        break;
   case 1 :
        wybor = eur;
        ImageEUR->Show();
        break;
   case 2 :
        wybor = chf;
        ImageCHF->Show();
        break;
   case 3 :
        wybor = gbp;
        ImageGBP->Show();
        break;
   case 4 :
        wybor = thb;
        ImageTHB->Show();
        break;
   case 5 :
        wybor = aud;
        ImageAUD->Show();
        break;
   case 6 :
        wybor = hkd;
        ImageHKD->Show();
        break;
   case 7 :
        wybor = czk;
        ImageCZK->Show();
        break;
   default:
        Edit2->Text = "B³¹d!";
        break;
   }
        zloty = Edit1->Text.ToDouble();
        wynik = zloty * wybor;
        Edit2->Text = RoundTo(wynik, -2);

   }
   catch (EOverflow & e)
   {
        Application->MessageBox("Nie wybrano waluty!", "B³¹d!", MB_ICONWARNING);
   }
   catch (EInvalidOp & e)
   {
        Application->MessageBox("Nie wybrano waluty!", "B³¹d!", MB_ICONWARNING);
   }
   catch (EConvertError & e)
   {
        Application->MessageBox("Nie wpisano kwoty!", "B³¹d!", MB_ICONWARNING);
   }
}
//---------------------------------------------------------------------------

void __fastcall TForm4::Button1Click(TObject *Sender)
{
Form4->Hide();
Form1->Show();
}
//---------------------------------------------------------------------------
