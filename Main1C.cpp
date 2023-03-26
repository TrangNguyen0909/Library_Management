#include"MANG1C.h"
int main()
{
	MANG1C m1, m2(7), * m3 = new MANG1C;
	int chon = 0;
	do
	{
		cout << "==========================MANG 1 CHIEU==========================\n";
		cout << "1.Nhap mang\n";
		cout << "2.Xuat mang\n";
		cout << "3.Liet ke cac  so nguyen to trong mang\n";
		cout << "4.Dem so chinh phuong trong mang\n";
		cout << "5.Tinh tong cac so hoan thien trong mang\n";
		cout << "6.Tinh TB cac so doi xung trong mang\n";
		cout << "7. Kiem tra mang co toan phan tu le hay khong???\n";
		cout << "8.Tim gia tri phan tu chan be nhat trong mang\n";
		cout << "9.Sap xep mang tang / giam dan\n";
		cout << "10. Xoa phan o vi tri bat ky\n";
		cout << "11.Them phan tu o vi tri bat ky\n";
		cout << "12. Tim phan tu co gia tri bat ky\n";
		cout << "0.Thoat chuong trinh\n";
		cout << "----------------------------------------------------------------\n";
		cout << "Ban chon yeu cau so: ";
		cin >> chon;
		switch (chon)
		{
		case 0:
			cout << "Dang thoat CT...";
			cout << endl;
			break;
		case 1:
			cin >> m1;
			break;
		case 2:
			cout << m1;
			cout << endl;
			break;
		case 3:
			m1.LKSNT();
			cout << endl;
			break;
		case 4:
			cout << m1.DemSCP();
			cout << endl;
			break;
		case 5:
			cout << m1.TongSHT();
			cout << endl;
			break;
		case 6:
			cout << m1.TB_SDX();
			cout << endl;
			break;
		case 7:
			if (m1.KTraLe()) cout << "Mang toan phan tu le\n";
			else cout << "Mang khong toan phan tu le\n";
			break;
		case 8:
			cout << m1.TimPTChanMin();
			break;
		case 9:
			char x;
			cout << "Ban muon sap xep mang tang hay giam (1->tang dan/0->giam dan): ";
			cin >> x;
			m1.SapXep(x);
			cout << m1;
			cout << endl;
			break;
		case 10:
			m1.XoaPTBatKi();
			cout << m1;
			cout << endl;
			break;
		case 11:
			m1.ThemPTBatKi();
			cout << m1;
			cout << endl;
			break;
		case 12:
			cout << m1.TimPTBatKi();
			cout << endl;
			break;
		default:
			cout << "Ban chon sai. Moi ban chon lai!" << endl;
			break;
		}
		cout << "-------------------------------------------------\n";
	} while (chon != 0);
}