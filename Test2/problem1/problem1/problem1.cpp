#include<iostream>
#include<string.h>
using namespace std;

class myString{
	char *str_data;
	int len;
public:
	myString()//Default Constructor
	{
		str_data = NULL;
		len = 0;
	}
	myString(char* input)//Parameter constructor
	{
		len = strlen(input);
		str_data = new char[len + 1];
		strcpy(str_data, input);
	}
	myString(myString &input)//Copy constructor
	{
		len = strlen(input.str_data);
		str_data = new char[len + 1];
		strcpy(str_data, input.str_data);
	}
	char* operator+(myString add_string)//Adds two myString objects data 
	{
		int concat_len = len + add_string.len;
		char* concated_string = new char[concat_len + 1];
		char* duplicate = new char[len + 1];
		strcpy(duplicate, str_data);//Duplicating so that initial data does'nt get changed
		concated_string = strcat(duplicate, add_string.str_data);
		return concated_string;
	}
	myString operator=(myString input)//Overloading assignment operator
	{
		myString output;
		output.len = input.len;
		output.str_data = new char[output.len + 1];
		strcpy(output.str_data, input.str_data);
		return output;
	}
	void PrintData()
	{
		if (str_data != NULL)
			cout << str_data<<endl;
	}
	friend istream& operator>>(istream& cin, myString &input);
	friend ostream& operator<<(ostream& cout, myString output);
	friend void BubbleSort(myString input_array[],int array_len);
	int operator<(myString input)
	{
		return (-1) * strcmp(str_data, input.str_data);
	}
	~myString()
	{
		cout << "Object destroyed\n";
	}

};

istream& operator>>(istream& cin, myString &input)
{
	cout << "Enter the string\n";
	char temp[100];
	cin >> temp;
	input.str_data = new char[strlen(temp)+1];
	strcpy(input.str_data, temp);
	input.len = strlen(input.str_data);
	return cin;
}

ostream& operator<<(ostream& cout, myString output)
{
	cout << "String is " << output.str_data << endl;
	return cout;
}

void BubbleSort(myString input_array[], int array_len)
{
	int counter1 = 0, counter2 = 0;
	for (counter1 = 0; counter1 < array_len; counter1++)
	{
		for (counter2 = counter1 + 1; counter2 < array_len; counter2++)
		{
			
			if (strcmp(input_array[counter1].str_data, input_array[counter2].str_data) > 0 )
			{
				myString temp("");
				temp = input_array[counter2];
				input_array[counter2] = input_array[counter1];
				input_array[counter1] = temp;
			}
		}
		
	}
	for (counter1 = 0; counter1 < array_len; counter1++)
	{
		cout << input_array[counter1].str_data << endl;
	}
}

int main()
{
	myString s1("Pratik");
	myString s2("Saxena");
	char* s3 = s1 + s2;
	cout << s3<<endl;
	cout << (s1 < s2) << endl;
	myString s4 = s2;
	s4.PrintData();
	myString s5;
	cin >> s5;
	cout << s5;
	myString s6("cd");
	myString s7("ab");
	myString s8("sad");
	myString arr[3] = { s8, s7, s6 };
	BubbleSort(arr, 3);
	getchar();
	getchar();
	return 0;
}