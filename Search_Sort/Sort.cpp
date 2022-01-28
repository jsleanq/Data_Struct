//1.ֱ�Ӳ�������
//�ٶ������k����¼ʱ��ǰ���R1��R2...Rk-1�Ѿ��ź���,�����Rk��Rk+1...Rn����
//��Rk��ǰ��Ԫ�ؽ��бȽϣ��ҵ�����λ�ò���
void InsertSort(int v[],int n) {//v[]Ϊ���������У�nΪԪ�ظ���
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

//2.��ѡ������
//�ٶ������k����¼ʱ��ǰ���R1��R2...Rk-1�Ѿ��ź���,�����Rk��Rk+1...Rn����
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


//3.ð������
//�ٶ������k����¼ʱ��ǰ���R1��R2...Rk-1�Ѿ��ź���,�����Rk��Rk+1...Rn����
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

//4.��������
//�ٶ������k����¼ʱ��ǰ���R1��R2...Rk-1�Ѿ��ź���,�����Rk��Rk+1...Rn����
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