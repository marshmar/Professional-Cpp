import <iostream>;

char* copyString(const char* str)
{
	size_t size = strlen(str) + 1;
	char* result{ new char[size]};
	strcpy_s(result, size, str);
	return result;
}

char* appendStrings(const char* str1, const char* str2, const char* str3)
{
	size_t size = strlen(str1) + strlen(str2) + strlen(str3) + 1;
	char* result{ new char[size] };
	strcpy_s(result, size,str1);
	strcat_s(result, size,str2);
	strcat_s(result, size,str3);
	return result;
}

int main()
{

	char* temp = copyString("Hello World");
	std::cout << temp << std::endl;
	delete[] temp;

	temp = appendStrings("Kang", " Hae", "Dam");
	std::cout << temp << std::endl;
	delete[] temp;

	return 0;
}