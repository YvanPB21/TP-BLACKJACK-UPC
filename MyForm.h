#pragma once
#include <stdlib.h>
#include <string>
#include "Manejador.h"
namespace TP {
	using namespace std;
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
			objman = new Manejador();
			
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:

	protected:


	private: System::ComponentModel::IContainer^  components;
	protected:

	private:
		Manejador*objman;
		
	private: System::Windows::Forms::Label^  label1;

	private: System::Windows::Forms::Timer^  timer2;




	private: System::Windows::Forms::PictureBox^  ficha5;
	private: System::Windows::Forms::PictureBox^  ficha10;
	private: System::Windows::Forms::PictureBox^  ficha25;




	private: System::Windows::Forms::PictureBox^  ficha1;
	private: System::Windows::Forms::PictureBox^  ficha100;
	private: System::Windows::Forms::PictureBox^  pictureBox1;


	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Timer^  timer1;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::TextBox^  textBox1;

	private: System::Windows::Forms::PictureBox^  btn_Bet;
	private: System::Windows::Forms::PictureBox^  btn_Hit;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::PictureBox^  btn_End;
	private: System::Windows::Forms::PictureBox^  pictureBox2;

	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::PictureBox^  pictureBox3;
	private: System::Windows::Forms::PictureBox^  btn_Stand;










		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->timer2 = (gcnew System::Windows::Forms::Timer(this->components));
			this->ficha5 = (gcnew System::Windows::Forms::PictureBox());
			this->ficha10 = (gcnew System::Windows::Forms::PictureBox());
			this->ficha25 = (gcnew System::Windows::Forms::PictureBox());
			this->ficha1 = (gcnew System::Windows::Forms::PictureBox());
			this->ficha100 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->btn_Bet = (gcnew System::Windows::Forms::PictureBox());
			this->btn_Hit = (gcnew System::Windows::Forms::PictureBox());
			this->btn_Stand = (gcnew System::Windows::Forms::PictureBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->btn_End = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ficha5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ficha10))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ficha25))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ficha1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ficha100))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->btn_Bet))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->btn_Hit))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->btn_Stand))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->btn_End))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Teletoon Lowercase", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(155, 629);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(97, 40);
			this->label1->TabIndex = 1;
			this->label1->Text = L"label1";
			this->label1->Visible = false;
			// 
			// timer2
			// 
			this->timer2->Enabled = true;
			this->timer2->Interval = 500;
			this->timer2->Tick += gcnew System::EventHandler(this, &MyForm::timer2_Tick);
			// 
			// ficha5
			// 
			this->ficha5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ficha5.Image")));
			this->ficha5->Location = System::Drawing::Point(222, 861);
			this->ficha5->Name = L"ficha5";
			this->ficha5->Size = System::Drawing::Size(101, 87);
			this->ficha5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->ficha5->TabIndex = 11;
			this->ficha5->TabStop = false;
			this->ficha5->Visible = false;
			this->ficha5->Click += gcnew System::EventHandler(this, &MyForm::ficha5_Click);
			// 
			// ficha10
			// 
			this->ficha10->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ficha10.Image")));
			this->ficha10->Location = System::Drawing::Point(329, 861);
			this->ficha10->Name = L"ficha10";
			this->ficha10->Size = System::Drawing::Size(100, 87);
			this->ficha10->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->ficha10->TabIndex = 12;
			this->ficha10->TabStop = false;
			this->ficha10->Visible = false;
			this->ficha10->Click += gcnew System::EventHandler(this, &MyForm::ficha10_Click);
			// 
			// ficha25
			// 
			this->ficha25->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ficha25.Image")));
			this->ficha25->Location = System::Drawing::Point(435, 861);
			this->ficha25->Name = L"ficha25";
			this->ficha25->Size = System::Drawing::Size(100, 87);
			this->ficha25->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->ficha25->TabIndex = 13;
			this->ficha25->TabStop = false;
			this->ficha25->Visible = false;
			this->ficha25->Click += gcnew System::EventHandler(this, &MyForm::ficha25_Click);
			// 
			// ficha1
			// 
			this->ficha1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ficha1.Image")));
			this->ficha1->Location = System::Drawing::Point(115, 861);
			this->ficha1->Name = L"ficha1";
			this->ficha1->Size = System::Drawing::Size(101, 87);
			this->ficha1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->ficha1->TabIndex = 10;
			this->ficha1->TabStop = false;
			this->ficha1->Visible = false;
			this->ficha1->Click += gcnew System::EventHandler(this, &MyForm::ficha1_Click);
			// 
			// ficha100
			// 
			this->ficha100->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ficha100.Image")));
			this->ficha100->Location = System::Drawing::Point(541, 861);
			this->ficha100->Name = L"ficha100";
			this->ficha100->Size = System::Drawing::Size(100, 87);
			this->ficha100->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->ficha100->TabIndex = 14;
			this->ficha100->TabStop = false;
			this->ficha100->Visible = false;
			this->ficha100->Click += gcnew System::EventHandler(this, &MyForm::ficha100_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(288, 632);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(286, 109);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 15;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &MyForm::pictureBox1_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Teletoon Lowercase", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(158, 827);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(119, 21);
			this->label3->TabIndex = 18;
			this->label3->Text = L"Total Apuesta";
			this->label3->Visible = false;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Teletoon Lowercase", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(283, 822);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(68, 26);
			this->label4->TabIndex = 19;
			this->label4->Text = L"label4";
			this->label4->Visible = false;
			// 
			// timer1
			// 
			this->timer1->Interval = 500;
			this->timer1->Tick += gcnew System::EventHandler(this, &MyForm::timer1_Tick);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::Transparent;
			this->label6->Font = (gcnew System::Drawing::Font(L"Teletoon Lowercase", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(23, 83);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(89, 21);
			this->label6->TabIndex = 21;
			this->label6->Text = L"Suma Bot:";
			this->label6->Visible = false;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Font = (gcnew System::Drawing::Font(L"Teletoon Lowercase", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(133, 68);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(100, 40);
			this->label5->TabIndex = 22;
			this->label5->Text = L"label5";
			this->label5->Visible = false;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Teletoon Lowercase", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(280, 9);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(183, 48);
			this->label7->TabIndex = 23;
			this->label7->Text = L"Ganador :";
			this->label7->Visible = false;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Teletoon Lowercase", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(470, 9);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(123, 48);
			this->label8->TabIndex = 24;
			this->label8->Text = L"label8";
			this->label8->Visible = false;
			// 
			// textBox1
			// 
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Teletoon Lowercase", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(279, 499);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(207, 46);
			this->textBox1->TabIndex = 25;
			this->textBox1->Visible = false;
			// 
			// btn_Bet
			// 
			this->btn_Bet->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_Bet.Image")));
			this->btn_Bet->Location = System::Drawing::Point(663, 881);
			this->btn_Bet->Name = L"btn_Bet";
			this->btn_Bet->Size = System::Drawing::Size(100, 50);
			this->btn_Bet->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->btn_Bet->TabIndex = 27;
			this->btn_Bet->TabStop = false;
			this->btn_Bet->Visible = false;
			this->btn_Bet->Click += gcnew System::EventHandler(this, &MyForm::btn_Bet_Click);
			// 
			// btn_Hit
			// 
			this->btn_Hit->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_Hit.Image")));
			this->btn_Hit->Location = System::Drawing::Point(12, 711);
			this->btn_Hit->Name = L"btn_Hit";
			this->btn_Hit->Size = System::Drawing::Size(100, 50);
			this->btn_Hit->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->btn_Hit->TabIndex = 28;
			this->btn_Hit->TabStop = false;
			this->btn_Hit->Visible = false;
			this->btn_Hit->Click += gcnew System::EventHandler(this, &MyForm::btn_Hit_Click);
			// 
			// btn_Stand
			// 
			this->btn_Stand->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_Stand.Image")));
			this->btn_Stand->Location = System::Drawing::Point(743, 711);
			this->btn_Stand->Name = L"btn_Stand";
			this->btn_Stand->Size = System::Drawing::Size(100, 50);
			this->btn_Stand->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->btn_Stand->TabIndex = 29;
			this->btn_Stand->TabStop = false;
			this->btn_Stand->Visible = false;
			this->btn_Stand->Click += gcnew System::EventHandler(this, &MyForm::btn_Stand_Click_1);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Teletoon Lowercase", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(526, 821);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(67, 26);
			this->label9->TabIndex = 31;
			this->label9->Text = L"label9";
			this->label9->Visible = false;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Teletoon Lowercase", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(382, 826);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(138, 21);
			this->label10->TabIndex = 30;
			this->label10->Text = L"Total Disponible:";
			this->label10->Visible = false;
			// 
			// btn_End
			// 
			this->btn_End->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_End.Image")));
			this->btn_End->Location = System::Drawing::Point(743, 662);
			this->btn_End->Name = L"btn_End";
			this->btn_End->Size = System::Drawing::Size(100, 50);
			this->btn_End->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->btn_End->TabIndex = 32;
			this->btn_End->TabStop = false;
			this->btn_End->Visible = false;
			this->btn_End->Click += gcnew System::EventHandler(this, &MyForm::btn_End_Click);
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(162, 191);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(546, 389);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox2->TabIndex = 33;
			this->pictureBox2->TabStop = false;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Teletoon Lowercase", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->Location = System::Drawing::Point(12, 633);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(106, 36);
			this->label11->TabIndex = 35;
			this->label11->Text = L"label11";
			this->label11->Visible = false;
			// 
			// pictureBox3
			// 
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(328, 551);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(100, 50);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox3->TabIndex = 36;
			this->pictureBox3->TabStop = false;
			this->pictureBox3->Visible = false;
			this->pictureBox3->Click += gcnew System::EventHandler(this, &MyForm::pictureBox3_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::DarkGreen;
			this->ClientSize = System::Drawing::Size(868, 960);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->btn_End);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->btn_Stand);
			this->Controls->Add(this->btn_Hit);
			this->Controls->Add(this->btn_Bet);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->ficha100);
			this->Controls->Add(this->ficha25);
			this->Controls->Add(this->ficha10);
			this->Controls->Add(this->ficha5);
			this->Controls->Add(this->ficha1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->pictureBox2);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ficha5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ficha10))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ficha25))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ficha1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ficha100))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->btn_Bet))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->btn_Hit))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->btn_Stand))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->btn_End))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
private: System::Void timer2_Tick(System::Object^  sender, System::EventArgs^  e) {
		label1->Text = objman->getSuma_J().ToString();
		label4->Text = objman->getBEt().ToString();
		label5->Text = objman->getSuma_B().ToString();
		label9->Text = objman->getDinero().ToString();
		
		Graphics ^g = this->CreateGraphics();
		BufferedGraphicsContext ^espacioBuffer = BufferedGraphicsManager::Current;
		BufferedGraphics ^buffer = espacioBuffer->Allocate(g, this->ClientRectangle);
		buffer->Graphics->Clear(Color::DarkGreen);
		if (objman->GA()==true){ objman->Dibuja_Cartas_Jugador(buffer); }		
		if (objman->GA2() == true) { objman->Dibuja_Apuesta(buffer); }
		if (objman->GIVEMEYOURBESTGA() == true) { objman->Dibuja_Cartas_Bot(buffer); }
		buffer->Render(g);
		delete buffer;
		delete espacioBuffer;
		delete g;
}
private: System::Void pictureBox1_Click(System::Object^  sender, System::EventArgs^  e) {
	textBox1->Visible = true;
	pictureBox1->Visible = false;
	pictureBox2->Visible = false;
	pictureBox3->Visible = true;
	btn_Bet->Visible = true;
	btn_End->Visible = true;
	label3->Visible=true;
	label10->Visible = true;
	label4->Visible =true;
	label9->Visible = true;
	ficha1->Visible = true;
	ficha5->Visible = true;
	ficha10->Visible = true;
	ficha25->Visible = true;
	ficha100->Visible = true;
}
private: System::Void ficha1_Click(System::Object^  sender, System::EventArgs^  e) {
	if (objman->getDinero() >= 1)
	{
		objman->Insertar_Apuesta(1); 
		objman->setDinero(1);
	}
}
private: System::Void ficha5_Click(System::Object^  sender, System::EventArgs^  e) {
	if (objman->getDinero() >= 5)
	{
		objman->Insertar_Apuesta(5); 
		objman->setDinero(5);
	}
}
private: System::Void ficha10_Click(System::Object^  sender, System::EventArgs^  e) {
	if (objman->getDinero() >= 10)
	{
		objman->Insertar_Apuesta(10);
		objman->setDinero(10);
	}
}
private: System::Void ficha25_Click(System::Object^  sender, System::EventArgs^  e) {
	if (objman->getDinero() >= 25)
	{
		objman->Insertar_Apuesta(25);
		objman->setDinero(25);
	}
}
private: System::Void ficha100_Click(System::Object^  sender, System::EventArgs^  e) {
	if (objman->getDinero() >= 100)
	{
		objman->Insertar_Apuesta(100);
		objman->setDinero(100);
	}
}
private: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e) {
	bool bjk_B;
	if (objman->getSuma_B() >= 21)bjk_B = true;
	srand(time(NULL));
	int tipob = rand() % 4 + 1;
	if (objman->getSuma_B() <= 17) {
		objman->Insertar_Cartas_Bot(tipob, bjk_B);
	}
}

private: System::Void btn_Bet_Click(System::Object^  sender, System::EventArgs^  e) {
	timer2->Enabled = true;
	label1->Visible = true;
	
	label11->Visible = true;
	btn_Stand->Visible = true;
	btn_Hit->Visible = true;
	btn_Bet->Visible = false;
	ficha1->Enabled = false;
	ficha5->Enabled = false;
	ficha10->Enabled = false;
	ficha25->Enabled = false;
	ficha100->Enabled = false;
}
private: System::Void btn_Hit_Click(System::Object^  sender, System::EventArgs^  e) {
	bool bjk;
	if (objman->getSuma_J() >= 21)bjk = true;
	srand(time(NULL));
	int tipo = rand() % 4 + 1;
	objman->Insertar_Cartas_Jugador(tipo, bjk);
}
private: System::Void btn_Stand_Click_1(System::Object^  sender, System::EventArgs^  e) {
	btn_Hit->Enabled = false;
	timer1->Enabled = true;
	label5->Visible = true;
	label6->Visible = true;
}
private: System::Void btn_End_Click(System::Object^  sender, System::EventArgs^  e) {
	label7->Visible=true;
	label8->Visible=true;
	switch (objman->ganador())
	{
	case 1:label8->Text = "PLAYER"; objman->setDinero(objman->getBEt()*-2); break;
	case 2:label8->Text = "BOT";	break;
	case 3:label8->Text = "EMPATE"; objman->setDinero(objman->getBEt()*-2); break;
	}
}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	String^ga;
	ga = textBox1->Text;
//	objman->setNombre(ga);
}
private: System::Void pictureBox3_Click(System::Object^  sender, System::EventArgs^  e) {
	textBox1->Visible = false;
	label11->Text = textBox1->Text;
	pictureBox3->Visible = false;
}
};
}
