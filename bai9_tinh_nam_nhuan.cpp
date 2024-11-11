// bai9_tinh_nam_nhuan.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
// bai8_So_ngay_cua_thang.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
bool isNamNhuan(int sonam);
int main(){
	int nam;
	cout << "nhap nam";
	cin >> nam;
	if (isNamNhuan(nam)) {
		cout << "nam nhuan";
	}
	else {
		cout << "nam khong nhuan";
	}
	return 0;
}
///	 ham de xac dinh nam nhuan hay khong
/// neu nhuan = true 
///  neu khong nhuan = false
bool isNamNhuan(int sonam) {
	if (sonam % 4 == 0 && sonam % 100 != 0 || sonam % 400 == 0) {
		return true;
	}
	else {
		return false;
	}
}