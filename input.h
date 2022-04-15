using namespace std;

class Input {
public:
  void cetak() {
    cout << " Tabungan \n";
    cout << "Masukan bulan: ";
    cin >> bulan;
    cout << "Masukan uang saku: ";
    cin >> Usaku;
    
  }
  void toFile() {
    ofstream tulis_data;
    tulis_data.open("slip.txt");
    tulis_data << Usaku << endl;
    tulis_data << bulan;
    tulis_data.close();
  }

private:
  int Usaku, bulan;
};