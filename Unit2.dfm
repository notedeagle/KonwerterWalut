object Form2: TForm2
  Left = 1841
  Top = 996
  BorderStyle = bsDialog
  Caption = 'Konwerter'
  ClientHeight = 314
  ClientWidth = 554
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -12
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  OldCreateOrder = False
  Position = poDesktopCenter
  PixelsPerInch = 110
  TextHeight = 13
  object ListBox1: TListBox
    Left = 0
    Top = 0
    Width = 553
    Height = 241
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -24
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    ItemHeight = 29
    ParentFont = False
    TabOrder = 0
  end
  object Button1: TButton
    Left = 448
    Top = 264
    Width = 89
    Height = 33
    Cancel = True
    Caption = 'Cofnij'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -18
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    ParentFont = False
    TabOrder = 1
    OnClick = Button1Click
  end
end
