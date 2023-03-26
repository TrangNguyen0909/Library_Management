#pragma once
#ifndef _MANG1C
#define _MANG1C
#include<iostream>
using namespace std;
class MANG1C 
{
private:
	int n;
	int* a;
public:
	~MANG1C();
	MANG1C();
	MANG1C(int);
	MANG1C(const MANG1C&);
	int GetN();
	int* GetA();
	MANG1C& operator=(const MANG1C&);
	friend istream& operator>>(istream&, MANG1C&);
	friend ostream& operator<<(ostream&, const MANG1C&);
	int KTraSNT(int);
	void LKSNT();
	int KTraSCP(int);
	int DemSCP();
	int KTraSHT(int);
	int TongSHT();
	int KTraSDX(int);
	double TB_SDX();
	bool KTraLe();
	int TimPTChanMin();
	void SapXep(char);
	int Random();
	void XoaPTBatKi();
	void ThemPTBatKi();
	int TimPTBatKi();
};

#endif // !_MANG1C

