#include <iostream>

using namespace std;

int main()
{
    char pembelian;
int kode, N, jumlah, banyak;
long int total,diskon,akhir, bayar, harga,duit,kembalian;
atas:
cout<<"   ===================ZAHRA SNEAKERS==================\n";
cout<<"\n";
cout<<"       HARGA TERJANGKAU, KUALITAS TERJAMIN\n";
cout<<"\n";
cout<<" ======================DAFTAR BARANG=======================\n";
cout<<" 1. Yeezy Sneakers\n";
cout<<" 2. Nike\n";
cout<<" 3. Vans\n";
cout<<" 4. Adidas\n";
cout<<" 5. Puma\n";
cout<<"===================ZAHRA SNEAKERS====================\n";
cout<<"\n";
cout<<"Jumlah Barang Yang Dipesan = ";
cin>>banyak;
jumlah=1;
bayar=0;
for(jumlah=1;jumlah<=banyak;jumlah++)
{ulang:
 cout<<" \n\nMasukan Kode Barang = ";
cin>>kode;
cout<<"\n";
    if (kode==1)
{
    cout<<" Nama Barang     = Yeezy Sneakers\n";
    cout<<" Harga           = Rp. 180000,-\n";
    cout<<" Jumlah Barang   = ";
    cin>>N;
    harga=180000;
    total=harga*N;
    cout<<" Total Harga  = Rp"<<total;
    cout<<"\n";
}
else
    if (kode==2)
{
    cout<<" Nama Barang     = Nike\n";
    cout<<" Harga           = Rp. 150000,-\n";
    cout<<" Jumlah Barang   = ";
    cin>>N;
    harga=150000;
    total=harga*N;
    cout<<" Total Harga  = Rp"<<total;
    cout<<"\n";
}
else
    if (kode==3)
{
    cout<<" Nama Barang     = Vans\n";
    cout<<" Harga           = Rp. 3000000,-\n";
    cout<<" Jumlah Barang   = ";
    cin>>N;
    harga=300000;
    total=harga*N;
    cout<<" Total Harga  = Rp"<<total;
    cout<<"\n";
}
else
    if (kode==4)
{
    cout<<" Nama Barang      = Adidas\n";
    cout<<" Harga            = Rp. 300000,-\n";
    cout<<" Jumlah Barang    = ";
    cin>>N;
    harga=300000;
    total=harga*N;
    cout<<" Total Harga  = Rp"<<total;
    cout<<"\n";
}
else
    if (kode==5)
{
    cout<<" Nama Barang     = Puma\n";
    cout<<" Harga           = Rp. 500000,-\n";
    cout<<" Jumlah Barang   = ";
    cin>>N;
    harga=500000;
    total=harga*N;
    cout<<" Total Harga  = Rp"<<total;
    cout<<"\n";
}
else
{
    cout<<"-Invalid Number-\a";
goto ulang;
}
bayar=bayar+total;
}
    cout<<"\nTotal Bayar\t\t        = Rp"<<bayar<<",-";
    cout<<"\n\n\Masukan Pembayaran  = Rp";cin>>duit;
if((bayar>1000000)){
diskon = bayar*0.10;
cout<<"\nKamu Dapat Diskon 10%\t";
}else
    if((bayar>=501000)&& (bayar<=1000000)){
diskon = bayar*0.05;
cout<<"\nKamu Dapat Diskon 5%\t";
}else
    if((bayar<501000)){
diskon = 0;
cout<<"\nKamu Dapat Diskon 0%\t";
}
else {
diskon = 0;
}
akhir       =bayar-diskon;
kembalian   =duit-akhir;

cout<<"\nKamu Dapat Diskon\t  = Rp"<<diskon<<",-";
cout<<"\nCash Back\t          = Rp"<<kembalian<<",-";
cout<<"\n\n\t\t\t((((TERIMA KASIH))))";
cout<<"\n\n\n\n\nPembelian Baru [y/t] ";cin>>pembelian;
if (pembelian=='y'||pembelian=='Y')
goto atas;
else
cout<<"\n\n\t\t\tProgram Logging Off....";
}
