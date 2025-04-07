Unit Unit1;

interface

uses System, System.Drawing, System.Windows.Forms;

var numbeer, p : integer; massaage, alf, anslovo : string;

type
  Form1 = class(Form)
    procedure textBox1_TextChanged(sender: Object; e: EventArgs);
    procedure textBox2_TextChanged(sender: Object; e: EventArgs);
    procedure button1_Click(sender: Object; e: EventArgs);
  {$region FormDesigner}
  internal
    {$resource Unit1.Form1.resources}
    textBox1: TextBox;
    textBox2: TextBox;
    button1: Button;
    label2: &Label;
    label3: &Label;
    label1: &Label;
    {$include Unit1.Form1.inc}
  {$endregion FormDesigner}
  public
    constructor;
    begin
      InitializeComponent;
    end;
  end;

implementation

procedure Form1.textBox1_TextChanged(sender: Object; e: EventArgs);
begin
  massaage := textBox1.Text;
end;

procedure Form1.textBox2_TextChanged(sender: Object; e: EventArgs);
begin
  numbeer := StrToInt(textBox2.Text);
end;

procedure Form1.button1_Click(sender: Object; e: EventArgs);
begin
  
alf:='абвгдежзийклмнопрстуфхцчшщъыьэюя';
 for var i:=1 to length(massaage) do
   begin
     for var k:=1 to length(alf) do
       if massaage[i]=alf[k] then p:=k+numbeer;
      if p>length(alf) then p:=p-length(alf);
      anslovo:=anslovo+alf[p];
   end;
 label1.Text := anslovo;
end;

end.
