#include<vector>
#include<iostream>
using namespace std; 

class Elephant {
private:
	string name;
	float height;
	float heavy;
	float vector;
	float changdu;
public:
	Elephant() {
		height = 20;
		heavy = 20;
		changdu = 20;
		name = "������";
		cout << "��ʼ��ʼ������"<<endl;
	}
	void set_name(string name) {
		this->name = name;
	}
	void set_height(float height) {
		this->height = height;
	}
	void set_heavy(float heavy) {
		this->heavy = heavy;
	}
	void set_vector(float vector) {
		this->vector = vector;
	}
	void set_changdu(float changdu) {
		this->changdu = changdu;
	}
	string get_name() {
		return this->name;
	}
	float get_height() {
		return this->height;
	}
	float get_heavy() {
		return this->heavy;
	}
	float get_vector() {
		return this->vector;
	}
	float get_changdu() {
		return this->changdu;
	}
};
class Refrigerator {
private:
	float vecity;
	float height;
	float shendu;
public:
	Refrigerator() {
		vecity = 20;
		height = 20;
		shendu = 20;
		cout << "��ʼ��ʼ������"<<endl;
	}
	Refrigerator(int num,int height,int shendu) {
		vecity = num;
		this->height = height;
		this->shendu = shendu;
		cout << "��ʼ��ʼ������"<<endl;
	}
	void set_vecity(float vecity) {
		this->vecity = vecity;
	}
	void set_height(float height) {
		this->height = height;
	}
	void set_shengdu(float changdu) {
		this->shendu = changdu;
	}
	float get_shendu() {
		return this->shendu;
	}
	float get_vecity() {
		return this->vecity;
	}
	float get_height() {
		return this->height;
	}
};

int main() {
	int en,rn;
	cout << "����������:";
	cin >> en;
	rn = en;
	vector<Elephant>e;
	vector<Refrigerator>r;
	Elephant e0;
	Refrigerator r0;
	for (int i = 0; i < en; i++){
		cout << "���ڸ�" << i + 1 << "ֻ����ֵ"<<endl;
		cout << "�����볤�ȡ��߶ȡ����";
		float changdu, gaodu, tiji;
		cin >> changdu >> gaodu >> tiji;
		e0.set_changdu(changdu);
		e0.set_height(gaodu);
		e0.set_vector(tiji);
		string name;
		name = "����";
		e0.set_name(name);
		e.push_back(e0);
	}
	for (int i = 0; i < rn; i++) {
		cout << "���ڸ�" << i + 1 << "ֻ���丳ֵ" << endl;
		cout << "�����볤�ȡ��߶ȡ����";
		float changdu, gaodu, tiji;
		cin >> changdu >> gaodu >> tiji;
		r0.set_shengdu (changdu);
		r0.set_height(gaodu);
		r0.set_vecity(tiji);
		r.push_back(r0);
	}
	for (int i = 0; i < en; i++) {
		Elephant e1 = e[i];
		Refrigerator r1= r[i];
		if (e1.get_changdu() <= r1.get_shendu() && e1.get_vector() <= r1.get_vecity() && e1.get_height() <= r1.get_height()) {
			cout<<"�ô�����Ա��Ž�ȥ���˴�������Ϊ��"<<e1.get_name()<<endl;
		}
		else {
			cout << "�ô����ܱ��Ž�ȥ��ԭ���ǣ�";
			if (e1.get_changdu() > r1.get_shendu()) {
				cout << "���䲻����,���Ϊ:"<<e1.get_changdu()-r1.get_height()<<endl;
			}
			else if (e1.get_vector() > r1.get_vecity()) {
				cout << "�����ݻ�����,���Ϊ:"<<e1.get_vector()-r1.get_vecity()<<endl;
			}
			else {
				cout << "���䲻����,���Ϊ:"<<e1.get_height()-r1.get_height()<<endl;
			}
		}
	}
}