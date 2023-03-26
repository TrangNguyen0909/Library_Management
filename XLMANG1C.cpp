#include"MANG1C.h"
MANG1C::~MANG1C()
{
	if (a != NULL)
	{
		n = 0;
		delete[]a;
		a = NULL;
		cout << "Da huy mang 1 chieu\n";
	}
}
MANG1C::MANG1C()
{
	n = 0;
	a = NULL;
}
MANG1C::MANG1C(int n)
{
	while (n <= 0)
	{
		cout << "Nhap lai so phan tu mang (n > 0): ";
		cin >> n;
	}
	this->n = n;
	a = new int[this->n];
	for (int i = 0; i < this->n; i++)
	{
		a[i] = 0;
	}
}
//PT thiet lap sao chep
MANG1C::MANG1C(const MANG1C& b)
{
	n = b.n;
	a = new int[n];
	for (int i = 0; i < n; i++)
	{
		a[i] = b.a[i];
	}
}
int MANG1C::GetN()
{
	return n;
}
int* MANG1C::GetA()
{
	return a;
}
//PT nap chong toan tu gan
MANG1C& MANG1C::operator=(const MANG1C& b)
{
	if (a != NULL)
	{
		this->~MANG1C();
	}
	n = b.n;
	a = new int[n];
	for (int i = 0; i < n; i++)
	{
		a[i] = b.a[i];
	}
	return *this;
}
istream& operator>>(istream& is, MANG1C& b)
{
	if (b.a != NULL)
	{
		b.~MANG1C();
	}
	do
	{
		cout << "Nhap so luong phan tu cua mang: ";
		is >> b.n;
	} while (b.n <= 0);
	b.a = new int[b.n];
	for (int i = 0; i < b.n; i++)
	{
		cout << "a[" << i << "] = ";
		is >> b.a[i];
	}
	return is;
}
ostream& operator<<(ostream& os, const MANG1C& b)
{
	if (b.a == NULL)
	{
		os << "Mang rong\n";
	}
	else
	{
		for (int i = 0; i < b.n; i++)
		{
			os << b.a[i] << " ";
		}
	}
	return os;
}
int MANG1C::KTraSNT(int x)
{
	for (int i = 2; i <= sqrt(x); i++)
	{
		if (x % i == 0) return 0;
	}
	return 1;
}
void MANG1C::LKSNT()
{
	for (int i = 0; i < n; i++)
	{
		if (KTraSNT(a[i]))
			cout << a[i] << " ";
	}
}
int MANG1C::KTraSCP(int x)
{
	int a = sqrt(x);
	if (a * a == x) return 1;
	else return 0;
}
int MANG1C::DemSCP()
{
	int dem = 0;
	for (int i = 0; i < n; i++)
	{
		if (KTraSCP(a[i]))
			dem++;
	}
	return dem;
}
int MANG1C::KTraSHT(int x)
{
	int d = 0;
	for (int i = 1; i < x; i++)
	{
		if (x % i == 0) d = d + i;
	}
	if (d == x) return 1;
	else return 0;
}
int MANG1C::TongSHT()
{
	int s = 0;
	for (int i = 0; i < n; i++)
	{
		if (KTraSHT(a[i])) s = s + a[i];
	}
	return s;
}
int MANG1C::KTraSDX(int x)
{
	int b = x;
	int s = 0;
	int d = 0;
	while (b != 0)
	{
		s = b % 10;
		b = b / 10;
		d = d * 10 + s;
	}
	if (d == x) return 1;
	else return 0;
}
double MANG1C::TB_SDX()
{
	double tbc = 0;
	int s = 0;
	int d = 0;
	for (int i = 0; i < n; i++)
	{
		if (KTraSDX(a[i]))
		{
			s = s + a[i];
			d++;
		}
	}
	tbc = double(s / d);
	return tbc;
}
bool MANG1C::KTraLe()
{
	int d = 0;
	for (int i = 0; i < n; i++)
	{
		if (a[i] % 2 != 0)
		{
			d++;
		}
	}
	if (d == n) return true;
	else return false;
}
int MANG1C::TimPTChanMin()
{
	int i, d, vt;
	for (i = 0; i < n; i++)
	{
		if (a[i] % 2 == 0)
		{
			d = i;
			break;
		}
	}
	if (i == n)
		return -1;
	vt = d;
	for (i = d + 1; i < n; i++)
	{
		if (a[i] % 2 == 0 && a[i] < a[vt])
			vt = i;
	}
	return a[vt];
}
void MANG1C::SapXep(char x)
{
	if (x == '1')
	{
		for (int i = 0; i < n - 1; i++)
		{
			for (int j = i + 1; j < n; j++)
			{
				if (a[i] > a[j])
				{
					swap(a[i], a[j]);
				}
			}
		}
	}
	else if (x == '0')
	{
		for (int i = 0; i < n - 1; i++)
		{
			for (int j = i + 1; j < n; j++)
			{
				if (a[i] < a[j])
				{
					swap(a[i], a[j]);
				}
			}
		}
	}
}
int MANG1C::Random()
{
	srand(time(NULL));
	int vt;
	vt = rand() % (n - 0 + 1) + 0;
	return vt;
}
void MANG1C::XoaPTBatKi()
{
	int vt = Random();
	if (n <= 0) return;
	else
	{
		for (int i = vt; i < n - 1; i++)
		{
			a[i] = a[i + 1];
		}
		--n;
	}
}
void MANG1C::ThemPTBatKi()
{
	int gt = 7;
	int vt = Random();
	for (int i = n; i > vt; i--)
	{
		a[i] = a[i - 1];
	}
	a[vt] = gt;
	++n;
}
int MANG1C::TimPTBatKi()
{
	int gt = 7;
	for (int i = 0; i < n; i++)
	{
		if (a[i] == gt)
			return i;
	}
	return 0;
}