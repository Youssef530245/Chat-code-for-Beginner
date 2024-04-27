#include <iostream>
#include<time.h>
using namespace std;
int main(){
   string y,h,p;
   time_t ct=time(0);
   string currenttime=ctime(&ct);
   int n=15;
   for(int i=1;i<=n;i++){
    cin>>y;
    if(y=="how_are_you"||y=="what_about_you"){
        cout<<"i'm fine "<<endl;
        cout<<"what about you?"<<endl;
        cin>>h;
        cout<<"okay my friend"<<endl;
   }
   else if (y=="hello"){
    cout<<"hello,welcome"<<endl;
   }
   else if (y=="what's_your_name"||y=="what_is_your_name"){
    cout<<"i have no name i'm just a program "<<endl;
   }
   else if (y=="who_made_you"||y=="who_is_your_maker"){
    cout<<"Eng/ youssef mohamed ( he is my maker ) "<<endl;
    cout<<" Do you know him ? "<<endl;
    cin>>p;
    if(p=="yes"){
        cout<<"nice, your friend? "<<endl;
        cin>>p;
        if(p=="yes"){
            cout<<"that's nice , you can choose your friends well "<<endl;
        }
        else if(p=="no"){
            cout<<"!!!! i suggest for you to meet him , one day "<<endl;
        }
        }
    else if(p=="no"){
        cout<<"oh !!!! i suggest for you to meet him , one day "<<endl;
    }
   }
    else if (y=="okay_program"){
    cout<<"you are welcome ! "<<endl;
    cout<<"what is your name ? "<<endl;
    cin>>h;
    if(h=="hazem"||h=="mohamed"||h=="abdo"|| h=="mina"){
        cout<<"i know you well , "<<h<<" you are afriend of Eng/youssef (who made me !!) "<<endl;
    }
    else if(h=="osama"){
        cout<<"oh..., your are the cousin of Eng/youssef"<<endl<<"nice to meet you";
    }
    else{
    cout<<"your name is "<<h<<endl<<" it is agood name, "<<h;
    }
   }
   else if(y=="thanks"||y=="thank_you"){
    cout<<"you are welcome ";
   }
   else if(y=="see_you_soon_program"||y=="By"){
    cout<<"By,my friend"<<endl;
   }
   else if(y=="do_you_know_any_thing_about_your_maker"){
    cout<<"yes"<<endl;
    cout<<"his name is youssef mohamed \n he is a student in computer science"<<endl;
    cout<<"in the second year "<<endl;
    cout<<"his best friend i think his name is hazem othman in the same group of youssef and the year"<<endl;
   }
   else if(y=="what_is_the_time"||y=="time_please"||y=="what_is_the_time_now"){
    cout<<currenttime<<endl;
   }
   else if(y=="do_you_know_your_programming_language"||y=="what's_your_coding_language"){
    cout<<"yes , my coding language is c++ "<<endl;
   }
   else if(y=="okay"||y=="ok"||y=="done"||y=="nice"){
    cout<<"ok..."<<endl;
   }

   }
   
    return 0;

}
