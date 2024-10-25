
#include <Array.hpp>
#include <iostream>
#include <ctime> // for time
#include <cstdlib> // for srand

#define MAX_VAL 5
int main(int, char**)
{
	{
		Array<int> empty;
		empty.printArray();
	}

	{
		Array<int> numbers(MAX_VAL);
		int* mirror = new int[MAX_VAL];
		numbers.printArray();
		for (int j = 0; j < MAX_VAL; j++)
			std::cout <<mirror[j] <<" ";
		std::cout <<std::endl;

		srand(time(NULL));
		for (int i = 0; i < MAX_VAL; i++)
		{
			const int value = rand();
			numbers[i] = value;
			mirror[i] = value;
		}
		numbers.printArray();
		for (int j = 0; j < MAX_VAL; j++)
			std::cout <<mirror[j] <<" ";
		std::cout <<std::endl;

		for (int i = 0; i < MAX_VAL; i++)
		{
			if (mirror[i] == numbers[i])
				std::cout <<"value match!!" <<std::endl;
			else
			{
				std::cerr <<"didn't save the same value!!" <<std::endl;
				return(1);
			}
		}

		{
			Array<int> tmp = numbers;
			tmp.printArray();
			Array<int> test(tmp);
			test.printArray();
			
			for (int i = 0; i < MAX_VAL; i++)
			{
				if (mirror[i] == numbers[i])
					std::cout <<"value match!!" <<std::endl;
				else
				{
					std::cerr <<"didn't save the same value!!" <<std::endl;
					return(1);
				}
			}
		}

		try
		{
			numbers[-2] = 0;
			std::cout <<"new value added" <<std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}

		try
		{
			numbers[MAX_VAL] = 0;
			std::cout <<"new value added" <<std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}


		try
		{
			numbers[MAX_VAL - 1] = 1000;
			std::cout <<"new value added" <<std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
		numbers.printArray();

		// for (int i = 0; i < MAX_VAL; i++)
		// {
		// 	numbers[i] = rand();
		// }
		// numbers.printArray();

		delete [] mirror;
	}
}