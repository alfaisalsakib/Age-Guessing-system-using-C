#include <iostream>

using namespace std;

int main()
{
    cout<<"<<<  WELCOME TO THE MAGIC WORLD  >>>"<<endl<<endl;
    cout<<"<< Please follow the instruction carefully >>"<<endl<<endl;
    cout<<"<< you may use a calculator >>"<<endl<<endl;


    here:

    cout<<"<< Please choose any number between 1 to 10 >>"<<endl<<endl;
    cout<<"<< If you choose a number then press 'y' >>"<<endl<<endl;

    char x1,x2,x3,x4,x5,x6,x7;
    int num;

    cin>>x1;
    if(x1=='y')
    {
        cout<<"<< Multiply by 2 with your chosen number then Press 'y' >>"<<endl<<endl;
        cin>>x2;

        if(x2 == 'y')
        {
            cout<<"<< Add 5 with the result and press 'y' >>"<<endl<<endl;
            cin>>x3;

            if(x3 == 'y')
            {
                cout<<"<< Multiply by 50 with the total result and press 'y' >>"<<endl<<endl;
                cin>>x4;

                if(x4 == 'y')
                {
                    cout<<"<< 1. If your birthday has gone in this year then add 1767 with the total rasult.>>"<<endl<<endl;
                    cout<<"<< 2. If your birthday is coming ahead in this year then add 1766 with the total rasult.>>"<<endl<<endl;
                    cout<<"<< Press 'y' if you are done with your calculations >>"<<endl<<endl;

                    cin>>x5;

                    if(x5 == 'y')
                    {
                        cout<<"<< Subtract your Birth year from the total result and press 'y' >>"<<endl<<endl;
                        cin>>x6;

                        if(x6 == 'y')
                        {
                            cout<<"<< You have found a 3-Digits number after all the calculation and press 'y' >>"<<endl<<endl;
                            cin>>x7;

                            if(x7== 'y')
                            {
                                cout<<"<< Please enter the result for further machine calculation >>"<<endl<<endl;
                                cin>>num;

                                int chose = num/100;
                                int mag = num%100;

                                for(int i=0;i<4000;i++)
                                {
                                    cout<<i*235<<" "<<i*432/2<<" "<<i*125/3<<" "<<i*5683<<" "<<i*234<<endl;
                                }
                                cout<<endl<<endl;
                                cout<<"<< You chose "<<chose<<" at the beginning >>"<<endl<<endl;
                                cout<<"<< Congratulation you are "<<mag<<" years old >>"<<endl<<endl;
                            }
                            else
                                cout<<"<< Please enter 'y' >>"<<endl<<endl;
                        }
                        else
                            cout<<"<< Please enter 'y' >>"<<endl<<endl;
                    }
                    else
                        cout<<"<< Please enter 'y' >>"<<endl<<endl;
                }
                else
                    cout<<"<< Please enter 'y' >>"<<endl<<endl;
            }
            else
                cout<<"<< Please enter 'y' >>"<<endl<<endl;
        }
        else
            cout<<"<< plese press 'y' if you multiply by 2 >>"<<endl<<endl;
    }
    else
        cout<<"<< Please type 'y' if you choose a number between 1 to 10 >>"<<endl<<endl;

    char x;
    string s = "cls";

    cout<<"<< Do you want to try again then press 'y' otherwise press 'n' >>"<<endl<<endl;
    cin>>x;
    if(x=='y')
    {
        cout<<s<<endl;
        goto here;
    }

    return 0;
}
