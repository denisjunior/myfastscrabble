//#include <iostream>

//using namespace std;

//int main()
//{
 //   cout << "Hello world!" << endl;
    //return 0;
//}
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>
#include <cstring>
#include <time.h>


using namespace std;

int main(int argc , const char ** argv)
{
//double time = 0;

    FILE *f = NULL;
    char value='x';
    int x = 1;
    int nbrchar =0;
    char test [100]={0};
    char dic [1000]={0};
    char dic2[1000]={0};
    int i =0;
    int j,increment;
    int a =0;
    int occurrence=0;
    char test2[100]={0};
    int tst = 0;
    int code=0;
    int p=0;
string dico = argv[2];
int k =dico.length()+1;
char d[k]={0};


for(p=0;p<k-1;p++){
d[p]=dico.at(p);


}


    f=fopen(d,"r");

if(dico!= "./words.txt"){

code = 2;

 cout << " " << endl;

cout << code << endl;

return code;

}

 else

if(f==NULL){



code = 3;

cout << " " << endl;

cout << code << endl;

return code;

}
else
{


cin >> test;


    while(test[i]!=0){
test2[i]=test[i];
i++;
    }

    //cout << " la chaine saisie est : " << endl;

    //for(j=0;j<i;j++){

     //  cout << test[j] << endl;

    //}


//cout << " les anagrammes sont : " << endl;

        while(value!=EOF){

//time=clock()/1000000;

        value = fgetc(f);

          dic[a]=value;
          dic2[a]=value;
          if(value == '\n'){


            if(nbrchar == i){

                for(increment = 0 ;increment <i;increment++){

                     test2[increment]=test[increment];

                }

                   for(increment = 0 ;increment <i;increment++){

                     for(j = a-nbrchar ;j <a;j++){

                    if(test2[increment]==dic2[j]){

                        occurrence++;
			test2[increment]='#';
                         dic2[j]='@';

                    }

                }

                }




                if(i==occurrence){

               cout << "" << endl;
                        //cout << " ligne " <<x<<" : " << endl;

                    for(j = a-nbrchar ;j <=a;j++){

                    cout << dic[j] << "";

                    tst ++;


                }




            }



          }

          occurrence = 0;
           x++;

nbrchar = 0;
a=0;
          }
          else{

          nbrchar++;

          }
          a++;


        }

                        if(tst==0){

                    code = 1;

                    cout << " " << endl;

                    cout << code <<endl;

                    return code;
                }






}

 //cout << "Temps d'execution"<< time *1000<<"ms"<<endl;
cout << ""<< endl;

 cout << code <<endl;


return code;

}
