#include <iostream>
#include <Windows.h>
//#include <chrono>
//#include <thread>

using namespace std;

int main()
{
	BOOL isReplaced = ReplaceFileA(
		"D:\\Labs\\Bot\\Destination\\file.txt",			// replaced file
		"D:\\Labs\\Bot\\Source\\file.txt",				// replacement file
		"D:\\Labs\\Bot\\Source\\file_backup.txt",		// backup
		REPLACEFILE_IGNORE_MERGE_ERRORS,
		nullptr,
		nullptr
		);

	if (isReplaced)
	{
		cout << "SUCCESS: the file has been replaced\n";
		system("pause");
		return 0;
	}
	//this_thread::sleep_for(chrono::milliseconds(5000));
	cout << "FAIL: the file has not been replaced\n";
	system("pause");
	return 1;
}