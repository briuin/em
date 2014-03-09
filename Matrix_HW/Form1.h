#pragma once
#include "DotNetUtilities.h"

#include <fstream>
#include <vector>
#include <stdlib.h>
#include <stdio.h>
#include <windows.h>
#include <string>
#include <iostream>
#include "Vec.h"
#include "Addedfunc.h"

namespace Matrix_HW {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	Vec *vec=new Vec();
	Addedfunc *addedfunc=new Addedfunc();
	bool no_normal;
	vector<double> sum;
	vector<vector<double>> temps;
	 vector<double> temp;  //做計算的暫存
	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}


	private: System::Windows::Forms::ListBox^  Matrix_listBox;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::Button^  OpenVector_button;
	private: System::Windows::Forms::Button^  OpenMatrix_button;
	private: System::Windows::Forms::OpenFileDialog^  openVector_FileDialog;
	private: System::Windows::Forms::OpenFileDialog^  openMatrix_FileDialog;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::TextBox^  textBox1;





	private: System::Windows::Forms::Label^  total;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TextBox^  textBox5;
	private: System::Windows::Forms::Label^  label4;









	private: System::ComponentModel::IContainer^  components;
	protected: 

	protected: 

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->Matrix_listBox = (gcnew System::Windows::Forms::ListBox());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->OpenVector_button = (gcnew System::Windows::Forms::Button());
			this->OpenMatrix_button = (gcnew System::Windows::Forms::Button());
			this->openVector_FileDialog = (gcnew System::Windows::Forms::OpenFileDialog());
			this->openMatrix_FileDialog = (gcnew System::Windows::Forms::OpenFileDialog());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->total = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// Matrix_listBox
			// 
			this->Matrix_listBox->FormattingEnabled = true;
			this->Matrix_listBox->ItemHeight = 24;
			this->Matrix_listBox->Location = System::Drawing::Point(22, 20);
			this->Matrix_listBox->Margin = System::Windows::Forms::Padding(7, 6, 7, 6);
			this->Matrix_listBox->Name = L"Matrix_listBox";
			this->Matrix_listBox->Size = System::Drawing::Size(968, 796);
			this->Matrix_listBox->TabIndex = 0;
			this->Matrix_listBox->SelectedIndexChanged += gcnew System::EventHandler(this, &Form1::Matrix_listBox_SelectedIndexChanged);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->OpenVector_button);
			this->groupBox1->Controls->Add(this->OpenMatrix_button);
			this->groupBox1->Location = System::Drawing::Point(22, 832);
			this->groupBox1->Margin = System::Windows::Forms::Padding(7, 6, 7, 6);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Padding = System::Windows::Forms::Padding(7, 6, 7, 6);
			this->groupBox1->Size = System::Drawing::Size(971, 592);
			this->groupBox1->TabIndex = 7;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"OpenFile";
			// 
			// OpenVector_button
			// 
			this->OpenVector_button->Dock = System::Windows::Forms::DockStyle::Top;
			this->OpenVector_button->Location = System::Drawing::Point(7, 121);
			this->OpenVector_button->Margin = System::Windows::Forms::Padding(7, 6, 7, 6);
			this->OpenVector_button->Name = L"OpenVector_button";
			this->OpenVector_button->Size = System::Drawing::Size(957, 86);
			this->OpenVector_button->TabIndex = 8;
			this->OpenVector_button->Text = L"Open_VectorFile";
			this->OpenVector_button->UseVisualStyleBackColor = true;
			this->OpenVector_button->Click += gcnew System::EventHandler(this, &Form1::OpenVector_button_Click);
			// 
			// OpenMatrix_button
			// 
			this->OpenMatrix_button->Dock = System::Windows::Forms::DockStyle::Top;
			this->OpenMatrix_button->Location = System::Drawing::Point(7, 35);
			this->OpenMatrix_button->Margin = System::Windows::Forms::Padding(7, 6, 7, 6);
			this->OpenMatrix_button->Name = L"OpenMatrix_button";
			this->OpenMatrix_button->Size = System::Drawing::Size(957, 86);
			this->OpenMatrix_button->TabIndex = 7;
			this->OpenMatrix_button->Text = L"Open_MatrixFile";
			this->OpenMatrix_button->UseVisualStyleBackColor = true;
			this->OpenMatrix_button->Click += gcnew System::EventHandler(this, &Form1::OpenMatrix_button_Click);
			// 
			// openVector_FileDialog
			// 
			this->openVector_FileDialog->FileName = L"openFileDialog1";
			this->openVector_FileDialog->FileOk += gcnew System::ComponentModel::CancelEventHandler(this, &Form1::openVector_FileDialog_FileOk);
			// 
			// openMatrix_FileDialog
			// 
			this->openMatrix_FileDialog->FileName = L"openFileDialog1";
			this->openMatrix_FileDialog->FileOk += gcnew System::ComponentModel::CancelEventHandler(this, &Form1::openMatrix_FileDialog_FileOk);
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 12, System::Drawing::FontStyle::Bold));
			this->button1->ForeColor = System::Drawing::Color::Red;
			this->button1->Location = System::Drawing::Point(1425, 125);
			this->button1->Margin = System::Windows::Forms::Padding(4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(155, 43);
			this->button1->TabIndex = 15;
			this->button1->Text = L"caculate";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(1001, 125);
			this->textBox1->Margin = System::Windows::Forms::Padding(4);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(407, 36);
			this->textBox1->TabIndex = 14;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &Form1::textBox1_TextChanged);
			// 
			// total
			// 
			this->total->AutoSize = true;
			this->total->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(128)));
			this->total->Location = System::Drawing::Point(1490, 20);
			this->total->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->total->Name = L"total";
			this->total->Size = System::Drawing::Size(90, 40);
			this->total->TabIndex = 11;
			this->total->Text = L"Sum";
			this->total->UseMnemonic = false;
			this->total->Click += gcnew System::EventHandler(this, &Form1::total_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.25F, System::Drawing::FontStyle::Bold));
			this->button2->ForeColor = System::Drawing::Color::Red;
			this->button2->Location = System::Drawing::Point(1602, 125);
			this->button2->Margin = System::Windows::Forms::Padding(7, 6, 7, 6);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(179, 43);
			this->button2->TabIndex = 16;
			this->button2->Text = L"normalize";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(1800, 125);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(138, 43);
			this->button3->TabIndex = 17;
			this->button3->Text = L"magnitude";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Form1::button3_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(128)));
			this->label1->Location = System::Drawing::Point(1001, 254);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(182, 40);
			this->label1->TabIndex = 18;
			this->label1->Text = L"projection";
			this->label1->UseMnemonic = false;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(1195, 258);
			this->textBox2->Margin = System::Windows::Forms::Padding(4);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(67, 36);
			this->textBox2->TabIndex = 19;
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &Form1::textBox2_TextChanged);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(128)));
			this->label2->Location = System::Drawing::Point(1279, 258);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(91, 40);
			this->label2->TabIndex = 20;
			this->label2->Text = L"onto";
			this->label2->UseMnemonic = false;
			this->label2->Click += gcnew System::EventHandler(this, &Form1::label2_Click);
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(1378, 258);
			this->textBox3->Margin = System::Windows::Forms::Padding(4);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(67, 36);
			this->textBox3->TabIndex = 21;
			this->textBox3->TextChanged += gcnew System::EventHandler(this, &Form1::textBox3_TextChanged);
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 12, System::Drawing::FontStyle::Bold));
			this->button4->ForeColor = System::Drawing::Color::Red;
			this->button4->Location = System::Drawing::Point(1474, 255);
			this->button4->Margin = System::Windows::Forms::Padding(4);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(155, 43);
			this->button4->TabIndex = 22;
			this->button4->Text = L"caculate";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Form1::button4_Click);
			// 
			// button5
			// 
			this->button5->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 12, System::Drawing::FontStyle::Bold));
			this->button5->ForeColor = System::Drawing::Color::Red;
			this->button5->Location = System::Drawing::Point(1474, 193);
			this->button5->Margin = System::Windows::Forms::Padding(4);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(155, 43);
			this->button5->TabIndex = 27;
			this->button5->Text = L"caculate";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &Form1::button5_Click);
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(1378, 196);
			this->textBox4->Margin = System::Windows::Forms::Padding(4);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(67, 36);
			this->textBox4->TabIndex = 26;
			this->textBox4->TextChanged += gcnew System::EventHandler(this, &Form1::textBox4_TextChanged);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(128)));
			this->label3->Location = System::Drawing::Point(1279, 196);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(91, 40);
			this->label3->TabIndex = 25;
			this->label3->Text = L"onto";
			this->label3->UseMnemonic = false;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(1195, 196);
			this->textBox5->Margin = System::Windows::Forms::Padding(4);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(67, 36);
			this->textBox5->TabIndex = 24;
			this->textBox5->TextChanged += gcnew System::EventHandler(this, &Form1::textBox5_TextChanged);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(128)));
			this->label4->Location = System::Drawing::Point(994, 192);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(200, 40);
			this->label4->TabIndex = 23;
			this->label4->Text = L"component";
			this->label4->UseMnemonic = false;
			this->label4->Click += gcnew System::EventHandler(this, &Form1::label4_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(13, 24);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(2214, 1186);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->total);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->Matrix_listBox);
			this->Margin = System::Windows::Forms::Padding(7, 6, 7, 6);
			this->Name = L"Form1";
			this->Text = L"Form1";
			this->groupBox1->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
		System::String^ std_to_System_string(string s)
		{
			String^ MyString = gcnew String((s).c_str());
			return MyString;
		}
		string SYS_str_to_std ( String ^ s ) {
			using namespace Runtime::InteropServices;
			const char* chars = 
				(const char*)(Marshal::StringToHGlobalAnsi(s)).ToPointer();
			string os = chars;
			Marshal::FreeHGlobal(IntPtr((void*)chars));
			return os;
		}
		

#pragma endregion
	private: System::Void openVector_FileDialog_FileOk(System::Object^  sender, System::ComponentModel::CancelEventArgs^  e) {
				 
				 temp.clear();
				 //將FileDialog的字串讀進來，並轉換成std::string
				 std::string filename;
				 MarshalString( openVector_FileDialog->FileName, filename );

				 //std 函式庫讀檔的宣告 
				 std::fstream  o_file ; 
				 //打開filename string 所在位置的檔案
				 o_file.open( filename , std::ios::in ) ; 
				 //用char去讀第一個字元來判斷輸入是否為一個vector
				 int index=97;
				 while(o_file!=NULL)
				 {

					 char a ;
					 o_file >> a ;
					 // v的ASCII碼為86所以直接用 是否等於86，也可以用別的寫法
					 if(  a == 86 )  //ASCII number
					 {
						 //ListBox裡面寫字串的函式，MSDN查的到
						 Matrix_listBox->Items->Add("Vector :"+System::Convert::ToChar(index++)); 

						 int d;

						 //將Vector的維度讀取進來
						 o_file>>d ;
						 Matrix_listBox->Items->Add("Dimension="+d);

						 //開始讀取Vector的值
						 String ^s ;
						 for( int k=0 ; k<d ; k++)
						 {
							 double val ;//用int去讀取vector的值...之後或許會有小數點的值，請改用float
							 o_file>>val;
							 s+=val;   //System string 有幫我們實作operator，因此我們可以很快樂的在此用字串合併，以便輸出至之後的listBox
							 if(k!=d-1)
								 s+=",";   //加逗號
							 temp.push_back(val);//將txt 單一向量讀入temp

						 }

						 Matrix_listBox->Items->Add("("+s+")");

						 //這是分隔線
						 Matrix_listBox->Items->Add("-------------------------------------");
						 s ="";
						 vec->push(temp);//將向量存入Vec
						 temp.clear();

					 }
				 }

				
			 }
private: System::Void OpenVector_button_Click(System::Object^  sender, System::EventArgs^  e) {
			    openVector_FileDialog->ShowDialog( );
		    }
private: System::Void openMatrix_FileDialog_FileOk(System::Object^  sender, System::ComponentModel::CancelEventArgs^  e) {
			 std::string filename;
			 MarshalString( openMatrix_FileDialog->FileName, filename );

			 std::fstream  o_file ; 

			 o_file.open( filename , std::ios::in ) ; 
			 char a ;
			 o_file >> a ;
			 if(  a == 77 )  //ASCII number
			 {
				 Matrix_listBox->Items->Add("Matrix");
				 int d1,  d2;
				 o_file>>d1 ;
				 o_file>>d2 ;
				 Matrix_listBox->Items->Add( "Dimension="+ d1 + "x"+ d2 );
				
				 for( int k1=0 ; k1<d1; k1++)
				 {
					 String ^s ;
					 for( int k2=0 ; k2<d2; k2++)
					 {
						 int val ;
						 o_file>>val;
						 s+=val;
						 s+=" ";   
					 }					 
					 Matrix_listBox->Items->Add( s )  ; 
					  s = s->Remove(0) ;
				 }
				 
				Matrix_listBox->Items->Add("-------------------------------------");
			 }		
		 }
private: System::Void OpenMatrix_button_Click(System::Object^  sender, System::EventArgs^  e) {
			   openMatrix_FileDialog->ShowDialog();
		 }
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
			 string sa=SYS_str_to_std(textBox1->Text); // 讀取Textbox的string
				temp.clear();
				temps.clear();
				 char sc[40]; //字元陣列
				 int c=0;  //第幾的字元
				 double x;  //係數k
				 bool minus=false; //負號  
				 strcpy(sc,sa.c_str()); //字串轉到字元陣列
				 strcpy(sc,(addedfunc->clearallstupidinput(sc)).c_str()); // right! that is clear all stupid input
				 char op='o';  //operation
				 bool dot=false;
				  bool cro=false;
				 bool error_detect=false;
				 
				 char cnow;  //a+b 的a
				 /////////////http://1drv.ms/1n7J8BZ
				 bool zero=false;
				 do 
				 {
					 minus=false;
					 //////判斷負號
					 if (sc[c]=='-')
					 {
						 minus=true;
						 c++;
					 }
					 ///////////////////////讀係數
					 x=0;
					 zero=false;
					 while(sc[c]>='0' &&  sc[c]<='9')
					 {
						 if (sc[c]==0)
						 {
							 zero=true;
						 }
						 else
						 {

						 }
						 x=x*10+sc[c]-'0';
						 c++;
					 }
					 if(x==0)
						 x++;
					 //////////////////////////
					 /*do 
					 {
						 
					 } while (!(sc[c]!='+' || sc[c]!='\0'));*/
					 cnow=sc[c++];  ///////存 英文代號 :5a+2b的a或b

					 //////////執行運算
						 switch(op)
						 {
							case 'o': //抓第一個vector
									temp=vec->pop(x,cnow); 
									temps.push_back(temp);
									break;
							case '+':  //add
									temp=vec->add(x,cnow,temp);
									break;
							case '-':  //decrease
									temp=vec->dec(x,cnow,temp);
									break;
							case '*': //dot
									dot=true;
									temp=vec->pop(x,cnow);
									if(temps[0].size()==temp.size())
										temps.push_back(temp);
									else
									{
										total->Text=std_to_System_string("Illegal operation!");
										return;
									}
									break;
							case 'x':// 記得要宣告 cro 變數喔  俊豪這裡是外積呼叫  加上去吧
								   cro = true;
								   temp = vec->cross(x,cnow,temp);
								   break;
							
						 }
					 ////////////

					 if(sc[c]!='\0') //紀錄下個運算式
						 op=sc[c++];


				 } while (!(sc[c]=='\0'));

				 if(dot)
				 {
					 total->Text=""+vec->dot(temps);
					 return;
				 }
				 if(temp.empty())
				 {
					 no_normal=true;
					 total->Text=std_to_System_string("Illegal operation!");
				 }
				 else
				 {
					 sum = temp;
					 total->Text=std_to_System_string(vec->print_out(temp));
				 }
		 }
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
			////normalize
			 total->Text = std_to_System_string(vec->print_out((vec->normal(sum))));
			 

		 }
private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void Matrix_listBox_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
			 total->Text = std_to_System_string(vec->print_out((vec->magnitude(sum))));
		 }
private: System::Void total_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void label2_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void textBox2_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void textBox3_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {// projection a onto b

			 string sa=SYS_str_to_std(textBox2->Text); // 讀取Textbox的string
			 string sb=SYS_str_to_std(textBox3->Text);// 讀取Textbox的string
			 char ca=sa.at(0);// 讀取Textbox的char
			 char cb=sb.at(0);// 讀取Textbox的char
			 vector<double> tempa,tempb,ans;
				temp.clear();
				temps.clear();
				 char sc[40]; //字元陣列
				double magb,compans;
				tempa=vec->pop(1,ca); 
				temps.push_back(tempa);
				tempb=vec->pop(1,cb); 
				
				ans=vec->projection(tempa,tempb,ca,cb);
				
		   		total->Text=std_to_System_string(vec->print_out(ans));
				
				 
				
		 }
private: System::Void textBox5_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void textBox4_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void label4_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
			  string sa=SYS_str_to_std(textBox5->Text); // 讀取Textbox的string
			 string sb=SYS_str_to_std(textBox4->Text);// 讀取Textbox的string
			 char ca=sa.at(0);// 讀取Textbox的char
			 char cb=sb.at(0);// 讀取Textbox的char
			 vector<double> tempa,tempb;
				temp.clear();
				temps.clear();
				 char sc[40]; //字元陣列
				double magb,ans;
				tempa=vec->pop(1,ca); 
				temps.push_back(tempa);
				tempb=vec->pop(1,cb); 
				
				ans=vec->component(tempa,tempb,ca,cb);
				
		   		total->Text=""+ans;
		 }
};
}

