for (int i = 1; i < n; i++)
	for (int j = i; j > 0 && x[j - 1] > x[j]; j--) // пока j>0 и элемент j-1 > j, x-массив int
		swap(x[j - 1], x[j]);					   // меняем местами элементы j и j-1

// Сортировка вставками имеет сложность n2, количество сравнений вычисляется по формуле n*(n-1)/2.
https://habr.com/ru/articles/181271/

		void
		insertionSort(std::vector<int> &arr)
{
	int n = arr.size();
	for (int i = 1; i < n; ++i)
	{
		int key = arr[i];
		int j = i - 1; // Сдвигаем элементы arr[0..i-1], которые больше ключа, на одну позицию вперёд
		while (j >= 0 && arr[j] > key)
		{
			arr[j + 1] = arr[j];
			j = j - 1;
		}
		arr[j + 1] = key; // Вставляем ключ на своё место
		 } 
		}