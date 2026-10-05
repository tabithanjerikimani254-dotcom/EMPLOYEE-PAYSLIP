/*
    Name: Tabitha Kimani
    Registration No: CT101/G/26591/25
    Course: BSc Computer Science
    
*/
 #include <iostream>
using namespace std;

float CalculateNetSalary(float basicSalary, float overtimePay) {
    return basicSalary + overtimePay;
}

float CalculateOvertimePay(int overtimeHours, int ratePerHour) {
    return overtimeHours * ratePerHour;
}

int main() {
    string employeeName;
    float basicSalary;
    int overtimeHours;
    int ratePerHour;
    float overtimePay;
    float netSalary;
    
    cout<<"name:TABITHA KIMANI:"<<endl;
	cout<<"REG.NO:CT101/G/26591/25:"<<endl;

    cout << "enter employee name:" << endl;
    cin >> employeeName;
    cout << "enter basic salary:" << endl;
    cin >> basicSalary;
    cout << "enter overtime hours:" << endl;
    cin >> overtimeHours;
    cout << "enter rate per hour:" << endl;
    cin >> ratePerHour;

    overtimePay = CalculateOvertimePay(overtimeHours, ratePerHour);
    netSalary = CalculateNetSalary(basicSalary, overtimePay);

cout<<"PAYSLIP"<<endl;
cout<<"******************"<<endl;
cout<<"employee name:"<<employeeName<<endl;
cout<<"basic salary:"<<basicSalary<<endl;
cout<<"overtime pay:"<<overtimePay<<endl;
cout<<"*******************"<<endl;
cout<<"net salary:"<<netSalary<<endl;
cout<<"*******************"<<endl;
return 0;
}