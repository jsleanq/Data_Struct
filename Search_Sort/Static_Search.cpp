//静态查找

const int length = 100;
ElemType data[100];

//1.顺序查找
int SqSearch(ElmeType key) {
	int k = 0;
	while (k < length && data[k] != key) {
		k++;
	}
	if (k < length) {
		return k + 1;
	}
	else
		return 0;
}

//1.1 顺序查找修改版（查找元素位于data[1]~data[length]）
int SqSearch(ElmeType key) {
	data[0] = key;//监视哨
	int k = length;
	while (data[k] != key) {
		k--;
	}
	return k;
}

//2.二分查找（查找元素有序）
int BinSearch(ElemType key) {
	int mid, low, high;
	low = 0;
	high = length - 1;
	while (low < high) {
		mid = (low + high) / 2;
		if (data[mid] == key) {
			return mid + 1;
		}
		else if (data[mid] < key) {
			low = mid + 1;
		}
		else high = mid - 1;
	}
	return 0;
}