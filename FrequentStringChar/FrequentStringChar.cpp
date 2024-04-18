#include <iostream>
#include <string>
#include <unordered_map>
const char ReturnFrequentChar(std::string x);
int ReturnFC(std::string x);

int main()
{
	std::string x = "Morozii Cristian stefan";
	
	//std::cout << ReturnFC(x);
	





	std::cout << ReturnFrequentChar(x);
}
const char ReturnFrequentChar(std::string x) 
{
	int frequency = 0;
	int temp = 0;
	char f, winningChar;
	int countChar = 0;
	while (temp != x.length())
	{
		f = x[temp];
		for (int i = 0; i < x.length(); i++)
		{
			if (x[i] == f)
			{
				countChar++;
			}
		}
		if (countChar > frequency)
		{
			frequency = countChar;
			countChar = 0;
			winningChar = f;
			temp++;
		}
		else
		{
			countChar = 0;
			temp++;
		}
		//std::cout << "LOOP DONE, NO. " << temp << std::endl;
	}
	std::cout << "the most frequent char is '" << winningChar << " ' with a frequency of " << frequency << " inside the string" << std::endl;
	return winningChar;
}
int ReturnFC(std::string x)
{
	//std::string x = "";
	std::unordered_map<char, int> myDic;
	int biggestFreq = 0;
	for (int i = 0; i < x.length(); i++)
	{
		if (myDic.contains(x[i]))
		{
			myDic[x[i]] += 1;
			if (myDic[x[i]] > biggestFreq)
				biggestFreq = myDic[x[i]]; /// the value found at mydic[x[i]]
		}
		else
		{
			myDic.insert({ x[i], 1 });
		}
	}
	
	return biggestFreq;
}

