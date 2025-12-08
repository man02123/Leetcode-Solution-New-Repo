// Last updated: 08/12/2025, 17:30:21

class Solution {
public:
	double h;
	vector<int>v;
	int n;
	bool can(int sp)
	{

		double time = 0;

		for (int i = 0; i < n; i++)
		{
			double t = ((double)v[i] / sp);

			if (i == n - 1)// the hour of the last train can have a float integer 
				time += t;
			else // The train can only depart at an integer hour
				time += ceil(t);
		}

		if (time <= h)
			return true;
		return false;

	}
	int minSpeedOnTime(vector<int>& dist, double hour) {

		v = dist;
		n = v.size();
		h = hour;

		int ft = 1, rt = 1e7;

		int md;
		int res = -1;
		while (ft <= rt)
		{
			/*

			0 0 0 0 (1) 1 1 1 1
					ans

			*/
			md = (ft + rt) / 2;// speed

			if (can(md))
			{
				res = md;
				rt = md - 1;
			}
			else
			{
				ft = md + 1;
			}
		}

		cout << res << endl;
		return res;
	}
};