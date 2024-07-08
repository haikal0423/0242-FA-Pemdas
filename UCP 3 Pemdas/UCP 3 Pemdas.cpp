#include <iostream>
    using namespace std;

    class MasukUniversitas {
    private:
        int uangPendaftaran;
        int uangSemesterPertama;
        int uangBangunan;
        int totalBiaya;

    public:
        MasukUniversitas() {
            uangPendaftaran = 0;
            uangSemesterPertama = 0;
            uangBangunan = 0;
            totalBiaya = 0;
        }

        virtual string namaJalurMasuk() = 0;
        virtual void input() = 0;
        virtual void hitungTotalBiaya() = 0;
        virtual void tampilkanTotalBiaya() = 0;

        void setUangPendaftaran(int nilai) {
            uangPendaftaran = nilai;
        }

        int getUangPendaftaran() {
            return uangPendaftaran;
        }

        void setUangSemesterPertama(int nilai) {
            uangSemesterPertama = nilai;
        }

        int getUangSemesterPertama() {
            return uangSemesterPertama;
        }

        void setUangBangunan(int nilai) {
            uangBangunan = nilai;
        }

        int getUangBangunan() {
            return uangBangunan;
        }

        void setTotalBiaya(int nilai) {
            totalBiaya = nilai;
        }

        int getTotalBiaya() {
            return totalBiaya;
        }
    };

    class SNBT : public MasukUniversitas {
    public:
        string namaJalurMasuk() override {
            return "SNBT";
        }

        void input() override {
            int uangPendaftaran, uangSemesterPertama, uangBangunan;
            cout << "Masukkan uang pendaftaran: ";
            cin >> uangPendaftaran;
            setUangPendaftaran(uangPendaftaran);

            cout << "Masukkan uang semester pertama: ";
            cin >> uangSemesterPertama;
            setUangSemesterPertama(uangSemesterPertama);

            cout << "Masukkan uang bangunan: ";
            cin >> uangBangunan;
            setUangBangunan(uangBangunan);
        }

        void hitungTotalBiaya() override {
            int totalBiaya = getUangPendaftaran() + getUangSemesterPertama() + getUangBangunan();
            setTotalBiaya(totalBiaya);
        }

        void tampilkanTotalBiaya() override {
            int totalBiaya = getTotalBiaya();
            cout << "Total Biaya: " << totalBiaya << endl;

            string kategori, rekomendasi;
            if (totalBiaya > 40000000) {
                kategori = "Mahal";
                rekomendasi = "Tidak Direkomendasikan";
            }
            else if (totalBiaya > 20000000) {
                kategori = "Sedang";
                rekomendasi = "Dipertimbangkan";
            }
            else {
                kategori = "Murah";
                rekomendasi = "Direkomendasikan";
            }

            cout << "Kategori: " << kategori << endl;
            cout << "Rekomendasi: " << rekomendasi << endl;
        }
    };

    class SNBP : public MasukUniversitas {
    public:
        string namaJalurMasuk() override {
            return "SNBP";
        }

        void input() override {
            int uangPendaftaran, uangSemesterPertama;
            cout << "Masukkan uang pendaftaran: ";
            cin >> uangPendaftaran;
            setUangPendaftaran(uangPendaftaran);

            cout << "Masukkan uang semester pertama: ";
            cin >> uangSemesterPertama;
            setUangSemesterPertama(uangSemesterPertama);
        }

        void hitungTotalBiaya() override {
            int totalBiaya = getUangPendaftaran() + getUangSemesterPertama();
            setTotalBiaya(totalBiaya);
        }

        void tampilkanTotalBiaya() override {
            int totalBiaya = getTotalBiaya();
            cout << "Total Biaya: " << totalBiaya << endl;

            string kategori, rekomendasi;
            if (totalBiaya > 30000000) {
                kategori = "Mahal";
                rekomendasi = "Tidak Direkomendasikan";
            }
            else if (totalBiaya > 15000000) {
                kategori = "Sedang";
                rekomendasi = "Dipertimbangkan";
            }
            else {
                kategori = "Murah";
                rekomendasi = "Direkomendasikan";
            }

            cout << "Kategori: " << kategori << endl;
            cout << "Rekomendasi: " << rekomendasi << endl;
        }
    };

    int main() {
        