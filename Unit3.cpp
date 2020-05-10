//---------------------------------------------------------------------------

#include <vcl.h>
#include <math.hpp>
#pragma hdrstop

#include "Unit1.h"
#include "Unit2.h"
#include "Unit3.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm3 *Form3;
//---------------------------------------------------------------------------
__fastcall TForm3::TForm3(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------
    double wybor;

void __fastcall TForm3::Button1Click(TObject *Sender)
{
Form3->Hide();
Form1->Show();
}
//---------------------------------------------------------------------------

void __fastcall TForm3::Button2Click(TObject *Sender)
{

        Edit1->SetFocus();
        Edit1->SelectAll();

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
        choose = Form2->usd;
        ImageUSD->Show();
        Label3->Caption = "USD";
        break;
   case 1 :
        choose = Form2->eur;
        ImageEUR->Show();
        Label3->Caption = "EUR";
        break;
   case 2 :
        choose = Form2->chf;
        ImageCHF->Show();
        Label3->Caption = "CHF";
        break;
   case 3 :
        choose = Form2->gbp;
        ImageGBP->Show();
        Label3->Caption = "GBP";
        break;
   case 4 :
        choose = Form2->thb;
        ImageTHB->Show();
        Label3->Caption = "THB";
        break;
   case 5 :
        choose = Form2->aud;
        ImageAUD->Show();
        Label3->Caption = "AUD";
        break;
   case 6 :
        choose = Form2->hkd;
        ImageHKD->Show();
        Label3->Caption = "HKD";
        break;
   case 7 :
        choose = Form2->czk;
        ImageCZK->Show();
        Label3->Caption = "CZK";
        break;
   default:
        Edit2->Text = "B³¹d!";
        break;
   }
        zloty = Edit1->Text.ToDouble();
        result = zloty / choose;
        Edit2->Text = RoundTo(result, -2);

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
   catch (EZeroDivide & e)
   {
        Application->MessageBox("Nie wybrano waluty!", "B³¹d!", MB_ICONWARNING);
   }
}
//---------------------------------------------------------------------------


