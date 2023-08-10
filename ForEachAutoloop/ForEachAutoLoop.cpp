#include<iostream>
#include<iomanip>


int main()
{
	int AnosArray[]{ 1998,2011,2014,2017,2020 };
	float Velocidade[]{ 70.9,89.5,102.5,123.6,63.4,74.5,99.5,68.7 };

	// auto varre automaticamente o array e armazena cada elemento na variável Ano... embaixo no if pedimos se encontra-se 2011 imprimise na tela , encontrou e fez o que solicitamos.

	for (auto Ano : AnosArray) 
	{
		if (Ano == 2011) // Quando temos apenas uma opção no if não há necessidade de {}
			std::cout << "\n Ano.: " << Ano;
	} 

	
	// Calculo da média de velocidade em uma estrada utilizando a palavra reservada auto do loop
	float Media{ 0.0f };
	float Soma{ 0.0f };
	int i{ 0 };
	for (auto Veloz : Velocidade)
	{
		Soma += Veloz; //Veloz pegará a velocidade de cada elemento do vetor em cada passada
		i++;          //este valor será Adicionado a variavel Soma para depois Fazermos a Media  
	}
	Media = Soma / i;
	std::cout << "\nVelocidade média .: "<< std::setprecision(4)<< Media << " Km/h\n";
	// usamos o std::setprecision(4) da biblioteca <iomanip> que fou #include la em cima
	
	system("PAUSE");
	return 0;
}