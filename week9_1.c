#include <stdio.h>

struct Ngay
{
    int ngay, thang, nam;
};
struct Node
{
    SinhVien data;
    Node *link;
};
struct List
{
    Node *first;
    Node *last;
};
struct SinhVien
{
    char maSV[8];
    char hoTen[50];
    int gioiTinh;
    Ngay ngaySinh;
    char diaChi[100];
    char lop[12];
    char khoa[7];
};


