using namespace std;
class Proses {
  public:
  void getData() {
  ifstream infile;
  infile.open("slip.txt");
  infile >> Usaku;
  infile >> bulan;
  infile.close();
  }
  void proses() {
    uang =Usaku;
    t_tabung = 0;
    t_keluar = 0;
    int i = 1;
    cout << "\nBulan ke:\tUang saat ini:\t\tTabungan saat ini:\n";
    while(i<=bulan) {
      cout << i << "\t\t\t" << uang << "\t\t\t\t" << t_tabung<< endl;
      cout << "Pengeluaran  = ";
      cin >> keluar;
      cout << "Ditabung     = ";
      cin >> tabung;
      cout << "===============================================\n";
      t_keluar += keluar;
      t_tabung += tabung;
      uang -= (keluar+tabung);
      uang += Usaku;
      i++;
      cout << "\n\n";
    }
  }
  void toFile() {
    ofstream tofile;
    tofile.open("slip.txt");
    tofile << t_tabung << endl;
    tofile << bulan << endl;
    tofile << t_keluar;
  }
  private:
  int Usaku,bulan,uang,tabung,keluar,t_tabung,t_keluar;
};