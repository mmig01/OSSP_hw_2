#include<iostream>
#include<string>
using namespace std;
int main() {
  string name;
  int student_num;
  string team_name;
  cout << "이름을 입력하세요 : " << '\n';
  cin >> name;
  cout << "학번을 입력하세요 : " << '\n';
  cin >> student_num;
  cout << "팀 이름을 입력하세요 : " << '\n';
  cin >> team_name;

  cout << "<출력>\n";
  cout << "이름 : " << name << '\n';
  cout << "학번 : " << student_num << '\n';
  cout << "팀 이름: " << team_name << '\n';
  return 0;
}
