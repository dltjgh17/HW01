#include <iostream>
#include <string>
#include <vector>

using namespace std;
// [1번과제] 필수기능!
// 입력받은 숫자들의 합계를 구하는 함수 선언
int sum_nums(vector<int>&nums) {
	int sum = 0;
	// 넘겨받은 배열을 순회하며 변수 sum에 값을 누적합 함.
	for (int i = 0; i < 5; i++) {
		sum += nums[i];
	}
	return sum;
}

// sum_num 함수를 호출하여 배열길이 만큼 나누어 평균을 구함.
int nums_avg(vector<int>& nums) {
	return sum_nums(nums)/5;
}

// 필수 기능 2번 정렬
// 반환 값이 따로 필요하지 않다고 생각되어 void로 함수를 선언
void sorted_nums(vector<int>& nums) {
	// 버블 정렬을 위해서 2중 for문을 사용
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4 - i; j++) {
			if (nums[j] > nums[j + 1]) {
				// temp변수를 활용해서 인덱스 j와 j+1의 값을 비교한 후 서로 자리를 변경
				int temp = nums[j];
				nums[j] = nums[j + 1];
				nums[j+1] = temp;
			}
		}
	}
}

int main()
{
	cout << "5개의 숫자를 입력하세요" << endl;
	vector<int>nums(5);
	// 정수를 입력받으며 동시에 배열에 저장
	for (int i = 0; i < 5; i++) {
		cin >> nums[i];
	}
	// 합계 변수 total
	int total= sum_nums(nums);
	// 평균 변수 average
	int average = nums_avg(nums);
	cout << "숫자의 총합 : " << total << endl;
	cout << "숫자의 평균 : " << average << endl;
	// 정렬 함수 호출
	sorted_nums(nums);
	cout << "정렬된 배열 : ";
	for (int num : nums) {
		cout << num << " ";
	}
	return 0;
}