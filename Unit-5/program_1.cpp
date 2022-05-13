class student {

    public:
        char name[32]; 
        char id[15];
        int results;
        string grade;

        void add_record();
        void display_record();
        void search_by_name();
        void search_by_id();
        void print_grade(int result);
    };

    void student::search_by_name(){
        char sname[32];
        student obj;
        ifstream file ("Text_File.txt");

            cout << "Enter name to find: ";
            cin >> sname;

        if (file.is_open()) {

            if (!file.eof()) {

                if(name == sname) {
                    file.read((char*)& sname,sizeof(sname));
                    cout << "\n Student Name:\t" << name;
                    cout << "\n Student ID:\t" << id;
                    cout << "\n Results:\t" << results;
                    cout << "\n Grade:\t" ;
                    obj.print_grade(results);}
                }

                else {
                    cout << "Student not found.";
          } 
          else {
                cout << "Unable to open file.";
            } 
            }
}

    void student::search_by_id(){
        char id[15];
        int result;
        student obj;
        ifstream file ("Text_File.txt");

        cout << "Enter ID number: ";
        cin >> id;

        if (file.is_open())
            if (file >> id) {
                cout << "\n Student Name:\t" << obj.name;
                cout << "\n Student ID:\t" << obj.id;
                cout << "\n Results:\t" << obj.results;
                cout << "\n Grade:\t" ;
                obj.print_grade(obj.results);
            }

            else {
                cout << "Name not found";
            }
        else {
            cout << "Unable to open file.";
        }
    }

    int main () {
        student obj;
        int choice;

        cout << "\n Choose search method: ";
        cout << "\n 1. Find by name.";
        cout << "\n 2. Find by ID";
        cout << "\n\n Enter your choice: ";
        cin >> choice;    

        switch (choice) {

        case 1:
            obj.search_by_name();
            break;

        case 2:
            obj.search_by_id();
            break;

        default:
            cout << "Invalid choice! Please enter 1 or 2 as your choice.";
            break;
        }           
    }