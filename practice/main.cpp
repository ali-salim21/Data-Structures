#include <iostream>
#include <string>
using namespace std;

const int sm=50;

string identifier[sm]= {};
string address[sm]= {};
string length[sm]= {};

void insertf()
{
     
     char id[30];
     char ad[30];
     char len[30];
     
     cin.ignore();
     
     cout<<"identifier. ";
     cin.getline(id,30);
     cout<<"address. ";
     cin.getline(ad,30);
     cout<<"length. ";
     cin.getline(len,30);
     
     
     for(int i=0; i<sm; i++)
     {
         if(identifier[i] == "\0")
         {
             identifier[i]=id;
             address[i]= ad;
             length[i]=len;
             
             break;
         }
     }
    
}
void displayf()
{
    int x=0;
    system("CLS");
    cout<<"Current table"<<endl;
    cout<<"-------------------------------------------------------\n"
        <<"   num    |   identifier  |    address   |    length   \n"
        <<"-------------------------------------------------------\n";
    
    for(int i=0; i<sm; i++)
    {
        if(identifier[i] != "\0")
        {
            x++;
            cout<<"   "<< x <<"         "<< identifier[i] <<"           "<< address[i] << "              "<<length[i]<< endl;

        }
    }
    
    
    if( x == 0 )
    {
        cout<<"there is no identifier found!" <<endl;
    }
    
    cout<<"-------------------------------------------------------"<<endl;
}
void searchf(string search)
{
    system("CLS");
    cout<<"Current table"<<endl;
    cout<<"------------------------------------------------"<<endl;
    int x=0;
    
    for(int i=0; i<sm; i++)
    {
        if(identifier[i] == search)
        {
            x++;
            cout<<"   "<< x << identifier[i] <<"         "<< address[i] << "       "<<length[i]<< endl;
            break;
        }
        
        if( x == 0 )
        {
            cout<<"there is no identifier found!" <<endl;
        }
    
        cout<<"--------------------------------"<<endl;
    }
}
void updatef(string search)
{
    char id[30];
    char ad[30];
    char len[30];
    
    int x=0;
    
    for(int i=0; i<sm; i++)
    { 
        if(identifier[i] == search)
        {
            x++;
            cout<<"address.";
            cout<<"length.";
            cin.getline(ad,30);
            cin.getline(len,30);
            
            address[x]=ad;
            length[x]=len;
            
            cout<<"update found!"<<endl;
            break;
        }
    }

    if( x == 0 )
    {
        cout<<"there is no identifier found!" <<endl;
    }
}
int main()
{
    std::cout << "symbol table ";
    int option;
    string identi; 
    cin.ignore();
    //system("CLS");

    do {
        cout<<"1-insert" <<endl;
        cout<<"2-update" <<endl;
        cout<<"3-search" <<endl;
        cout<<"4-display table" <<endl;
        cout<<"5-exit" <<endl;
        
        cout<<"select option: ";
        cin>>option;
        
        switch(option)
        {
            case 1:
                insertf();
                system("CLS");
                break;
            
            case 2:
                cin.ignore();
                cout<<"update by identifier ->";
                getline(cin, identi);
                updatef(identi);
                break;

            case 3:
                cin.ignore();
                cout<<"search by identifier ->";
                getline(cin, identi); //use a string not an array
                searchf(identi);
                break;
                
            case 4:
                displayf();
                break;
        } 
    } while (option !=5); //option 5 to exit programme

    return 0;
}