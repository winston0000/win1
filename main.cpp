#include<iostream>
#include<iomanip>
#include<vector>
using namespace std;

void stuAve(vector<double> matrix) {
	double answer=0;
	for (int i = 0; i < 3; i++) {
		answer = answer+matrix[i];
	}
	answer = answer / 3.0;
	for (int i = 0; i < 3; i++) {
		cout <<fixed<<setprecision(1)<< matrix[i]<<", ";
	}
	cout << answer<<endl;
}

double *courseAve(vector<double>) {
	return 0;
}

int main() {

	vector<double>student1(3);
	vector<double>student2(3);
	vector<double>student3(3);
	vector<double>student4(3);
	vector<double>student5(3);
	student1[0] = 80.0;
	student1[1] = 70.0;
	student1[2] = 90.0;

	student2[0] = 85.0;
	student2[1] = 77.0;
	student2[2] = 95.0;

	student3[0] = 83.0;
	student3[1] = 75.0;
	student3[2] = 70.0;

	student4[0] = 73.0;
	student4[1] = 95.0;
	student4[2] = 67.0;

	student5[0] = 88.0;
	student5[1] = 79.0;
	student5[2] = 71.0;
	
	stuAve(student1);
	stuAve(student2);
	stuAve(student3);
	stuAve(student4);
	stuAve(student5);

	double ans1, ans2, ans3;
	ans1 = (student1[0] + student2[0] + student3[0] + student4[0] + student5[0]) / 5.0;
	ans2 = (student1[1] + student2[1] + student3[1] + student4[1] + student5[1]) / 5.0;
	ans3 = (student1[2] + student2[2] + student3[2] + student4[2] + student5[2]) / 5.0;

	cout << "Average: " << ans1 << ", " << ans2 << ", " << ans3;

	system("pause");

}
