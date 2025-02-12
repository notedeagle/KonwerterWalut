//---------------------------------------------------------------------------

#include <vcl.h>
#include <math.hpp>
#pragma hdrstop

#include "Unit1.h"
#include "Unit2.h"
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
        break;
   case 1 :
        choose = Form2->eur;
        ImageEUR->Show();
        break;
   case 2 :
        choose = Form2->chf;
        ImageCHF->Show();
        break;
   case 3 :
        choose = Form2->gbp;
        ImageGBP->Show();
        break;
   case 4 :
        choose = Form2->thb;
        ImageTHB->Show();
        break;
   case 5 :
        choose = Form2->aud;
        ImageAUD->Show();
        break;
   case 6 :
        choose = Form2->hkd;
        ImageHKD->Show();
        break;
   case 7 :
        choose = Form2->czk;
        ImageCZK->Show();
        break;
   default:
        Edit2->Text = "B��d!";
        break;
   }
        zloty = Edit1->Text.ToDouble();
        result = zloty * choose;
        Edit2->Text = RoundTo(result, -2);

   }
   catch (EOverflow & e)
   {
        Application->MessageBox("Nie wybrano waluty!", "B��d!", MB_ICONWARNING);
   }
   catch (EInvalidOp & e)
   {
        Application->MessageBox("Nie wybrano waluty!", "B��d!", MB_ICONWARNING);
   }
   catch (EConvertError & e)
   {
        Application->MessageBox("Nie wpisano kwoty!", "B��d!", MB_ICONWARNING);
   }
}
//---------------------------------------------------------------------------

void __fastcall TForm4::Button1Click(TObject *Sender)
{
Form4->Hide();
Form1->Show();
}
//---------------------------------------------------------------------------
