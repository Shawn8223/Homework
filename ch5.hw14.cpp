#include <iostream>
#include <cmath>
using namespace std;

const int num_reviewer = 4;
const int num_movies = 6;

double Cartesian_distance(int arr1[], int arr2[], int n)
{
	double	distance = 0;
	for (int i = 0; i < n; i++)
	{
		if (arr2[i] != 0)
		{
			distance += pow(arr1[i] - arr2[i], 2);
		}
		
	}
	return sqrt(distance);
}

int main(void)
{
	int MoviesRates[num_reviewer][num_movies] = {
	{3, 1, 5, 2, 1, 5},
	{4, 2, 1, 4, 2, 4},
	{3, 1, 2, 4, 4, 1},
	{5, 1, 4, 2, 4, 2}
	};

	cout << "Enter ratings for any three movies.(100~105)\n";

	int userRating[num_movies] = { 0,0,0,0,0,0 };

	for (int i = 0; i < 3; i++)
	{
		int movieID = 0;
		int rating = 0;

		cout << "movie ID:";
		cin >> movieID;
		cout << "rating:";
		cin >> rating;
		userRating[movieID - 100] = rating;
	}

	double distance = 0;
	double minDistance = 9999;
	int closetReviewer = -1;

	for (int j = 0; j < num_reviewer; j++)
	{
		distance = Cartesian_distance(MoviesRates[j], userRating, num_movies);
		if (distance < minDistance)
		{
			minDistance = distance;
			closetReviewer = j;
		}
	}

	cout << "\nPredict rating. Based on the closetReviewer:" << closetReviewer << endl;
	for (int k = 0; k < num_movies; k++)
	{
		if (userRating[k] == 0)
		{
			cout << "movie" << 100 + k << ":" << MoviesRates[closetReviewer][k] << endl;
		}
	}
	return 0;
}