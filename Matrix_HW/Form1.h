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

namespace Matrix_HW {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	Vec *vec=new Vec();
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
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// Matrix_listBox
			// 
			this->Matrix_listBox->FormattingEnabled = true;
			this->Matrix_listBox->ItemHeight = 15;
			this->Matrix_listBox->Location = System::Drawing::Point(13, 13);
			this->Matrix_listBox->Margin = System::Windows::Forms::Padding(4);
			this->Matrix_listBox->Name = L"Matrix_listBox";
			this->Matrix_listBox->Size = System::Drawing::Size(597, 499);
			this->Matrix_listBox->TabIndex = 0;
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->OpenVector_button);
			this->groupBox1->Controls->Add(this->OpenMatrix_button);
			this->groupBox1->Location = System::Drawing::Point(13, 520);
			this->groupBox1->Margin = System::Windows::Forms::Padding(4);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Padding = System::Windows::Forms::Padding(4);
			this->groupBox1->Size = System::Drawing::Size(597, 370);
			this->groupBox1->TabIndex = 7;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"OpenFile";
			// 
			// OpenVector_button
			// 
			this->OpenVector_button->Dock = System::Windows::Forms::DockStyle::Top;
			this->OpenVector_button->Location = System::Drawing::Point(4, 73);
			this->OpenVector_button->Margin = System::Windows::Forms::Padding(4);
			this->OpenVector_button->Name = L"OpenVector_button";
			this->OpenVector_button->Size = System::Drawing::Size(589, 54);
			this->OpenVector_button->TabIndex = 8;
			this->OpenVector_button->Text = L"Open_VectorFile";
			this->OpenVector_button->UseVisualStyleBackColor = true;
			this->OpenVector_button->Click += gcnew System::EventHandler(this, &Form1::OpenVector_button_Click);
			// 
			// OpenMatrix_button
			// 
			this->OpenMatrix_button->Dock = System::Windows::Forms::DockStyle::Top;
			this->OpenMatrix_button->Location = System::Drawing::Point(4, 19);
			this->OpenMatrix_button->Margin = System::Windows::Forms::Padding(4);
			this->OpenMatrix_button->Name = L"OpenMatrix_button";
			this->OpenMatrix_button->Size = System::Drawing::Size(589, 54);
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
			this->button1->Location = System::Drawing::Point(918, 182);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(100, 56);
			this->button1->TabIndex = 15;
			this->button1->Text = L"caculate";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(633, 198);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(252, 22);
			this->textBox1->TabIndex = 14;
			// 
			// total
			// 
			this->total->AutoSize = true;
			this->total->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(128)));
			this->total->Location = System::Drawing::Point(1040, 198);
			this->total->Name = L"total";
			this->total->Size = System::Drawing::Size(58, 25);
			this->total->TabIndex = 11;
			this->total->Text = L"Sum";
			this->total->UseMnemonic = false;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1465, 1055);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->total);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->Matrix_listBox);
			this->Margin = System::Windows::Forms::Padding(4);
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
				 char op='o';  //operation
				 bool dot=false;
				 
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
					 cnow=sc[c++];  ///////存式 英文代號 :5a+2b的a或b

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
							case '*':
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
					total->Text=std_to_System_string("Illegal operation!");
				 else
					total->Text=std_to_System_string(vec->print_out(temp));

		 }
};
}

