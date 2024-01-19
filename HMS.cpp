
#include<iostream>
#include<fstream>
#include<cstdlib>
#include<conio.h>
#include <string>

using namespace std;





//Structure of Doctor
struct doctor{
	string doc_name;
	string doc_age;
	string doc_gender;
	string doc_specialization;
	string doc_catagory;
	string doc_expercience;
	string doc_room_no;
	string doc_timing;
};
void doctors()
{
	int x;
	cout<<"\n\t\t\t\t\t\t\t\t******* Doctors *******"<<endl;
	cout<<"\n\n\nChoose the following options : \n1  >>  Add new doctor.\n2  >>  Doctor List"<<endl<<endl;
	cin>>x;
	
	if(x==1){
	
	  doctor doc_data;
  
  	ofstream doc_file;
	doc_file.open("Doc-file.txt", ios::app);
    
    doc_file<<endl<<endl<<"---------------------------------"<<endl<<endl;
	cout<<"Doctor Name : ";
	cin>>doc_data.doc_name; 
	doc_file<<"*****  "<<doc_data.doc_name<<"  *****"<<endl<<endl;
	doc_file<<"Name : "<<doc_data.doc_name<<endl;
	cout<<"Doctor Age : ";
	cin>>doc_data.doc_age; 
	doc_file<<"Age : "<<doc_data.doc_age<<endl;
	cout<<"Doctor Gender : ";
	cin>>doc_data.doc_gender;
	doc_file<<"Gender : "<<doc_data.doc_gender<<endl;
	cout<<"Specialization : ";
	cin>>doc_data.doc_specialization;
	doc_file<<"Specialization : "<<doc_data.doc_specialization<<endl;
	cout<<"Doctor Catagory : ";
	cin>>doc_data.doc_catagory;
	doc_file<<"Catagory : "<<doc_data.doc_catagory<<endl;
	cout<<"Doctor Expercience : ";
	cin>>doc_data.doc_expercience;
	doc_file<<"Expercience : "<<doc_data.doc_expercience<<endl;
	cout<<"Doctor Room no. : ";
	cin>> doc_data.doc_room_no;
	doc_file<<"Room No. : "<<doc_data.doc_room_no<<endl;
	cout<<"Doctor Timing : ";
	cin>>doc_data.doc_timing;
	doc_file<<"Doctor Timing : "<<doc_data.doc_timing<<endl;
	
	doc_file.close();
	
	system("pause");
	system("cls");
	cout<<"\n\n*****  "<<doc_data.doc_name<<"  *****"<<endl<<endl;
	cout<<"Name : "<<doc_data.doc_name<<endl;
	cout<<"Age : "<<doc_data.doc_age<<endl;
	cout<<"Gender : "<<doc_data.doc_gender<<endl;
	cout<<"Specialization : "<<doc_data.doc_specialization<<endl;
	cout<<"Catagory : "<<doc_data.doc_catagory<<endl;  
	cout<<"Expercience : "<<doc_data.doc_expercience<<endl;
	cout<<"Room No. : "<< doc_data.doc_room_no<<endl; 
	cout<<"Doctor Timing : "<<doc_data.doc_timing<<endl;
	}
	
	//Display the file of doctor
	if(x==2)
	{
		string line;
	ifstream display;
	display.open("Doc-file.txt");

	while(!display.eof())
	{
			getline(display, line);
			cout<<endl<<line;
	}
	display.close();
	}
		
}










//Structure of Patient

struct patient
	{
	
		string id;
		string name;
		string age;
		string gender;
		string contact;
		string address;
		string bloodgp;
		string diseases;
		string allergies;
		string genetic_diseases;
		string past_medical_history;
		string condtion;
		
	};
void patients()
		{
			patient pat_data;
			
			
			ofstream pat_file;
			pat_file.open("Patient-file.txt",ios::app);
			
			pat_file<<endl<<endl<<"------------------------------------------"<<endl<<endl;
			
			cout<<"Patient ID  : ";
			cin>>pat_data.id;
			pat_file<<"\n*********  "<<pat_data.id<<"  *********"<<endl<<endl;
			pat_file<<"Patient ID : "<<pat_data.id<<endl;
			cout<<"Patient Name : ";
			cin>>pat_data.name;
			pat_file<<"Patient name : "<<pat_data.name<<endl;
			cout<<"Patient Age : ";
			cin>>pat_data.age;
			pat_file<<"Patient age : "<<pat_data.age<<endl;
			cout<<"Patient Gender : ";
			cin>>pat_data.gender;
			pat_file<<"Patient gender : "<<pat_data.gender<<endl;
			cout<<"Patient Contact : ";
			cin>>pat_data.contact;
			pat_file<<"Patient contact : "<<pat_data.contact<<endl;
			cout<<"Patient Address : ";
			cin>>pat_data.address;
			pat_file<<"Patient address : "<<pat_data.address<<endl;
			cout<<"Patient Blood Group : ";
			cin>>pat_data.bloodgp;
			pat_file<<"Patient blood Group : "<<pat_data.bloodgp<<endl;
			cout<<"Patient Disease : ";
			cin>>pat_data.diseases;
			pat_file<<"Diseases : "<<pat_data.diseases<<endl;
			cout<<"Any Allergies : ";
			cin>>pat_data.allergies;
			pat_file<<"Any allergies : "<<pat_data.allergies<<endl;
			cout<<"Any Gentic Disease : ";
			cin>>pat_data.genetic_diseases;
			pat_file<<"Any genetic diseases : "<<pat_data.genetic_diseases<<endl;
			cout<<"Patient's Past Medical History : ";
			cin>>pat_data.past_medical_history;
			pat_file<<"Patient 's Past medical History : "<<pat_data.past_medical_history<<endl;
			cout<<"Patient's Current Conditions : ";
			cin>>pat_data.condtion;
			pat_file<<"Patient's current condition : "<<pat_data.condtion<<endl;
	
	pat_file.close();
	
	
	system("pause");
	system("cls");


			cout<<"\n*********  "<<pat_data.id<<"  *********"<<endl<<endl;
			
			cout<<"Patient ID : "<<pat_data.id<<endl;
			cout<<"Patient name : "<<pat_data.name<<endl;	
			cout<<"Patient age : "<<pat_data.age<<endl;
			cout<<"Patient gender : "<<pat_data.gender<<endl;
			cout<<"Patient contact : "<<pat_data.contact<<endl;
			cout<<"Patient address : "<<pat_data.address<<endl;
			cout<<"Patient blood Group : "<<pat_data.bloodgp<<endl;
			cout<<"Patient Disease : "<<pat_data.diseases<<endl;
			cout<<"Any allergies : "<<pat_data.allergies<<endl;
			cout<<"Any genetic diseases : "<<pat_data.genetic_diseases<<endl;
			cout<<"Patient's past medical diseases : "<<pat_data.past_medical_history<<endl;
			cout<<"Patient's current condition : "<<pat_data.condtion<<endl;
			
		}












//Patient display code
void patient_list()
{
	string line;
	ifstream display;
	display.open("Patient-file.txt");

	while(!display.eof())
	{
			getline(display, line);
			cout<<endl<<line;
	}
	display.close();
}














//**Blood test**



// Structure to represent a patient
struct Patient {
    string name;
    int age;
    string gender;
};

// Structure to represent a blood test
struct BloodTest {
    string testName;
    double cost;
    
};

// Structure to represent the result of a blood test
struct TestResult {
    string testName;
    string result;
};


void blood_tests()
{
	 // Patient information
    Patient patient;
    ofstream out;
    string line;
    out.open("blood-test.txt");
    cout << "\n\t\t\t\t\t******* Blood Test *****" << endl;
    cout << "\n\n\nEnter patient name: ";
    cin >> patient.name;

    cout << "Enter patient age: ";
    cin >> patient.age;

    cout << "Enter patient gender: ";
    cin >> patient.gender;

    out << endl << patient.name << endl << patient.age << endl << patient.gender << endl;

    // Available blood tests with associated costs
    BloodTest availableTests[] = {
        {"Complete Blood Count (CBC)", 50.0},
        {"Blood Glucose Test", 30.0},
        {"Nutrient Check(Vitamins)", 80.0},
        {"Diabetes Test", 45.0},
        {"HIV test", 100.0},
        {"Uric Acid Test", 35.0},
        {"Dialysis", 200.0},
        {"Liver Test", 60.0},
        {"X-Ray", 75.0},
        {"Kidney Function Test", 50.0},
        {"Stomach Wash", 90.0},
        {"Biopsy", 120.0},
        {"Pregnancy Test", 20.0},
        {"DNA Test", 150.0},
        {"Endoscopcy", 80.0},
        {"Imaging", 100.0},
        {"ECG", 45.0},
        {"Echography", 60.0},
        {"BMI Test", 25.0},
    };


    // Test results
    TestResult testResults[19];

    // Perform blood tests for the patient
    double totalCost = 0.0;  // Initialize total cost to zero
    cout << "\nPerforming blood tests for patient: " << patient.name << "\n";
    cout << "\n\n\t\t\t\t\t******* Test and Reports *******\n\n";

    for (int i = 0; i < 19; ++i) {
        char performTest;

        cout << "Do you want to perform " << availableTests[i].testName << "? (1/0): ";
        cin >> performTest;

        if (performTest == '1') {
            cout << " - Performing " << availableTests[i].testName << "..." << endl;

            // Simulate generating test results (in a real system, this would involve actual testing)
            string result = "Normal";  // Simulated result

            // Store the test result
            testResults[i] = {availableTests[i].testName, result};

            // Update the total cost
            totalCost += availableTests[i].cost;

            cout << "   Result: " << result << "\n\n";
            out << availableTests[i].testName << "\t" << result << endl;
        }
//		 else if (performTest == '0') {
//            break;
//        }
    }

    // Display the total cost
    cout << "\n\nTotal cost for tests: $" << totalCost + 2000<< endl;

    out.close();

    // Displaying test results
//    cout << "\nTest Results:\n";
//    for (int i = 0; i < 19; ++i) {
//        cout << "Test: " << testResults[i].testName << ", Result: " << testResults[i].result << endl;
//    }

    string line_1;
    ifstream in;
    in.open("blood-test.txt");

    while (!in.eof()) {
        getline(in, line_1);
        cout << line_1 << endl;
    }

}













//Staff

struct staff
	{
		string name;
		string age;
		string gender;
		string contact_number;
		string email;
		string address;
		string cnic;
		string id_card_copy;
		string job_title;
		string bank_account;
		string leaves;
		string health_insurance;
		string department;
		string qualifications; 
		string performance;
		string uniform_size;
		string salary;
		string bonus;
		string contract;		
	}; 

void displayStaffMenu() 
{

    cout << "\n\t\t\t\t*******---------- Staff Management ----------*******"<<endl<<endl<<endl;
    cout << "1. Add new Employee\n";
    cout << "2. Display Employee List\n";
    cout << "3. Exit\n";
    cout << "Enter your choice: ";
}

void addStaff() {
	ofstream out1;
	out1.open("staff.txt", ios::app);
    staff newemp;
    
    cout << "Enter Employee Name: ";
    cin>> newemp.name;
    out1<<"\n\n\n\n\t\t\t ***----- "<<newemp.name<<" -----***\n\n";
    out1<<"\nEmployee Name : "<<newemp.name;
     
    cout << "Age: ";
    cin>> newemp.age;
    out1<<"\nAge : "<<newemp.age;
    
    cout << "Gender: ";
    cin>> newemp.gender;
    out1<<"\nGender : "<<newemp.gender;
   
   cout << "Contact No. : ";
    cin>> newemp.contact_number;
    out1<<"\nContact NO. : "<<newemp.contact_number;
    
    cout << "Email: ";
    cin>> newemp.email;
    out1<<"\nEmail : "<<newemp.email;
    
    cout << "Addsress: ";
    cin>> newemp.address;
    out1<<"\nAddress : "<<newemp.address;
    
    cout << "C.N.I.C: ";
    cin>> newemp.cnic;
    out1<<"\nC.N.I.C : "<<newemp.cnic;
    
    cout << "Id Card Copy: ";
    cin>> newemp.id_card_copy;
    out1<<"\nId Card Copy : "<<newemp.id_card_copy;
    
    cout << "Job Title: ";
    cin>> newemp.job_title;
    out1<<"\nJob Title : "<<newemp.job_title;
    
    cout << "Bank Account: ";
    cin>> newemp.bank_account;
    out1<<"\nBank Account : "<<newemp.bank_account;
    
    cout << "Leaves: ";
    cin>> newemp.leaves;
    out1<<"\nLeaves : "<<newemp.leaves;
    
    cout << "Health Insurance: ";
    cin>> newemp.health_insurance;
    out1<<"\nHealth Insurance : "<<newemp.health_insurance;
    
    cout << "Department: ";
    cin>> newemp.department;
    out1<<"\nDepartment : "<<newemp.department;
    
    cout << "Qualifications: ";
    cin>> newemp.qualifications;
    out1<<"\nQualifications : "<<newemp.qualifications;
    
    cout << "Performance: ";
    cin>> newemp.performance;
    out1<<"\nPerformance : "<<newemp.performance;
   
    cout << "Salary: ";
    cin>> newemp.salary;
    out1<<"\nSalary : "<<newemp.salary;
    
    cout << "Bonus: ";
    cin>> newemp.bonus;
    out1<<"\nBonus : "<<newemp.bonus;
    
    cout << "Contract: ";
    cin>> newemp.contract;
    out1<<"\nContract : "<<newemp.contract<<endl<<endl;
    
    cout << "\n\nItem added successfully!\n";
}

void stafflist(){
	
	string line;
	ifstream display;
	display.open("Staff.txt");

	while(!display.eof())
	{
			getline(display, line);
			cout<<endl<<line;
	}
	display.close();
}

void staff(){

	int choice2;

    do {
    	menu:
        displayStaffMenu();
        cin >> choice2;

        switch (choice2) {
            case 1:
                addStaff();
                system("pause");
                system("cls");
                goto menu;
                break;
                
            case 2:
                stafflist();
                 system("pause");
                system("cls");
                goto menu;
               break;
               
            case 3:
                cout << "\nExiting program. Goodbye!\n";
                break;
                
            default:
                cout << "\nInvalid choice. Please try again.\n";
        }
			
		system("pause");
		system("cls");

			}
			
			 while (choice2 != 3);
			 
}














// Structure to Inventory

struct Medicine {
    string itemNumber;
    string itemName;
    string quantity;
};

// Function to display the menu
void displayMenu() {
    cout << "\n\t\t\t\t*******---------- Medicine Inventory Management ----------*******"<<endl<<endl<<endl;
    cout << "1. Add Item\n";
    cout << "2. Display Inventory\n";
    cout << "3. Exit\n";
    cout << "Enter your choice: ";
}

// Function to add a new item to the inventory
void addItem() {
	ofstream out;
	out.open("inventory.txt", ios::app);
	
    Medicine newItem;
    
    cout << "\nEnter Item Number: ";
    cin >> newItem.itemNumber;
    cout << "Enter Item Name: ";
    cin>> newItem.itemName;
   
    cout << "Enter Quantity: ";
    cin >> newItem.quantity;
    
    // Write the new item to the file
    out<<"ID: " <<newItem.itemNumber<< "\t" "Name: "<< newItem.itemName<<  "\t" "Quantity: "<< newItem.quantity << endl<<endl<<"\n--------------------"<<endl;

    cout << "Item added successfully!";
}

// Function to display the current inventory
void displayInventory() 
{
    Medicine currentItem;
    cout << "\nCurrent Inventory:\n";
    //cout << "Item Number\tItem Name\tQuantity\n";
    ifstream in;
    in.open("inventory.txt");
    while(!in.is_open())
    {
    	cout<<"Error, opening file";
	}
   while (!in.eof()) 
   {
   		in >> currentItem.itemNumber;
   		cout << " "<<currentItem.itemNumber<<endl;
   }
    in.close();
}

void inventorys()
{
	// Structure to represent a medicine item
struct Medicine {
    string itemNumber;
    string itemName;
    int quantity;
};

int choice;

    do {
        displayMenu();
        cin >> choice;

        switch (choice) {
            case 1:
                addItem();
                break;
            case 2:
                displayInventory();
                break;
            case 3:
                cout << "\nExiting program. Goodbye!\n";
                break;    
            default:
            	
                cout << "\nInvalid choice. Please try again.\n";
        }
			
			system("pause");
		system("cls");		
    } while (choice != 3);
}
	
	
	








	
	
//Password

char* getPassword() {
    char* password = new char[20];
    int i = 0;
    char ch;

    cout << "\n\t\t\t\t\t\t\tEnter password: ";

    while ((ch = getch()) != '\r') {
        password[i++] = ch;
        cout << '*';  // Mask characters with asterisks
    }
    password[i] = '\0';
    return password;
}











int main()
{
// Welcome Screen
cout<<"\n\t\t\t\t@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n";
cout<<"\t\t\t\t@@                                                                                         @@\n";
cout<<"\t\t\t\t@@                                            		                                   @@\n";
cout<<"\t\t\t\t@@                                                                     		           @@\n";
cout<<"\t\t\t\t@@                                   WELCOME TO                                            @@\n";
cout<<"\t\t\t\t@@                                                                                         @@\n";
cout<<"\t\t\t\t@@                         IST HOSPITAL MANAGEMENT SEYTEM                                  @@\n";
cout<<"\t\t\t\t@@                                                                                         @@\n";
cout<<"\t\t\t\t@@                                                                                         @@\n";
cout<<"\t\t\t\t@@                                                                                         @@\n";
cout<<"\t\t\t\t@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n\n\n\n";

 
 

 	string username, password;
	w:
    cout << "\n\n\n\n\t\t\t\t\t\t\tEnter username: ";
    cin >> username;


  const string correctPassword = "pass";  // Insecure for real applications

    char* enteredPassword = getPassword();  // Get masked password

    if (string(enteredPassword) == correctPassword && username == "IST") {
        cout << "\n\t\t\t\t\t\t\tWelcome!" << endl;
    } 
	else {
        cout << "\n\n\n\t\t\t\t\t\t\tInvalid password." << endl;
        goto w;
    }

 


    // Hardcoded check for demonstration purposes
    if (username == "IST"  ) {
        cout << "\n\n\t\t\t\t\t\t\tLogin successful \n\n\t\tWelcome, " << username << "!" << endl<<endl;
    } else {
        cout << "\n\t\t\t\t\t\t\tLogin failed. Invalid username or password.TRY AGAIN!" << endl<<endl<<endl; 
        goto w;
    }
    

system("cls");
//Main Menu
int i;
main_menu:
cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t IST HOSPITAL MANAGEMENT SYSTEM \n\n";	
cout<<"\n\n\t\t\t\t\t\tPlease choose from the following Options: \n\n";
cout<<"\t\t\t\t\t\t _________________________________________________________________ \n";
cout<<"\t\t\t\t\t\t|                                           	                  |\n";
cout<<"\t\t\t\t\t\t|             1  >> Doctors                                       |\n";
cout<<"\t\t\t\t\t\t|             2  >> Patient                                       |\n";
cout<<"\t\t\t\t\t\t|             3  >> Patient List                                  |\n";
cout<<"\t\t\t\t\t\t|             4  >> Blood Test and Reports                        |\n";
cout<<"\t\t\t\t\t\t|             5  >> Staff                                         |\n";
cout<<"\t\t\t\t\t\t|             6  >> Inventory                                     |\n";
cout<<"\t\t\t\t\t\t|             7  >> Exit The Program                              |\n";
cout<<"\t\t\t\t\t\t|_________________________________________________________________|\n\n";
a:cout<<"\t\t\t\t\t\tEnter your choice: ";
cin>>i;
	if(i>7||i<1)
	{
		cout<<"\n\n\t\t\t\t\t\tInvalid Choice\n";cout<<"\t\t\t\t\t\tTry again...........\n\n";goto a;
	}
	
system("cls");

//Doctor Record


switch (i)
{
	case 1:
		{
			doctors();
			system ("pause");
			system ("cls");
			goto main_menu;
			break;
			
		}
	case 2:
		{
			patients();
			system ("pause");
			system ("cls");
			goto main_menu;
			break;
		}
	case 3:
		{
			patient_list();
			system ("pause");
			system ("cls");
			goto main_menu;
			break;
		}
	case 4:
		{
			blood_tests();
			system ("pause");
			system("cls");
			goto main_menu;
			break;
		}
	case 5:
	    {
	     staff();
            system ("cls");
			goto main_menu;
		 break;    	
		}	
	case 6:
		{
			inventorys();
//			system ("pause");
			system ("cls");
			goto main_menu;
			break;
		}
	case 7:
		{
			system("cls");
cout<<"\n\t\t\t\t@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n";
cout<<"\t\t\t\t@@                                                                                         @@\n";
cout<<"\t\t\t\t@@                                            		                                   @@\n";
cout<<"\t\t\t\t@@                                                                     		           @@\n";
cout<<"\t\t\t\t@@                                  THANK YOU FOR USING                                    @@\n";
cout<<"\t\t\t\t@@                                                                                         @@\n";
cout<<"\t\t\t\t@@                               HOSPITAL MANAGEMENT SYSTEM                                @@\n";
cout<<"\t\t\t\t@@                                                                                         @@\n";
cout<<"\t\t\t\t@@                                                                                         @@\n";
cout<<"\t\t\t\t@@                                                                                         @@\n";
cout<<"\t\t\t\t@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n\n\n\n";
			break;
		}
	default:
		{
			cout<<"Invalid choice";
		}
}
}
















