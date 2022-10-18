#include <iostream>
#include <string> //библиотека, позволяющая работать с классом string (со строковыми переменными)
using namespace std;

string repeat_str(string str, int num) { //для задачи 1
	string tmp;
	for (int i = 0; i < num; i++) 
		tmp += str;
		return tmp;
	}

bool is_spam(string str) {
	for (int i = 0; i < str.length(); i++)
		str[i] = tolower(str[i]);

	string spams[3]{
		"100% free",
		"sales increase",
		"only today"
	};

	for (int i = 0; i < 3; i++)
		if (str.find(spams[i]) < str.length())
			return true;

	return false;
}


int main() {
	setlocale(LC_ALL, "Russian");
	int n, m;

	//Строковые массивы
	/*char char_str[4]{'H', 'i','!', '\0'}; //в конце каждого строкового массива находится \0, его можно не указывать
	for (int i = 0; i < 4; i++)
		cout << char_str[i];
	cout << '\n';
	cout << char_str << '\n';

	char char_str2[]{ "Hello world!" };
	cout << char_str2 << '\n';
	cout << char_str2[4] << '\n';
	*/

	//Строковые переменные string
	/*string str; //(std::string) Создание строковой переменной типа string
	cout << str; //если не инициализировать строковую переменную, она автоматически становится пустой строкой " ", 
	//т.е. "по умолчанию" всегда получает значение в виде пустой строки, поэтому нет ошибки если не инициализируем
	str = "Hello world!"; //инициализируем
	cout << str << '\n'; //Hello world!

	str = str + " Bye world!"; // str += " Bye world!"; Только плюс. Умножение и деление так не получится сделать
	cout << "-----------\n";
	cout << str << '\n';
	cout << str +" WOW!" << '\n';
	*/

	//Ввод строки
	/*string name;
	cout << "Введите имя: ";
	//cin >> name; //ввод до ближайшего разделителя
	getline(cin,name); //из консоли берем в нэйм целую линию
	cout << "Привет, " << name << "!\n";
	cout << "Введите возраст: ";
	short age;
	cin >> age;
	cout << age << "? Вау!\n";

	cin.ignore();//очистка потока input stream, если после cin хотим применить getline

	cout << "Введите должность: ";
	string pos;
	getline(cin, pos);
	cout << "Всегда мечтал быть " << pos << '\n';


	cout << "Пока, мистер " << name[0] << ".\n";
	name = "Hello\nWorld!";
	cout << name << '\n';
	*/
	
	//Методы строк
	string str = "Hello world!";

	//Методы length и size. Возвращают длину строки
	/*cout << str.length() << '\n';
	cout << str.size() << '\n';*/

	//Метод insert. Вставка содержимого внутрь строки
	/*str.insert(3, "000");
	cout << str << '\n';*/

	//Метод replace. Замена части строки новым содержимым
	/*str.replace(3, 5, "123");
	cout << str << '\n';*/

	//Метод find. Поиск первого вхождения подстроки в строку. возвращает индекс первого вхождения
	/*cout << str.find("o") << '\n'; //4
	cout << str.find("lo") << '\n';//3
	cout << str.find("l", 5) << '\n'; //поиск буквы l после пробела = индекс 9
	*/

	//Метод rfind. Поиск последнего вхождения подстроки в строку
	/*cout << str.rfind("o") << '\n'; //7, поиск начинается с конца, находит букву о в слове ворлд, у нее 7 индекс с начала
	cout << str.rfind("wo") << '\n'; //6
	cout << str.rfind("l",5) << '\n'; //3
	*/

	//Метод substr.Возвращает подстроку, начинающуюся с переданной позиции
	/*cout << str.substr(3) << '\n'; //lo world!
	cout << str.substr(3,5) << '\n'; //lo wo
	*/

	//Число в строку
	/*cout << "Введите число: ";
	cin >> n;
	n++;
	str = to_string(n); //превращаем число n в строку
	cout << str + '\n';
	*/

	//Строка в число
	/*cout << "Введите число: ";
	getline(cin, str);
	int num = stoi(str); //stoi - string to int
	num++;
	cout << num << '\n';
	*/

	//Возведение в верхний и нижний регистр
	/*
	for (int i = 0; i < str.length(); i++)
		str[i] = toupper(str[i]);
	cout << str << '\n'; //HELLO WORLD!

	for (int i = 0; i < str.length(); i++)
		str[i] = tolower(str[i]);
	cout << str << '\n'; //hello world!
	*/

	//Task 1. Repeat of a string
	/*cout << "Task 1.Enter the string: ";
	getline(cin, str);
	cout << repeat_str(str,5) << '\n';
	 */
	//Task 2 - не решали, тк легкая
	
	//Task 3. SPAM
	cout << "Task 3. Enter a message: ";
	getline(cin, str);
	if (is_spam(str))
		cout << "Обнаружен спам!\n";
	else
		cout << "Спама не обнаружено.\n";



	return 0;
}