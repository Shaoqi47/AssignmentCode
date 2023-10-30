#pragma once
#include <iostream>
using namespace std;

struct AnnualCases {
    int year;
    string ageGroup;
    int Johor;
    int Kedah;
    int Kelantan;
    int Melaka;
    int NegeriSembilan;
    int Pahang;
    int Perak;
    int Perlis;
    int Pinang;
    int Sabah;
    int Sarawak;
    int Selangor;
    int Terengganu;
    int KL;
    int Labuan;

    AnnualCases* AnlnextAddress;
};

struct User {
    string Role;
    string UserID;
    string FullName;
    string Gender;
    int Age;
    string Email;
    string ContactNo;
    string Username;
    string Password;
    string State;

    User* UnextAddress;
};

struct Case {
    string CaseID;
    string PatientName;
    string PatientGender;
    int PatientAge;
    string DocInCharge;
    string DiagnosisDate;
    string DischargeDate;
    string State;
    bool Status;

    Case* CnextAddress;
};

struct Alert {
    string AlertID;
    string Message;
    string State;
    string AlertDate;

    Alert* AnextAddress;
};

struct Statistic {
    int Year;
    int Week;
    string State;
    int CaseNum;

    Statistic* SnextAddress;
};

class GeneralFunction {
public:

    void readAnnualCasesByAge();
    void readWeeklyCases();
    bool Login();
    void Logout();
    void ManagePerInfo();
    void ViewTotalCases();
    void ViewWeeklyCases();
};

class UserFunction {
public:
    void ViewDailyCases()
    {

    }
    void ViewAlertMsg()
    {

    }
    void FindHistoryByDRange()
    {

    }
};

class DoctorFunction {
public:
    void ReportCase(string Role, string UserID, string FullName, string Gender, int Age, string Email, string ContactNo, string Username, string Password, string State);
    void ViewReported(string SearchDocInCharge);
    void FindCase(string SearchPatientName);
    void FindTtlCaseByAge(int StartAge, int EndAge);
    void FindTtlCaseByState(string SearchState);
};

class AdminFunction {
public:
    void CreateBarChart();
    void SendAlertMsg(string AlertID, string MessageInfo);
};
#pragma once
