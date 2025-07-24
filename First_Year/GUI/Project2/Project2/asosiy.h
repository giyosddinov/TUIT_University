#pragma once
using namespace System;

ref class asosiy
{
private:
    String^ Ism;
    String^ Familya;
    String^ packet;
    String^ tel;
    int vaqt;
    String^ Id;
public:
    asosiy(String^ name, String^ surname, String^ id, String^ Tel, int time)
    {
        this->Ism = name;
        this->Familya = surname;
        this->Id = id;
        this->tel = Tel;
        this->vaqt = time;
        this->packet = getAksiya(); // avtomatik hisoblab saqlaydi
    }

    String^ getFamiliya() { return Familya; }
    String^ getIsm() { return Ism; }
    String^ getTel() { return tel; }
    int getVaqt() { return vaqt; }
    String^ getPacket() { return packet; }
    String^ getId() { return Id; }

    // Bu metod vaqt asosida aksiya holatini qaytaradi
    String^ getAksiya()
    {
        if (vaqt >= 0 && vaqt <= 8)
            return "Aksiya!";
        else
            return "Aksiya yo'q";
    }
};
