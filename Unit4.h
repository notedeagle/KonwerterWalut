//---------------------------------------------------------------------------

#ifndef Unit4H
#define Unit4H
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <ExtCtrls.hpp>
#include <jpeg.hpp>
//---------------------------------------------------------------------------
class TForm4 : public TForm
{
__published:	// IDE-managed Components
        TLabel *Label1;
        TLabel *Label2;
        TEdit *Edit1;
        TComboBox *ComboBox1;
        TButton *Button1;
        TButton *Button2;
        TEdit *Edit2;
        TImage *ImageUSD;
        TImage *ImageEUR;
        TImage *ImageCHF;
        TImage *ImageGBP;
        TImage *ImageTHB;
        TImage *ImageAUD;
        TImage *ImageHKD;
        TImage *ImageCZK;
        TLabel *Label3;
        void __fastcall Button2Click(TObject *Sender);
        void __fastcall Button1Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
        __fastcall TForm4(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm4 *Form4;
//---------------------------------------------------------------------------
#endif
