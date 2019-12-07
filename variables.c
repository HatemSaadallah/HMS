char ans=0; 
int ok, b, valid=0;
void WelcomeScreen();
void Title();
void MainMenu();
void LoginScreen();
void Add_rec();
void func_list();
void Search_rec();
void Edit_rec();
void Dlt_rec();
void ex_it();

void gotoxy(short x, short y) {
	COORD pos = {x, y};
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}
struct patient{
	int age;
	char Gender, First_Name[20], Last_Name[20], Contact_no[15], Address[30], Email[30], Doctor[20], Problem[20];
};
struct patient p;
