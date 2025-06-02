#include <iostream>
#include <string>
#include <vector>

using namespace std;
// [1������] �ʼ����!
// �Է¹��� ���ڵ��� �հ踦 ���ϴ� �Լ� ����
int sum_nums(vector<int>&nums) {
	int sum = 0;
	// �Ѱܹ��� �迭�� ��ȸ�ϸ� ���� sum�� ���� ������ ��.
	for (int i = 0; i < 5; i++) {
		sum += nums[i];
	}
	return sum;
}

// sum_num �Լ��� ȣ���Ͽ� �迭���� ��ŭ ������ ����� ����.
int nums_avg(vector<int>& nums) {
	return sum_nums(nums)/5;
}

// �ʼ� ��� 2�� ����
// ��ȯ ���� ���� �ʿ����� �ʴٰ� �����Ǿ� void�� �Լ��� ����
void sorted_nums(vector<int>& nums) {
	// ���� ������ ���ؼ� 2�� for���� ���
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4 - i; j++) {
			if (nums[j] > nums[j + 1]) {
				// temp������ Ȱ���ؼ� �ε��� j�� j+1�� ���� ���� �� ���� �ڸ��� ����
				int temp = nums[j];
				nums[j] = nums[j + 1];
				nums[j+1] = temp;
			}
		}
	}
}

int main()
{
	cout << "5���� ���ڸ� �Է��ϼ���" << endl;
	vector<int>nums(5);
	// ������ �Է¹����� ���ÿ� �迭�� ����
	for (int i = 0; i < 5; i++) {
		cin >> nums[i];
	}
	// �հ� ���� total
	int total= sum_nums(nums);
	// ��� ���� average
	int average = nums_avg(nums);
	cout << "������ ���� : " << total << endl;
	cout << "������ ��� : " << average << endl;
	// ���� �Լ� ȣ��
	sorted_nums(nums);
	cout << "���ĵ� �迭 : ";
	for (int num : nums) {
		cout << num << " ";
	}
	return 0;
}