// Tema 5 - Jogo Ataque Viking
#include <iostream>
#include <string>
using namespace std;

void tela_inicial();
void mostrar_personagem();
void mostrar_menu();

//int pegar_vida();
//string pegar_estado(int vida);
	int ataque, defesa, vida;
	string estado = "INICIANTE";
	int pontos_extras = 0;
/*
*	Jogo de RPG onde constru�mos um personagem Viking.
*
*	Diversas telas.
*	Menus.
*	Anima��es.
*	
*/
int main()
{
	// ----- MOSTRA A TELA INICIAL ----- 
	tela_inicial();
	tela_inicial();
	tela_inicial();
	// ----- MOSTRA A TELA DE CRIA��O DE PERSONANGES ----- 
	cout << "Criando personagem.." << endl << endl;

		

	string jogador;
	cout << "Qual seu nome?" << endl;
	cin >> jogador;

	char papel;
	cout << endl;
	cout << "Qual sua profissao?" << endl;
	cout << "[G] Guerreiro" << endl;
	cout << "[M] Mago" << endl;
	cout << "[L] Ladino" << endl;
	cin >> papel;

	switch(papel){
		case  'G' :
		case  'g' :
			ataque = 2;
		    defesa = 3;
			vida = 10;
			break;
		case 'M' :
		case 'm' :
			ataque = 3;
			defesa = 2;
			vida = 10;
			break;
		case 'L' :
		case 'l' :
			ataque = 4;
			defesa = 1;
			vida = 10;
			break;
		default:
			cout << "Opcao invalida. Iniciando personagem fraco." << endl;
			ataque = 1;
			defesa = 1;
			vida = 10;		
			
}
		
	system("cls");


	// ----- INICIA O LOOP PRINCIPAL DO JOGO ----- 
	bool sair = false;
	while (!sair)
	{
		// ----- MOSTRA O PERSONAGEM EM TELA ----- 
		
		mostrar_personagem();
		
		// ----- MOSTRA O MENU DE OP��ES PARA A��ES DO JOGADOR ----- 
		int opcao;
		cout << "O que fazer?" << endl;
		cout << "1- Praticar" << endl;
		cout << "2- Aumentar Atributos" << endl;
		cout << endl;
		cout << "0- Sair" << endl;
		cin >> opcao;

		if (opcao == 1)
		{
			// ----- MOSTRA A TELA DE TREINAMENTO ----- 
			system("cls");

			for (int vezes = 0; vezes < 20; vezes++)
			{
				cout << "Viajando para mares distantes.." << endl;
				cout << endl;

				if (vezes % 2 == 0)
				{
					cout << "                   ~." << endl;
					cout << "            Ya...___|__..ab.     .   .  " << endl;
					cout << "             Y88b  \\88b  \\88b   (     ) " << endl;
					cout << "              Y88b  :88b  :88b   `.oo'  " << endl;
					cout << "              :888  |888  |888  ( (`-'  " << endl;
					cout << "     .---.    d88P  ;88P  ;88P   `.`.   " << endl;
					cout << "    / .-._)  d8P-\"\"\" | \"\"\"'-Y8P      `.`. " << endl;
					cout << "   ( (`._) .-.  .-. |.-.  .-.  .-.   ) )" << endl;
					cout << "    \\ `---( O )( O )( O )( O )( O )-' / " << endl;
					cout << "     `.    `-'  `-'  `-'  `-'  `-'  .'  " << endl;
					cout << "       `---------------------------'" << endl;
				}
				else
				{
					cout << "                     ~." << endl;
					cout << "              Ya...___|__..ab.     .   .  " << endl;
					cout << "               Y88b  \\88b  \\88b   (     ) " << endl;
					cout << "                Y88b  :88b  :88b   `.oo'  " << endl;
					cout << "                :888  |888  |888  ( (`-'  " << endl;
					cout << "       .---.    d88P  ;88P  ;88P   `.`.   " << endl;
					cout << "      / .-._)  d8P-\"\"\" | \"\"\"'-Y8P      `.`. " << endl;
					cout << "     ( (`._) .-.  .-. |.-.  .-.  .-.   ) )" << endl;
					cout << "      \\ `---( O )( O )( O )( O )( O )-' / " << endl;
					cout << "       `.    `-'  `-'  `-'  `-'  `-'  .'  " << endl;
					cout << "         `---------------------------'" << endl;
				}

				system("cls");
			}

			cout << endl << "Voce treinou bastante durante sua viajem." << endl << endl;
			// Aumentar os pontos extras do personagem.
			pontos_extras++;

			system("pause");
			system("cls");
		}
		else if (opcao == 2)
		{
			// ----- MOSTRA A TELA DE ATRIBUTOS DO PERSONAGEM ----- 
			system("cls");

			cout << "Voce tem " << pontos_extras << " pontos de atributo." << endl;
			cout << endl;

			int aumentar;
			cout << "Aumentar.." << endl;
			cout << "1. Ataque" << endl;
			cout << "2. Defesa" << endl;
			cin >> aumentar;
		
			if (aumentar == 1)
			{
				if (pontos_extras > 0)
				{
					cout << "Aumentou ATAQUE +2" << endl;
					ataque += 2;
					pontos_extras--;
				}
				else cout << "Pontos de atributos insuficientes. Pratique mais." << endl;
			}
			else if (aumentar == 2)
			{
				if (pontos_extras > 0)
				{
					cout << "Aumentou DEFESA +1 e VIDA" << endl;
					defesa++;

					//vida = pegar_vida();
					//estado = pegar_estado(vida);

					pontos_extras--;
				}
				else cout << "Pontos de atributos insuficientes. Pratique mais." << endl;
			}
			else cout << "Opcao Invalida" << endl;

			system("pause");
			system("cls");
		}
		else if (opcao == 0)
		{
			// ----- SE DIGITOU 0 (zero) ENT�O SAI DO JOGO ----- 
			sair = true;
		}
		else
		{
			// ----- SE DIGITOU QUALQUER OUTRA COISA ENT�O MOSTRA MSG DE ERRO ----- 
			cout << "Opcao invalida" << endl;
		}

		// Limpa a tela para a pr�xima jogada
		system("cls");
	}

	return 0;
}

void tela_inicial() 
{ 
cout << "	       _ _    _" << endl;
	cout << "	      (_) |  (_)" << endl;
	cout << "	__   ___| | ___ _ __   __ _ " << endl;
	cout << "	\\ \\ / / | |/ / | '_ \\ / _` |" << endl;
	cout << "	 \\ V /| |   <| | | | | (_| |" << endl;
	cout << "	  \\_/ |_|_|\\_\\_|_| |_|\\__, |" << endl;
	cout << "	                       __/ |" << endl;
	cout << "	                      |___/ " << endl;
	cout << endl;
	cout << "		Aventura no Mar" << endl;
	cout << "			por marcelomesmo" << endl << endl;
	
	system("pause");
	system("cls");
}

void mostrar_personagem()
{
	
	cout << "	           ," << endl;
		cout << "	       ,   |\\ ,__" << endl;
		cout << "	       |\\   \\/   `." << endl;
		cout << "	       \\ `-.:.     `\\		Ataque: " << ataque << endl;
		cout << "	        `-.__ `\\=====|		Defesa: " << defesa << endl;
		cout << "	           /=`'/   ^_\\" << endl;
		cout << "	         .'   /\\   .=)		Vida: " << vida << endl;
		cout << "	      .-'  .'|  '-(/_|		" << estado << endl;
		cout << "	    .'  __(  \\  .'`" << endl;
		cout << "	   /_.'`  `.  |`" << endl;
		cout << "	            \\ |" << endl;
		cout << "	             |/" << endl << endl;
		cout << endl;
}



/*
int pegar_vida()
{
	int vida_nova = vida + (defesa * 2);
	return vida_nova;
}
*/
/*
string pegar_estado(int vida)
{
	switch (vida)
	{
		case 10 ... 15: 
			return "WEAK";
		case 16 ... 25:
			return "NORMAL";
		case 26 ... 35:
			return "STRONG";
		case 35 ... 100:
			return "SUPER STRONG";
	}
	if( vida >= 10 && vida <= 15) return "WEAK";
	else if (vida >= 16 && vida <= 25) return "NORMAL";
	else if (vida >= 26 && vida <= 35) return "STRONG";
	else if (vida >= 36) return "SUPER STRONG";
	else return "INVALID";
}
*/
