/* dash
Mini Project 2:
"Create"
*/
#include<iostream>
#include<fstream>
#include<string>
using namespace std;
class content{
    string title;
    string platform;
    int view;
    string status;

};
int main(){
    int choice;
    content c;
    while(true){
    cout<<"create dashboard lite\n";
    cout<<"1.  Add Content"<<endl;
    cout<<"2. View Content"<<endl;
    cout<<"3. Edit Content"<<endl;
    cout<<"4. Delete Content"<<endl;
    cout<<"5. Exit"<<endl;
        cout<<"select an option";
        cin>>choice;
          switch(choice){
            case 1:
            cout<<"Enter Title: ";
            cin.ignore();
            getline(cin,c.title);


            cout<<"Enter Platform :";
            getline(cin,c.platform);
            cout<<"Enter view";
            cin>>c.views;
            cout<<"enter status :";
            cin>>c.status;
            cout<<c.title<<"   |   "

          }
          break;
}
}