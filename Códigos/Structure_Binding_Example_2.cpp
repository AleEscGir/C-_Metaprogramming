
//Structure Bindings de C++17

#include <iostream>
#include <map>
#include <string>
#include <iomanip>

using namespace std;

int main()
{
	//Par Llave-Valor declarado dentro
	//Estructura del mapa de datos
	map<string, string> fav_lang{
		{ "John", "Java" },
		{ "Alex", "C++" },
		{ "Peter", "Python" }
	};

	//El concepto de Structure binding,
	//a partir de posiciones y sucesos es
	//utilizado es el primer y segundo lugar
	auto [process, success] = fav_lang.insert({ "Henry","Golang" });

	// Chequeamos el valor booleano
	if (success) {
		cout << "Insertion done!!"
			<< endl;
	}

	//Iteramos por el mapa
	for (const auto& [name, lang] : fav_lang) {

		cout << name << ":"
			<< lang << endl;
	}
	return 0;
}
