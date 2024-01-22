#pragma once
#include <string>
#include <msclr/marshal_cppstd.h>
#include <msclr/marshal.h>
#include <fstream>
#include <vector>
#include <iostream>

namespace WaitersOnCall {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::IO;
	using namespace System::Drawing;
	using namespace System::Collections::Generic;

	/// <summary>
	/// Summary for ForecastSales
	/// </summary>
	public ref class ForecastSales : public System::Windows::Forms::Form
	{
	public:
		String^ systemDate;
		ForecastSales(String^ date)
		{
			InitializeComponent();
			this->systemDate = date;
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~ForecastSales()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ loadMonthlybtn;
	protected:
	private: System::Windows::Forms::Button^ loadWeeklybtn;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ salesChart;
	private: System::Windows::Forms::Panel^ panel1;

	private: System::Windows::Forms::Label^ display1;

	private: System::Windows::Forms::Label^ avgMonthlylb;
	private: System::Windows::Forms::Label^ display2;

	private: System::Windows::Forms::Label^ anticipatedYearlb;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Label^ lbNavigation;


	protected:


	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(ForecastSales::typeid));
			this->loadMonthlybtn = (gcnew System::Windows::Forms::Button());
			this->loadWeeklybtn = (gcnew System::Windows::Forms::Button());
			this->salesChart = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->display1 = (gcnew System::Windows::Forms::Label());
			this->avgMonthlylb = (gcnew System::Windows::Forms::Label());
			this->display2 = (gcnew System::Windows::Forms::Label());
			this->anticipatedYearlb = (gcnew System::Windows::Forms::Label());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->lbNavigation = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->salesChart))->BeginInit();
			this->panel1->SuspendLayout();
			this->panel3->SuspendLayout();
			this->panel2->SuspendLayout();
			this->SuspendLayout();
			// 
			// loadMonthlybtn
			// 
			this->loadMonthlybtn->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom));
			this->loadMonthlybtn->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->loadMonthlybtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->loadMonthlybtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->loadMonthlybtn->Location = System::Drawing::Point(15, 9);
			this->loadMonthlybtn->Name = L"loadMonthlybtn";
			this->loadMonthlybtn->Size = System::Drawing::Size(196, 97);
			this->loadMonthlybtn->TabIndex = 0;
			this->loadMonthlybtn->Text = L"Load Monthly";
			this->loadMonthlybtn->UseVisualStyleBackColor = false;
			this->loadMonthlybtn->Click += gcnew System::EventHandler(this, &ForecastSales::loadMonthlybtn_Click);
			// 
			// loadWeeklybtn
			// 
			this->loadWeeklybtn->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom));
			this->loadWeeklybtn->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->loadWeeklybtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->loadWeeklybtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->loadWeeklybtn->Location = System::Drawing::Point(253, 9);
			this->loadWeeklybtn->Name = L"loadWeeklybtn";
			this->loadWeeklybtn->Size = System::Drawing::Size(196, 97);
			this->loadWeeklybtn->TabIndex = 1;
			this->loadWeeklybtn->Text = L"Load Weekly";
			this->loadWeeklybtn->UseVisualStyleBackColor = false;
			this->loadWeeklybtn->Click += gcnew System::EventHandler(this, &ForecastSales::loadWeeklybtn_Click);
			// 
			// salesChart
			// 
			chartArea1->Name = L"ChartArea1";
			this->salesChart->ChartAreas->Add(chartArea1);
			this->salesChart->Dock = System::Windows::Forms::DockStyle::Fill;
			legend1->Name = L"Legend1";
			this->salesChart->Legends->Add(legend1);
			this->salesChart->Location = System::Drawing::Point(0, 0);
			this->salesChart->Name = L"salesChart";
			series1->ChartArea = L"ChartArea1";
			series1->Legend = L"Legend1";
			series1->Name = L"Sales";
			this->salesChart->Series->Add(series1);
			this->salesChart->Size = System::Drawing::Size(965, 422);
			this->salesChart->TabIndex = 2;
			this->salesChart->Text = L"chart1";
			// 
			// panel1
			// 
			this->panel1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->panel1->AutoSize = true;
			this->panel1->Controls->Add(this->salesChart);
			this->panel1->Location = System::Drawing::Point(22, 205);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(965, 422);
			this->panel1->TabIndex = 3;
			// 
			// display1
			// 
			this->display1->AutoSize = true;
			this->display1->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->display1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->display1->Location = System::Drawing::Point(3, 0);
			this->display1->Name = L"display1";
			this->display1->Size = System::Drawing::Size(0, 25);
			this->display1->TabIndex = 5;
			// 
			// avgMonthlylb
			// 
			this->avgMonthlylb->AutoSize = true;
			this->avgMonthlylb->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->avgMonthlylb->Location = System::Drawing::Point(4, 26);
			this->avgMonthlylb->Name = L"avgMonthlylb";
			this->avgMonthlylb->Size = System::Drawing::Size(0, 25);
			this->avgMonthlylb->TabIndex = 6;
			// 
			// display2
			// 
			this->display2->AutoSize = true;
			this->display2->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->display2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->display2->Location = System::Drawing::Point(3, 75);
			this->display2->Name = L"display2";
			this->display2->Size = System::Drawing::Size(0, 25);
			this->display2->TabIndex = 7;
			// 
			// anticipatedYearlb
			// 
			this->anticipatedYearlb->AutoSize = true;
			this->anticipatedYearlb->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->anticipatedYearlb->Location = System::Drawing::Point(4, 108);
			this->anticipatedYearlb->Name = L"anticipatedYearlb";
			this->anticipatedYearlb->Size = System::Drawing::Size(0, 25);
			this->anticipatedYearlb->TabIndex = 8;
			// 
			// panel3
			// 
			this->panel3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->panel3->Controls->Add(this->display1);
			this->panel3->Controls->Add(this->anticipatedYearlb);
			this->panel3->Controls->Add(this->avgMonthlylb);
			this->panel3->Controls->Add(this->display2);
			this->panel3->Location = System::Drawing::Point(541, 22);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(443, 172);
			this->panel3->TabIndex = 9;
			// 
			// button1
			// 
			this->button1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.BackgroundImage")));
			this->button1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Location = System::Drawing::Point(22, 22);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(63, 61);
			this->button1->TabIndex = 9;
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &ForecastSales::button1_Click);
			// 
			// panel2
			// 
			this->panel2->Controls->Add(this->loadMonthlybtn);
			this->panel2->Controls->Add(this->loadWeeklybtn);
			this->panel2->Location = System::Drawing::Point(5, 89);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(458, 113);
			this->panel2->TabIndex = 10;
			// 
			// lbNavigation
			// 
			this->lbNavigation->Font = (gcnew System::Drawing::Font(L"Arial", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbNavigation->Location = System::Drawing::Point(105, 33);
			this->lbNavigation->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lbNavigation->Name = L"lbNavigation";
			this->lbNavigation->Size = System::Drawing::Size(401, 32);
			this->lbNavigation->TabIndex = 13;
			this->lbNavigation->Text = L"Home Page  |  Forecast Sales";
			this->lbNavigation->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// ForecastSales
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->ClientSize = System::Drawing::Size(999, 639);
			this->Controls->Add(this->lbNavigation);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->panel1);
			this->Name = L"ForecastSales";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"ForecastSales";
			this->Load += gcnew System::EventHandler(this, &ForecastSales::ForecastSales_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->salesChart))->EndInit();
			this->panel1->ResumeLayout(false);
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		std::string calculateBeginningOfWeek(std::string date, std::string dayOfWeek)//TJ
		{
			std::string day = "", month = "", year = "";
			int days, months, years, count = 0, leftover;
			std::string beginningofweek = "";

			for (int i = 0; date[i] != '\0'; i++)
			{
				if (date[i] != '-')
				{
					if (count == 0)
						day += date[i];
					else if (count == 1)
						month += date[i];
					else
						year += date[i];
				}
				else
					count++;
			}

			
			days = ((int(day[0]) - '0') * 10) + (int(day[1]) - '0');
			months = ((int(month[0]) - '0') * 10) + (int(month[1]) - '0');
			years = ((int(year[0]) - '0') * 1000) + ((int(year[1]) - '0') * 100) + (((int(year[2])) - '0') * 10) + ((int(year[3])) - '0');

			//I'm not returning day cuz day will always be monday
			//also if youre curious why I'm checking character by character when i have the entire dayOfTheWeek string
			//its cuz it wouldnt let me
			switch (dayOfWeek[0]) {
			case 'M':
				return date;
			case 'T':
				if (dayOfWeek[1] == 'u') {
					//tuesday
					days -= 1;
					if (days < 1) {
						if (months == 2 || months == 4 || months == 6 || months==8||months == 9 || months == 11 || months == 1)
						{
							days = 31;
							months -= 1;
							if (months < 1)
							{
								months = 12;
								years -= 1;
							}
						}
						else {
							if (months == 3)
							{
								//feb
								if (years % 4 == 0 && years % 100 != 0) {
									// leap year
									days = 29;
								}
								else
									days = 28;
							}
							else
								days = 30;
							months -= 1;
						}
					}

				}
				else
				{
					//thursday
					days -= 3;
					if (days < 1) {
						if (months == 2 || months == 4 || months == 6 || months == 8 || months == 9 || months == 11 || months == 1)
						{
							days = 31+days;
							months -= 1;
							if (months < 1)
							{
								months = 12;
								years -= 1;
							}
						}
						else {
							if (months == 3)
							{
								//feb
								if (years % 4 == 0 && years % 100 != 0) {
									// leap year
									days = 29 + days;
								}
								else
									days = 28+days;
							}
							else
								days = 30+days;
							months -= 1;
						}
					}

				}
				date = std::to_string(days) + "-" + std::to_string(months) + "-" + std::to_string(years);
				return date;
			case 'W':
				days -= 2;
				if (days < 1) {
					if (months == 2 || months == 4 || months == 6 || months == 8 || months == 9 || months == 11 || months == 1)
					{
						days = 31 + days;
						months -= 1;
						if (months < 1)
						{
							months = 12;
							years -= 1;
						}
					}
					else {
						if (months == 3)
						{
							//feb
							if (years % 4 == 0 && years % 100 != 0) {
								// leap year
								days = 29 + days;
							}
							else
								days = 28 + days;
						}
						else
							days = 30 + days;
						months -= 1;
					}
				}
				date = std::to_string(days) + "-" + std::to_string(months) + "-" + std::to_string(years);
				return date;
			case 'F':
				days -= 4;
				if (days < 1) {
					if (months == 2 || months == 4 || months == 6 || months == 8 || months == 9 || months == 11 || months == 1)
					{
						days = 31 + days;
						months -= 1;
						if (months < 1)
						{
							months = 12;
							years -= 1;
						}
					}
					else {
						if (months == 3)
						{
							//feb
							if (years % 4 == 0 && years % 100 != 0) {
								// leap year
								days = 29 + days;
							}
							else
								days = 28 + days;
						}
						else
							days = 30 + days;
						months -= 1;
					}
				}
				date = std::to_string(days) + "-" + std::to_string(months) + "-" + std::to_string(years);
				return date;
			case 'S':
				if (dayOfWeek[1] == 'a') {
					//saturday
					days -= 5;
					if (days < 1) {
						if (months == 2 || months == 4 || months == 6 || months == 8 || months == 9 || months == 11 || months == 1)
						{
							days = 31 + days;
							months -= 1;
							if (months < 1)
							{
								months = 12;
								years -= 1;
							}
						}
						else {
							if (months == 3)
							{
								//feb
								if (years % 4 == 0 && years % 100 != 0) {
									// leap year
									days = 29 + days;
								}
								else
									days = 28 + days;
							}
							else
								days = 30 + days;
							months -= 1;
						}
					}
				}
				else {
					//sunday
					days -= 6;
					if (days < 1) {
						if (months == 2 || months == 4 || months == 6 || months == 8 || months == 9 || months == 11 || months == 1)
						{
							days = 31 + days;
							months -= 1;
							if (months < 1)
							{
								months = 12;
								years -= 1;
							}
						}
						else {
							if (months == 3)
							{
								//feb
								if (years % 4 == 0 && years % 100 != 0) {
									// leap year
									days = 29 + days;
								}
								else
									days = 28 + days;
							}
							else
								days = 30 + days;
							months -= 1;
						}
					}
				}
				date = std::to_string(days) + "-" + std::to_string(months) + "-" + std::to_string(years);
				return date;
				//there is some error in the string. Make sure it has capital first letter and small rest of the letters
				//e.g "Monday", "Tuesday"
			}

		}
	private: System::Void SalesChart_Click(System::Object^ sender, System::EventArgs^ e) {

	}
	private: System::Void loadMonthlybtn_Click(System::Object^ sender, System::EventArgs^ e) {
		//run this in a loop for the past 6 months max? or however many months there are
		//this->salesChart->Series["Sales"]->Points->AddXY("Month", total sales);
		//salesChart->Series->Clear();
		std::string month, sales="", line;
		String^ l;
		List<int>^ monthsInFile = gcnew List<int>();
		List<int>^ salesOfMonth= gcnew List<int>();
		int totalSalesEachMonth;
		StreamReader^ read = gcnew StreamReader("Sales/Monthly.txt");
		while (!read->EndOfStream) {
			sales = "";
			month = "";
			l = read->ReadLine();
			line= msclr::interop::marshal_as<std::string>(l);
			month = line[0];
			if (line[1] != '-')
				month += line[1];
			int count = 0; //counts hashes
			for (int i = 0; line[i] != '\0'; i++) {
				if (line[i] == '#') {
					count++;
					continue;
				}
				if (count == 1) {
					sales += line[i];
				}
			}
			monthsInFile->Add(stoi(month));
			salesOfMonth->Add(stoi(sales));
		}
		
		List<int>^ tempMonths = gcnew List<int>();
		List<int>^ tempSales = gcnew List<int>();

		int sizeMonthCount = monthsInFile->Count - 6; //getting only data of past 6 months from the latest month

		//if there arent 6 months woth of data yet
		if (sizeMonthCount < 0) {
			sizeMonthCount = 0;
		}

		for each (int mon in monthsInFile)
		{
			if (sizeMonthCount != 0)
				sizeMonthCount--;
			else
			{
				tempMonths->Add(mon);
			}
		}

		sizeMonthCount = salesOfMonth->Count - 6;
		if (sizeMonthCount < 0) {
			sizeMonthCount = 0;
		}
		for each (int sa in salesOfMonth)
		{
			if (sizeMonthCount != 0)
				sizeMonthCount--;
			else
			{
				tempSales->Add(sa);
			}
		}

		monthsInFile = tempMonths; //now these store only the data of latest 6 months
		salesOfMonth = tempSales;

		//time to display
		int monthToDisplay,salesToDisplay;
		int sumForAvg = 0;
		int end = 6;
		if (salesOfMonth->Count < 6)
			end = salesOfMonth->Count;
		for (int i = 0; i < end; i++) {
			monthToDisplay = monthsInFile[i];
			salesToDisplay = salesOfMonth[i];

			//calculate which month it is and get the text version of it
			String^ month1 = whatMonth(monthToDisplay);
			this->salesChart->Series["Sales"]->Points->AddXY(month1, salesToDisplay);
			sumForAvg += salesToDisplay;
		}

		//now need to display forecasted next months;
		

		//THIS FORMULA DONT WORKs
		/*int velocity = salesToDisplay / ACMDist;
		int additionalSales = salesToDisplay * velocity;
		additionalSales -= salesToDisplay;*/
		//fix till here


		int days = 30;
		sumForAvg /= end;
		int projectedMonthlySales = sumForAvg / days * 30.5;

		monthToDisplay += 1;
		if (monthToDisplay == 13)
			monthToDisplay = 1;
		String^ month1 = whatMonth(monthToDisplay);
		this->salesChart->Series["Sales"]->Points->AddXY(month1, projectedMonthlySales);

		String^ avgMonthly= msclr::interop::marshal_as<String^>(std::to_string(sumForAvg));
		String^ anticipated = msclr::interop::marshal_as<String^>(std::to_string(sumForAvg*6));
		display1->Text = "Average Monthly Sale";
		avgMonthlylb->Text = "="+avgMonthly;
		display2->Text = "Anticipated Sale for the rest of the year";
		anticipatedYearlb->Text = "="+anticipated;

		//forecast sales formula
		//Historical formula:
		//previous months sales x velocity = additional sales
		// velocity = sales / distribution. Since there is currently only 1 waiters on call system, the distribution is 1 so velocity = sales
		// another fomula
		// velocity = sales / %ACM Distribution
		// since we dont take input of the data required to figure out ACM we will assume it is 60%
		//additional sales + previous months rate = forecasted sales for next month
		// more formulas:
		//average monthly sales rate = total sales so far/ number of months so far
		//Possible sales revenue for the rest of the year = Average monthly sales rate x number of months left in the year


	}
		   String^ whatMonth(int month) {

			   switch (month) {
			   case 1:
				   return "January";
			   case 2:
				   return "February";
			   case 3:
				   return "March";
			   case 4:
				   return "April";
			   case 5:
				   return "May";
			   case 6:
				   return "June";
			   case 7: 
				   return "July";
			   case 8:
				   return "August";
			   case 9:
				   return "September";
			   case 10:
				   return "October";
			   case 11:
				   return "November";
			   case 12:
				   return "Decenber";
			   default:
				   return "ERROR";
			   }
		   }
private: System::Void loadWeeklybtn_Click(System::Object^ sender, System::EventArgs^ e) {
	//salesChart->Series->Clear();
	std::string week, sales = "", line;
	String^ l;
	List<String^>^ weeksInFile = gcnew List<String^>();
	List<int>^ salesOfWeek = gcnew List<int>();
	int totalSalesEachWeek;
	bool mondayFound = 0;
	StreamReader^ read = gcnew StreamReader("Sales/weeklysales.txt");
	int i;
	while (!read->EndOfStream) {
		sales = "";
		week = "";
		mondayFound = 0;
		while (mondayFound == 0) {
			l = read->ReadLine();
			line = msclr::interop::marshal_as<std::string>(l);
			week = "";
			for (i = 0; line[i] != '_'; i++) {
				week += line[i];
			}
			if (week == "Monday") {
				mondayFound = 1;
			}
		}

		
		week = "";
		int count = 0; //counts hashes
		
		for (int j=i+1; line[j] != '#'; j++) {
				week += line[j];
		}
		l= read->ReadLine();
		line = msclr::interop::marshal_as<std::string>(l);
		for (int i = 0; line[i] != '\0'; i++) {
			if (line[i] == '#') {
				count++;
				continue;
			}
			if (count == 1)
				sales += line[i];
		}
		String^ weekk= msclr::interop::marshal_as<String^>(week);
		weeksInFile->Add(weekk);
		salesOfWeek->Add(stoi(sales));
		l = read->ReadLine(); //blank line


	}

	List<String^>^ tempWeeks = gcnew List<String^>();
	List<int>^ tempSales = gcnew List<int>();

	int sizeWeekCount = weeksInFile->Count - 6; //getting only data of past 6 weeks from the latest date

	//if there arent 6 weeks woth of data yet
	if (sizeWeekCount < 0) {
		sizeWeekCount = 0;
	}

	for each (String^ wee in weeksInFile)
	{
		if (sizeWeekCount != 0)
			sizeWeekCount--;
		else
		{
			tempWeeks->Add(wee);
		}
	}

	sizeWeekCount = salesOfWeek->Count - 6;
	if (sizeWeekCount < 0) {
		sizeWeekCount = 0;
	}

	for each (int sa in salesOfWeek)
	{
		if (sizeWeekCount != 0)
			sizeWeekCount--;
		else
		{
			tempSales->Add(sa);
		}
	}

	weeksInFile = tempWeeks; //now these store only the data of latest 6 months
	salesOfWeek = tempSales;

	//time to display
	int salesToDisplay;
	String^ weekToDisplay;
	int sumForAvg = 0;
	int end = 6;
	if (salesOfWeek->Count < 6)
		end = salesOfWeek->Count;
	for (int i = 0; i < end; i++) {
		weekToDisplay = weeksInFile[i];
		salesToDisplay = salesOfWeek[i];

		//calculate which month it is and get the text version of it
		//String^ month1 = whatMonth(monthToDisplay);
		this->salesChart->Series["Sales"]->Points->AddXY(weekToDisplay, salesToDisplay);
		sumForAvg += salesToDisplay;
	}

	//now need to display forecasted next months;


	//THIS FORMULA DONT WORKs
	/*int velocity = salesToDisplay / ACMDist;
	int additionalSales = salesToDisplay * velocity;
	additionalSales -= salesToDisplay;*/
	//fix till here


	int days = 7;
	sumForAvg /= end;
	int projectedWeeklySales = sumForAvg / days * 6.5;

	std::string day, month, year;
	week= msclr::interop::marshal_as<std::string>(weekToDisplay);
	int count = 0;
	for (int i = 0; week[i] != '\0'; i++) {
		if (week[i] == '-')
		{
			count++;
			continue;
		}
		if (count == 0)
			day += week[i];
		else if (count == 1)
			month += week[i];
		else
			year += week[i];

	}
	int months, years;
	days = stoi(day);
	months = stoi(month);
	years = stoi(year);

	weekToDisplay=getNextWeek(days, months, years);
	
	this->salesChart->Series["Sales"]->Points->AddXY(weekToDisplay, projectedWeeklySales);

	String^ avgWeekly = msclr::interop::marshal_as<String^>(std::to_string(sumForAvg));
	String^ anticipated = msclr::interop::marshal_as<String^>(std::to_string(sumForAvg * 52.1428571));
	display1->Text = "Average Weekly Sale";
	avgMonthlylb->Text = "=" + avgWeekly;
	display2->Text = "Anticipated Sale for the rest of the year";
	anticipatedYearlb->Text = "=" + anticipated;
	
	//run this in a loop for the past 12 weeks? maybe max 20 weeks idk. gonna have to use date to calculate
	//this->salesChart->Series["Sales"]->Points->AddXY("Week using date", total sales);
}

String^ getNextDay(int day, int month, int year) {



	if (day == 31 || (day == 30 && (month == 4 || month == 6 || month == 8 || month == 9 || month == 11 || month == 1)) || month == 2 && (day == 28 || day == 29)) {
		day = 1;
		month++;
		if (month == 13) {
			month = 1;
			year += 1;
		}
	}
	else
		day++;

	
	String^ date = day + "-" + month + "-" + year;
	return date;
}
String^ getNextWeek(int day, int month, int year) {

	String^ w;
	for (int i = 0; i < 7; i++)
	{
		w = getNextDay(day, month, year);

		std::string week = msclr::interop::marshal_as<std::string>(w);
		int count = 0;
		std::string days="", months = "", years = "";
		for (int i = 0; week[i] != '\0'; i++) {
			if (week[i] == '-')
			{
				count++;
				continue;
			}
			if (count == 0)
				days += week[i];
			else if (count == 1)
				months += week[i];
			else
				years += week[i];
		}
		day = stoi(days);
		month = stoi(months);
		year = stoi(years);
	}
	return w;
}
private: System::Void ForecastSales_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
};
}
