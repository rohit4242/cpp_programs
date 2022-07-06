#include <iostream>
using namespace std;

class menu
{
    int num[30],n,i;

    public:
        void add(int n)
        {
            for(int i=0;i<n;i++)
            {
                cin>>num[i];
            }
        }

        void update(int index,int new_value)
        {
            num[index-1]=new_value;
        }

        void remove(int index,int n)
        {
            int new_num[30];
            for(int i=0;i<n;i++)
            {
                if(num[i]!=index)
                {
                    new_num[i]=num[i];
                    cout<<"your value is removed: "<<new_num[i]<<endl;
                }
            }
        }

        void display(int n)
        {
            for(int i=0;i<n;i++)
            {
                cout<<num[i]<<endl;
            }
        }

};

int main()
{
    int index,n,new_value,ch,w;
    menu m;
    cout<<"enter the 0 to exit the program: "<<endl;
    cin>>w;
    do{
        cout<<"1.add value"<<endl;
        cout<<"2.update value"<<endl;
        cout<<"3.remove value"<<endl;
        cout<<"4.display value"<<endl;
        cout<<"5.exit"<<endl;

        cout<<"Enter your choice: "<<endl;
        cin>>ch;

        switch(ch)
        {
            case 1:
                cout<<"how many value you want to add: "<<endl;
                cin>>n;
                m.add(n);
                cout<<"your value hase been added successfully"<<endl;
                break;
            case 2:
                cout<<"Enter index number: "<<endl;
                cin>>index;
                cout<<"Enter new value: "<<endl;
                cin>>new_value;
                m.update(index,new_value);
                cout<<"your value hase been update successfully"<<endl;
                break;
            case 3:
                cout<<"Enter index number: "<<endl;
                cin>>index;
                m.remove(index,n);
                cout<<"your value hase been update successfully"<<endl;
                break;
            case 4:
                m.display(n);
                break;
            case 5:
                exit(0);
            default:
                cout<<"Invalid operation"<<endl;
        }
    }while (w!=0);
    
    return 0;
}