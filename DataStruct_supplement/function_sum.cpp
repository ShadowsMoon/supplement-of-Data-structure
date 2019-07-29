#include<vector>
#include"data_structe.h"
using namespace std;
//---------simple version-----
__int64 power_1(int n) {
	_int64 pow1 = 1;
	while (n-- > 0) {
		pow1<<= 1;
	}
	return pow1;
}
//-----------recursion----------------
__int64 power_2(int n) {
	return (n < 1) ? 1 : power_2(n - 1) <<1;

}



