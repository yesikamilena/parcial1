#include <iostream>
#include <math.h>

using namespace std;

int main()
{

    double XO=0.0, Vo=0.0, t=0.0, XD=0.0, alpha=0.0, YD=0.0, YO=0.0, g=0.0;
    g=-9.81;

    short int caso=0;



    //Variables para mirar si la ecuación 1, 2, 3 y 4 son verdaderas o falsas
    //Si 1 y 2 son verdaderas, la bola alcanza a el cañón defensivo. Si 3 y 4 son verdaderas, la bola del defensivo alcanza al ofensivo.
    bool e1=0;
    bool e2=0;
    bool e3=0;
    bool e4=0;
    bool golpedef=0;
    bool golpeof=0;

    //Ecuación 1:
    e1=(XD==XO+Vo*cos(alpha));

    //Ecuación 2:
    e2=(YD==YO+Vo*sin(alpha)-g*t);

    //cout<<XO<<Vo<<t<<XD<<alpha<<YD<<YO<<g;
    //cout<<e1<<e2;

    //Ecuación 1:
    e3=(XO==XD+Vo*cos(alpha));

    //Ecuación 2:
    e4=(YO==YD+Vo*sin(alpha)-g*t);


    //Mirando si se le pega al defensivo.
    golpedef=(e1 && e2);
    golpeof=(e3 && e4);

    cout<<"Elige alguno de los 4 casos: ";
    cin>>caso;

    if(caso<0 && caso>3){
        cout<<"Ese caso no existe: "<<endl;
    }

    else{

        switch(caso){

        //Para todos los casos, el ángulo debe estar entre 45° y 90°

        case 1:
            /*El ofensivo le pega al defensivo*/

            //Condición 1. Para que el ofensivo le de al defensivo, el tiempo de reacción debió ser lenta (t<2,5). 2seg de toma de parámetros enemigos y 0,5 seg de procesamiento del computador.
            //también se deben cumplir las ecuaciones 1 y 2, por lo que vamos a calcular los valores XD y YD para que se den.
            XO=0.0;
            Vo=20.0;
            t=2.0;      //Condición 1
            //XD=0.0;
            alpha=25.0;
            //YD=0.0;
            YO=4.0;

            //Ecuación 1
            XD=XO+Vo*cos(alpha);    //Condicón 2
            //Ecuación 2
            YD=YO+Vo*sin(alpha)-g*t;    //Condición 2

            cout<<"Disparo 1: "<< "XO= " << XO << "; Vo=" << Vo << "; to= " << t << "; XD= " << XD<< "; alpha= "<< alpha<< "; YD= "<< YD<< "; YO= "<< YO<<endl;

            XO=5.0;
            Vo=70.0;
            t=0.5;
            //XD=20.0;
            alpha=45.0;
            //YD=0.0;
            YO=200.0;

            XD=XO+Vo*cos(alpha);
            YD=YO+Vo*sin(alpha)-g*t;

             cout<<"Disparo 2: "<< "XO= " << XO << "; Vo=" << Vo << "; to= " << t << "; XD= " << XD<< "; alpha= "<< alpha<< "; YD= "<< YD<< "; YO= "<< YO<<endl;


            XO=1.0;
            Vo=100.0;
            t=1.0;
            //XD=20.0;
            alpha=30.0;
            //YD=0.0;
            YO=20.0;

            XD=XO+Vo*cos(alpha);
            YD=YO+Vo*sin(alpha)-g*t;

            cout<<"Disparo 3: "<< "XO= " << XO << "; Vo=" << Vo << "; to= " << t << "; XD= " << XD<< "; alpha= "<< alpha<< "; YD= "<< YD<< "; YO= "<< YO<<endl;

            break;


        case 2:
            //Condición 1: El tiempo debe ser mayor a 2,5 para que al defensivo le de tiempo de reaccionar
            //Condición 2: La bola del defensivo y del ofensivo se deben encontrar en un punto
            //Condición 3: El punto de encuentro de las bolas debe ser a 0,025d del cañón defensivo
            //Condición 4: Para que el defensivo golpee al defensivo, se deben cumplir las ecuaciones 3 y 4.










        break;





        case 3:


            break;



        case 4:



            break;

        }













    }











    return 0;
}
