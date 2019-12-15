#include<iostream>
using namespace std;

class State {
public:
	int arr[9];
	State* CHILDERN[4];

	State(int arr1[])
	{
		for (int i = 0; i < 9; i++)
		{
			arr[i]=arr1[i];
		}
	}

	bool goalstate()
	{
		if (arr[0] == 0 && arr[1] == 1 && arr[2] == 2 && arr[3] == 3 && arr[4] == 4 && arr[5] == 5 && arr[6] == 6 && arr[7] == 7 && arr[8] == 8)
		{
			return 1;
		}
		return 0;
	}

	void display()
	{
		cout << arr[0] << arr[1] << arr[2] << endl;
		cout << arr[3] << arr[4] << arr[5] << endl;
		cout << arr[6] << arr[7] << arr[8] << endl;
	}

	int *retarr()
	{
		return arr;
	}

};

int *moveup(int arr[])
{
	if (arr[3] == 0)
	{
		arr[3] = arr[0];
		arr[0] = 0;
		return arr;
	}

	if (arr[6] == 0)
	{
		arr[6] = arr[3];
		arr[3] = 0;
		return arr;
	}

	if (arr[4] == 0)
	{
		arr[4] = arr[1];
		arr[1] = 0;
		return arr;
	}

	if (arr[7] == 0)
	{
		arr[7] = arr[4];
		arr[4] = 0;
		return arr;
	}

	if (arr[5] == 0)
	{
		arr[5] = arr[2];
		arr[2] = 0;
		return arr;
	}

	if (arr[8] == 0)
	{
		arr[8] = arr[5];
		arr[5] = 0;
		return arr;
	}

	return arr;
}

int *movedown(int arr[])
{
	if (arr[0] == 0)
	{
		arr[0] = arr[3];
		arr[3] = 0;
		return arr;
	}

	if (arr[3] == 0)
	{
		arr[3] = arr[6];
		arr[6] = 0;
		return arr;
	}

	if (arr[1] == 0)
	{
		arr[1] = arr[4];
		arr[4] = 0;
		return arr;
	}

	if (arr[4] == 0)
	{
		arr[4] = arr[7];
		arr[7] = 0;
		return arr;
	}

	if (arr[2] == 0)
	{
		arr[2] = arr[5];
		arr[5] = 0;
		return arr;
	}

	if (arr[5] == 0)
	{
		arr[5] = arr[8];
		arr[8] = 0;
		return arr;
	}

	return arr;
}

int *moveleft(int arr[])
{
	if (arr[1] == 0)
	{
		arr[1] = arr[0];
		arr[0] = 0;
		return arr;
	}

	if (arr[2] == 0)
	{
		arr[2] = arr[1];
		arr[1] = 0;
		return arr;
	}

	if (arr[4] == 0)
	{
		arr[4] = arr[3];
		arr[3] = 0;
		return arr;
	}

	if (arr[5] == 0)
	{
		arr[5] = arr[4];
		arr[4] = 0;
		return arr;
	}

	if (arr[7] == 0)
	{
		arr[7] = arr[6];
		arr[6] = 0;
		return arr;
	}

	if (arr[8] == 0)
	{
		arr[8] = arr[7];
		arr[7] = 0;
		return arr;
	}

	return arr;
}

int *moveright(int arr[])
{
	if (arr[0] == 0)
	{
		arr[0] = arr[1];
		arr[1] = 0;
		return arr;
	}

	if (arr[1] == 0)
	{
		arr[1] = arr[2];
		arr[2] = 0;
		return arr;
	}

	if (arr[3] == 0)
	{
		arr[3] = arr[4];
		arr[4] = 0;
		return arr;
	}

	if (arr[4] == 0)
	{
		arr[4] = arr[5];
		arr[5] = 0;
		return arr;
	}

	if (arr[6] == 0)
	{
		arr[6] = arr[7];
		arr[7] = 0;
		return arr;
	}

	if (arr[7] == 0)
	{
		arr[7] = arr[8];
		arr[8] = 0;
		return arr;
	}

	return arr;
}

int *movedown(int arr[3][3])
{
	if (arr[0][0] == 0)
	{
		arr[0][0] = arr[1][0];
		arr[1][0] = 0;
		return *arr;
	}

	if (arr[1][0] == 0)
	{
		arr[1][0] = arr[2][0];
		arr[2][0] = 0;
		return *arr;
	}

	if (arr[0][1] == 0)
	{
		arr[0][1] = arr[1][1];
		arr[1][1] = 0;
		return *arr;
	}

	if (arr[1][1] == 0)
	{
		arr[1][1] = arr[2][1];
		arr[2][1] = 0;
		return *arr;
	}

	if (arr[0][2] == 0)
	{
		arr[0][2] = arr[1][2];
		arr[1][2] = 0;
		return *arr;
	}

	if (arr[1][2] == 0)
	{
		arr[1][2] = arr[2][2];
		arr[2][2] = 0;
		return *arr;
	}
	return *arr;
}

int *moveleft(int arr[3][3])
{

	if (arr[0][1] == 0)
	{
		arr[0][1] = arr[0][0];
		arr[0][0] = 0;
		return *arr;
	}

	if (arr[0][2] == 0)
	{
		arr[0][2] = arr[0][1];
		arr[0][1] = 0;
		return *arr;
	}

	if (arr[1][1] == 0)
	{
		arr[1][1] = arr[1][0];
		arr[1][0] = 0;
		return *arr;
	}

	if (arr[1][2] == 0)
	{
		arr[1][2] = arr[1][1];
		arr[1][1] = 0;
		return *arr;
	}

	if (arr[2][1] == 0)
	{
		arr[2][1] = arr[2][0];
		arr[2][0] = 0;
		return *arr;
	}

	if (arr[2][2] == 0)
	{
		arr[2][2] = arr[2][1];
		arr[2][1] = 0;
		return *arr;
	}
	return *arr;
}

int *moveright(int arr[3][3])
{
	if (arr[0][0] == 0)
	{
		arr[0][0] = arr[0][1];
		arr[0][1] = 0;
		return *arr;
	}

	if (arr[0][1] == 0)
	{
		arr[0][1] = arr[0][2];
		arr[0][2] = 0;
		return *arr;
	}

	if (arr[1][0] == 0)
	{
		arr[1][0] = arr[1][1];
		arr[1][1] = 0;
		return *arr;
	}

	if (arr[1][1] == 0)
	{
		arr[1][1] = arr[1][2];
		arr[1][2] = 0;
		return *arr;
	}

	if (arr[2][0] == 0)
	{
		arr[2][0] = arr[2][1];
		arr[2][1] = 0;
		return *arr;
	}

	if (arr[2][1] == 0)
	{
		arr[2][1] = arr[2][2];
		arr[2][2] = 0;
		return *arr;
	}
	return *arr;
}



int main()
{
	int arr[9];
	arr[0] = 8;
	arr[1]=0;
	arr[2]=6;
	arr[3]=5;
	arr[4]=4;
	arr[5]=7;
	arr[6]=2;
	arr[7]=3;
	arr[8]=1;
	State s(arr);
	cout<<"hey";
	if (!s.goalstate())
	{
		int *arr1 = s.retarr();
		int *arr2 = s.retarr();
		int *arr3 = s.retarr();
		int *arr4 = s.retarr();

		arr1 = moveup(arr1);
		arr2 = movedown(arr2);
		arr3 = moveleft(arr3);
		arr4 = moveright(arr4);
		
	}
}
