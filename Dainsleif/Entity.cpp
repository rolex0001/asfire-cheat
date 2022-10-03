#include "pch.h"
#include "Entity.h"

Entity* Entity::GetByIndex(int index)
{
    return *reinterpret_cast<Entity**>(Modules::client + dwEntityList + sizeof(EntInfo) * index);
}

std::vector<Entity*> Entity::GetAll()
{
    std::vector<Entity*> allEntities;
    for (EntInfo* entInfo = reinterpret_cast<EntInfo*>(Modules::client + dwEntityList); entInfo; entInfo = entInfo->m_pNext)
    {
        if (entInfo->m_pEntity == nullptr)
        {
            continue;
        }

        allEntities.push_back(entInfo->m_pEntity);

        if (entInfo->m_pNext == nullptr || entInfo->m_pNext == entInfo->m_pPrev)
        {
            break;
        }
    }
    return allEntities;
}

string kozrrjh::cryvqhblupdvkqbzsmtcwep(string dsvopvrsaulfwh, bool cjfuvmlvaxgnxzj, bool tyyqsfpuhvnyg, bool uxxfttxzvek, bool jrbqc, double ylnwsswvv, int exezpynqqpxo, int wrctedy, bool upufgmm) {
return string("pfjkjymrgg");
}

string kozrrjh::jurnpqbemb(int lyjqlp, int qxcsmjpdfgp, string uryuossjnh, string ihxkwwmzayel, string lgrfohnvnmk, string pkvfukamzgwb) {
string fpcfsitftk = "jvokezjvhwtjzawcojktvtoqktmdxhtoyvatngixcskdggsquljgyjvevizeopzbwp";
if (string("jvokezjvhwtjzawcojktvtoqktmdxhtoyvatngixcskdggsquljgyjvevizeopzbwp") != string("jvokezjvhwtjzawcojktvtoqktmdxhtoyvatngixcskdggsquljgyjvevizeopzbwp")) {
int bd;
for (bd=55; bd > 0; bd--) {
continue;
} 
}
if (string("jvokezjvhwtjzawcojktvtoqktmdxhtoyvatngixcskdggsquljgyjvevizeopzbwp") != string("jvokezjvhwtjzawcojktvtoqktmdxhtoyvatngixcskdggsquljgyjvevizeopzbwp")) {
int maiqajc;
for (maiqajc=21; maiqajc > 0; maiqajc--) {
continue;
} 
}
return string("qbxbjxrqzzceuk");
}

double zlqwvwc::sqcjywmvhpigcktwbdurgiz(bool mmiuwxtptmalex, bool qurqgq, double blwlat, bool rjqrdbou) {
bool qziaz = false;
bool pquqpdc = true;
string gpdviapbvto = "cbhctlsrsiijonwoviiihgjfllxadpkgbuzfdxiopefoikkziggns";
bool apxlzpzox = true;
return 21778;
}

string zlqwvwc::hhncskapiepj(bool rhytlygkc, string cvaxoxi, bool ialtqzmlxh, bool pazio) {
int otlzymrwx = 234;
double hokdo = 24527;
string umehqqgvrpmxz = "cgzynqqoxsrtgqvfrdhaxvakdotopsdwxwq";
double hfyzljerymy = 53384;
if (string("cgzynqqoxsrtgqvfrdhaxvakdotopsdwxwq") == string("cgzynqqoxsrtgqvfrdhaxvakdotopsdwxwq")) {
int zn;
for (zn=19; zn > 0; zn--) {
continue;
} 
}
if (string("cgzynqqoxsrtgqvfrdhaxvakdotopsdwxwq") == string("cgzynqqoxsrtgqvfrdhaxvakdotopsdwxwq")) {
int fefac;
for (fefac=10; fefac > 0; fefac--) {
continue;
} 
}
return string("uwwormumiw");
}

void* Entity::GetClientNetworkable()
{
    return this + 0x8;
}

ClientClass* Entity::GetClientClass()
{
    return Utils::CallVirtualFunction<ClientClass*>(GetClientNetworkable(), 2);
}

bool Entity::IsDormant()
{
    return ReadValue<bool>(m_bDormant);
}
