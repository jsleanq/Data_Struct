//1.直接插入排序
//假定插入第k个记录时，前面的R1，R2...Rk-1已经排好序,后面的Rk，Rk+1...Rn无序
//将Rk与前面元素进行比较，找到合适位置插入
void InsertSort(int v[],int n) {//v[]为待排序序列，n为元素个数
	int i, j, temp;
	for (i = 1; i < n; i++) {
		temp = v[i];
		j = i;
		while (j > 0 && temp < v[j - 1]) {
			v[j] = v[j - 1];
			j--;
		}
		v[j] = temp;
	}
}

//2.简单选择排序
//假定插入第k个记录时，前面的R1，R2...Rk-1已经排好序,后面的Rk，Rk+1...Rn无序
//
void SelectSort(int v[],int n) {
	int i, j, temp;
	for (i = 0; i < n - 1; i++) {
		int k = 1;
		for (j = i + 1; j < n; j++) {
			if (v[j] < v[k]) {
				k = j; ,
			}
		}
		if (k != i) {
			temp = v[i];
			v[i] = v[k];
			v[k] = temp;
		}
	}
}


//3.冒泡排序
//假定插入第k个记录时，前面的R1，R2...Rk-1已经排好序,后面的Rk，Rk+1...Rn无序
//
void BubleSort(int v[],int n) {
	int temp;
	for (int i = 1; i < n; i++) {
		for (int j = 0; j < n-i; j++) {
			if (v[j] > v[j + 1]) {
				temp = v[j];
				v[j] = v[j + 1];
				v[j + 1] = temp;
			}
		}
	}
}

//4.快速排序
//假定插入第k个记录时，前面的R1，R2...Rk-1已经排好序,后面的Rk，Rk+1...Rn无序
//
int Partition(int low, int high) {
	int pivot = v[low];
	while (low < high) {
		while (low<high && v[high]>pivot) {
			high--;
		}
		v[low] = v[high];
		while (low<high && v[high]<=pivot) {
			low++;
		}
		v[high] = v[low];
	}
	v[low] = pivot;
	return low;
}

void QuickSort(int left, int right) {
	if (left < right) {
		int pivotops = Partition(left, right);
		QuickSort(left, pivotops - 1);
		QuickSort(pivotops + 1, right);
	}
}