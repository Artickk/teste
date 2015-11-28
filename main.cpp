#include <iostream>
#include <cstdlib>
#include <locale.h>
using namespace std;


/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//mostrar mensagem de erro
void showErrorMessage(string mensagemErro,int mostrarVezes)
{
    for (int i=0; i<mostrarVezes; i++)
    {
        cout << mensagemErro << endl;
    }
}

//dividir dois  numeros
int dividir (int num1,int num2)
{

    int resultado;

    if (num2 <= 0)
    {
        showErrorMessage("Impossivel dividir por 0 ",3); //indicar numero x«de vezes q aparece a ensagem de erro
        resultado = 0;
    }
    else
    {
        resultado = (num1/num2);

    }

    return resultado;
}

int subtracao (int num1,int num2)
{
    return num1-num2;
}

int mult (int num1,int num2)
{
    return num1*num2;
}

int sum (int num1,int num2)
{
    return num1+num2;
}

int main()
{
    setlocale(LC_ALL, "portuguese");

    int num1=0;
    int num2=0;


    cout << "intruduza os primeiro numero " ;
    cin >> num1;
    cout << "intruduza os segundo numero " ;
    cin >> num2;

    int resultadoDiv = dividir(num1,num2);
    int resultadoSub = subtracao(num1,num2);
    int resultadoMult = mult(num1,num2);
    int resultadoSum = sum(num1,num2);


        cout << "o resultado é ; " << endl << resultadoDiv << endl <<resultadoSub<< endl << resultadoMult<< endl <<resultadoSum << endl;





    system("pause");

    return 0;
}








