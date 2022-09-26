/* 
* Тема 1. 
* 7. Оптовые закупки. Одна тетрадь стоит 20 центов.Тетради упакованы в пачки по 20 штук. 
* Если покупать пачку тетрадей, то ее стоимость составит 3,7$. Пачки уложены в коробки по 20 пачек. При покупке 1 коробки взимается плата 70$. 
* Составьте программу, определяющую по количеству тетрадей, 
* которые хочет приобрести покупатель, число коробок, пачек и отдельных тетрадей, которые ему следует купить из условия максимальной выгоды 
* (возможно, предлагающую приобрести большее количество тетрадей за те же или меньшие деньги с учетом оптовых цен), и подсчитывающую общую стоимость покупки.
*/
#include "iostream"
using namespace std;

int main()
{
	locale::global(locale(""));
	int
		amount_of_copybooks{}, // Общее количество тетрадей
		count_of_packs{},	  // Количество пачек
		count_of_boxes{};	  // Количество коробок
	const int 
		capacity_for_packs = 20, // Вместимость пачки
		capacity_for_boxes = 400; // Вместимость коробки
	const double
		price_for_one_copybook = 0.2, // Цена за одну тетрадь
		price_for_one_pack = 3.7,	  // Цена за одну пачку
		price_for_one_box = 70;		  // Цена за одну коробку
	double
		total_price{}; // Общая цена
	do
	{
		cout << "Введите количество тетрадей: ";
		cin >> amount_of_copybooks;
		if (amount_of_copybooks > 0)
		{
			break;
		}
	} while (true);
	count_of_boxes = amount_of_copybooks / capacity_for_boxes; // Количество коробок, вмещаемых в себя тетради
	amount_of_copybooks = amount_of_copybooks % capacity_for_boxes;
    // amount_of_copybooks %= capacity_for_boxes; // строчки аналогичны
	count_of_packs = amount_of_copybooks / capacity_for_packs; // Количество пачек, вмещаемых в себя тетради
	amount_of_copybooks = amount_of_copybooks % capacity_for_packs;

	total_price =  amount_of_copybooks * price_for_one_copybook +
				   count_of_packs * price_for_one_pack +
				   count_of_boxes * price_for_one_box;
	cout << "Для максимальной выгоды нужно купить: " << endl;
	if (amount_of_copybooks != 0)
	{
		cout << "Количество тетрадей: " << amount_of_copybooks << endl;
	}
	if (count_of_packs != 0)
	{
		cout << "Количество пачек: " << count_of_packs << endl;
	}
	if (count_of_boxes != 0)
	{
		cout << "Количество коробок: " << count_of_boxes << endl;
	}
	cout << "Общая сумма равна $" << total_price << endl;
}