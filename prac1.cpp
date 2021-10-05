// #include <iostream>
// #include <cmath>
// using namespace std;

// int main()
// {
//     int n;
//     cin >> n;
//     bool flag = 0;
//     for (int i = 2; i <= sqrt(n); i++)
//     {
//         if (n % i == 0)
//         {
//             cout << "not prime\n";
//             flag = 1;
//             break;
//         }
//     }
//     if (flag == 0)
//     {
//         cout << "prime\n";
//     }
//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main()
// {
//     int n;
//     cin >> n;
//     int reverse = 0;
//     while (n > 0)
//     {
//         int lastDigit = n % 10;
//         reverse = reverse * 10 + lastDigit;
//         n = n / 10;
//     }

//     cout << reverse;
//     return 0;
// }

// #include <iostream>
// #include <math.h>
// using namespace std;

// int main()
// {
//     int n;
//     cin >> n;
//     int sum = 0;
//     int originalN = n;
//     while (n > 0)
//     {
//         int lastDigit = n % 10;
//         sum += pow(lastDigit, 3);
//         n = n / 10;
//     }
//     if (sum == originalN)
//     {
//         cout << "armstrong";
//     }
//     else
//     {
//         cout << "not armstrong";
//     }
//     return 0;
// }

// #include <iostream>
// #include <cmath>
// using namespace std;

// bool isPrime(int num)
// {
//     for (int i = 2; i <= sqrt(num); i++)
//     {
//         if (num % i == 0)
//         {
//             return false;
//         }
//     }
//     return true;
// }
// int main()
// {
//     int a, b;
//     cin >> a >> b;
//     for (int i = a; i <= b; i++)
//     {
//         if (isPrime(i))
//         {
//             cout << i << endl;
//         }
//     }
//     return 0;
// }

// #include <iostream>
// using namespace std;

// void fibo(int num)
// {
//     int t0 = 0;
//     int t1 = 1;
//     int next;
//     for (int i = 1; i <= num; i++)
//     {
//         cout << t0 << endl;
//         next = t0 + t1;
//         t0 = t1;
//         t1 = next;
//     }
// }

// int main()
// {
//     int n;
//     cin >> n;
//     fibo(n);
//     return 0;
// }

// #include <iostream>
// using namespace std;

// int factorial(int n)
// {
//     int fact = 1;
//     for (int i = 2; i <= n; i++)
//     {
//         fact = fact * i;
//     }
//     return fact;
// }

// int main()
// {
//     int n;
//     cin >> n;
//     cout << factorial(n) << "\n";
//     return 0;
// }

// #include <iostream>
// using namespace std;

// int factorial(int n)
// {
//     int fact = 1;
//     for (int i = 2; i <= n; i++)
//     {
//         fact = fact * i;
//     }
//     return fact;
// }

// int main()
// {

//     int n, r;

//     cin >> n >> r;
//     int ans = factorial(n) / (factorial(r) * factorial(n - r));

//     cout << ans << endl;

//     return 0;
// }

// #include <iostream>
// using namespace std;

// int fact(int n)
// {
//     int fact = 1;
//     for (int i = 2; i <= n; i++)
//     {
//         fact = fact * i;
//     }
//     return fact;
// }

// int main()
// {
//     int n;
//     cin >> n;

//     for (int i = 0; i <= n; i++)
//     {
//         for (int j = 0; j <= i; j++)
//         {
//             cout << fact(i) / (fact(j) * fact(i - j)) << " ";
//         }
//         cout << endl;
//     }
//     return 0;
// }

// #include <iostream>
// using namespace std;

// int sum(int n)
// {
//     int sum = 0;
//     for (int i = 1; i <= n; i++)
//     {
//         sum += i;
//     }
//     return sum;
// }

// int main()
// {
//     int n;
//     cin >> n;
//     int ans = sum(n);
//     cout << ans << endl;
// }

// #include <iostream>
// #include <math.h>
// using namespace std;

// bool check(int x, int y, int z)
// {
//     bool checking = true;
//     int a, b, c;
//     a = max(x, max(y, z));
//     if (a == x)
//     {
//         b = y;
//         c = z;
//     }
//     else if (a == y)
//     {
//         b = x;
//         c = z;
//     }
//     else
//     {
//         b = x;
//         c = y;
//     }

//     if (pow(a, 2) == (pow(b, 2) + pow(c, 2)))
//     {
//         checking = true;
//     }
//     else
//     {
//         checking = false;
//     }

//     return checking;
// }

// int main()
// {
//     int x, y, z;
//     cin >> x >> y >> z;
//     if (check(x, y, z))
//     {
//         cout << "Pythagorean triplet" << endl;
//     }
//     else
//     {
//         cout << "Not Pythagorean Triplet" << endl;
//     }

//     int arr[5];
//     for (int i = 0; i < 5; i++)
//     {
//         arr[i] = i;
//     }
//     cout << sizeof(arr) / sizeof(arr[0]);

//     return 0;
// }

// #include <iostream>
// using namespace std;

// int addCarry(int a, int b)
// {
//     int ans = 0;
//     int previosCarry = 0;
//     while (a > 0 && b > 0)
//     {
//     }
// }

// int main()
// {
//     int arr[5] = {1, 2, 3, 5, 6};
//     int a, b;
//     cin >> a >> b;

//     cout << addCarry(a, b) << endl;
//     for (int i = 0; i <= sizeof(arr); i++)
//     {
//         cout << arr[i] << endl;
//     }
//     return 0;
// }

// #include <iostream>
// #include <climits>
// using namespace std;

// int main()
// {
//     int n;
//     cin >> n;
//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//     int maxNo = INT_MIN;
//     int minNo = INT_MAX;
//     for (int j = 0; j < n; j++)
//     {
//         maxNo = max(maxNo, arr[j]);
//         minNo = min(minNo, arr[j]);
//     }

//     cout << minNo << endl;
//     cout << maxNo << endl;
//     return 0;
// }

// Linear Search
// #include <iostream>
// using namespace std;

// int main()
// {
//     int n;
//     cin >> n;
//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }

// int searchNo;
// cout << "enter the number to search:";
// cin >> searchNo;

// for (int i = 0; i < n; i++)
// {
//     if (arr[i] == searchNo)
//     {
//         cout << "Number found at " << i + 1 << " position ";
//     }
// }

//     return 0;
// }

// Binary search
// #include <iostream>
// using namespace std;

// int binarySearch(int arr[], int n, int key)
// {
//     int start = 0;
//     int end = n;
//     while (start <= end)
//     {
//         int mid = (start + end) / 2;
//         if (arr[mid] == key)
//         {
//             return mid;
//         }
//         else if (arr[mid] > key)
//         {
//             end = mid - 1;
//         }
//         else
//         {
//             start = mid + 1;
//         }
//     }
//     return -1;
// }

// int main()
// {
//     int n;
//     cin >> n;

//     int arr[n];
//     cout << "Enter the array";
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }

//     int key;
//     cout << "Enter the key ";
//     cin >> key;

//     cout << binarySearch(arr, n, key);
//     return 0;
// }

// #include <iostream>
// using namespace std;

// void selectionSort(int arr[], int n)
// {
//     for (int i = 0; i < n - 1; i++)
//     {
//         for (int j = i + 1; j < n; j++)
//         {
//             if (arr[j] < arr[i])
//             {
//                 int temp = arr[j];
//                 arr[j] = arr[i];
//                 arr[i] = temp;
//             }
//         }
//     }
//     for (int k = 0; k < n; k++)
//     {
//         cout << arr[k] << " ";
//     }
// }

// int main()
// {
//     int n;
//     cin >> n;

//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//     selectionSort(arr, n);
//     return 0;
// }

// #include <iostream>
// using namespace std;

// void bubbleSort(int arr[], int n)
// {
//     int counter = 1;
//     while (counter < n)
//     {
//         for (int i = 0; i < n - counter; i++)
//         {
//             if (arr[i] > arr[i + 1])
//             {
//                 int temp = arr[i];
//                 arr[i] = arr[i + 1];
//                 arr[i + 1] = temp;
//             }
//         }
//         counter++;
//     }
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }
// }

// int main()
// {
//     int n;
//     cin >> n;

//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }

//     bubbleSort(arr, n);
//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main()
// {

//     int n;
//     cin >> n;

//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }

//     for (int i = 1; i < n; i++)
//     {
//         int current = arr[i];
//         int j = i - 1;
//         while (arr[j] > current && j >= 0)
//         {
//             arr[j + 1] = arr[j];
//             j--;
//         }
//         arr[j + 1] = current;
//     }

//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     cout << endl;

//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main()
// {
//     int n;
//     cin >> n;

//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }

//     int maxNo = INT_MIN;
//     for (int i = 0; i < n; i++)
//     {

//         maxNo = max(maxNo, arr[i]);
//         cout << maxNo << endl;
//     }
// }

// #include <iostream>
// using namespace std;

// int main()
// {
//     int n;
//     cin >> n;
//     int arr[n];

//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//     int sum = 0;

//     for (int i = 0; i < n; i++)
//     {
//         sum = 0;
//         for (int j = i; j < n; j++)
//         {
//             sum += arr[j];
//             cout << sum << endl;
//         }
//     }
// }

// #include <iostream>
// using namespace std;

// int main()
// {
//     int n;
//     cin >> n;
//     int arr[n];

//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//     int ans = 2;
//     int pd = arr[1] - arr[0];
//     int j = 2;
//     int curr = 2;

//     while (j < n)
//     {
//         if (pd == arr[j] - arr[j - 1])
//         {
//             curr++;
//         }
//         else
//         {
//             pd = arr[j] - arr[j - 1];
//             curr = 2;
//         }
//         ans = max(ans, curr);
//         j++;
//     }
//     cout << ans;
//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main()
// {
//     int n;
//     cin >> n;
//     int arr[n];

//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }

//     int cur;
//     int prev;
//     int next;
//     int ans = 0;
//     for (int i = 0; i < n; i++)
//     {
//         cur = arr[i];
//         next = arr[i + 1];
//         if (i == 0)
//         {

//             if (cur > next)
//             {
//                 // cout << cur << endl;
//                 prev = cur;
//                 ans++;
//             }
//         }
//         else
//         {
//             if (cur > next && cur > prev)
//             {
//                 // cout << cur << endl;
//                 prev = cur;
//                 ans++;
//             }
//         }
//     }
//     cout << ans;
//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main()
// {

//     int n, m;

//     cin >> n >> m;

//     int arr[n][m];
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < m; j++)
//         {
//             cin >> arr[i][j];
//         }
//     }

//     int x;
//     cout << "Enter the number: ";
//     cin >> x;

//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < m; j++)
//         {
//             if (arr[i][j] == x)
//             {
//                 cout << "Element found at" << i << " row and " << j << "column";
//             }
//         }
//     }
//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main()
// {
//     int n, m;
//     cin >> n >> m;

//     int arr[n][m];
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < m; j++)
//         {
//             cin >> arr[i][j];
//         }
//     }

//     int row_start = 0;
//     int row_end = n - 1;
//     int column_start = 0;
//     int column_end = m - 1;

//     while (row_start <= row_end && column_start <= column_end)
//     {
//         // for row start
//         for (int col = column_start; col <= column_end; col++)
//         {
//             cout << arr[row_start][col] << " ";
//         }
//         row_start++;

//         // for col end
//         for (int row = row_start; row <= row_end; row++)
//         {
//             cout << arr[row][column_end] << " ";
//         }
//         column_end--;

//         for (int col = column_end; col >= column_start; col--)
//         {
//             cout << arr[row_end][col] << " ";
//         }
//         row_end--;

//         for (int row = row_end; row >= row_start; row--)
//         {
//             cout << arr[row][column_start] << " ";
//         }
//         column_start++;
//     }
//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main()
// {

//     int n, m;
//     cin >> n >> m;

//     int arr[n][m];
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < m; j++)
//         {
//             cin >> arr[i][j];
//         }
//     }

//     for (int i = 0; i < n; i++)
//     {
//         for (int j = i; j < m; j++)
//         {
//             int temp = arr[i][j];
//             arr[i][j] = arr[j][i];
//             arr[j][i] = temp;
//         }
//     }

//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < m; j++)
//         {
//             cout << arr[i][j] << " ";
//         }
//         cout << endl;
//     }
//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main()
// {

//     int n1, n2, n3;
//     cin >> n1 >> n2 >> n3;

//     int a1[n1][n2];
//     int a2[n2][n3];
//     cout << "enter first matrix" << endl;
//     for (int i = 0; i < n1; i++)
//     {
//         for (int j = 0; j < n2; j++)
//         {
//             cin >> a1[i][j];
//         }
//     }
//     cout << "enter second matrix" << endl;
//     for (int i = 0; i < n2; i++)
//     {
//         for (int j = 0; j < n3; j++)
//         {
//             cin >> a2[i][j];
//         }
//     }
//     int ans[n1][n3];
//     for (int i = 0; i < n1; i++)
//     {
//         for (int j = 0; j < n3; j++)
//         {
//             ans[i][j] = 0;
//         }
//     }

//     for (int i = 0; i < n1; i++)
//     {
//         for (int j = 0; j < n3; j++)
//         {
//             for (int k = 0; k < n2; k++)
//             {
//                 ans[i][j] += a1[i][k] * a2[k][j];
//             }
//         }
//     }

//     for (int i = 0; i < n1; i++)
//     {
//         for (int j = 0; j < n3; j++)
//         {
//             cout << ans[i][j] << " ";
//         }
//         cout << endl;
//     }

//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main()
// {

//     int n, m;
//     cin >> n >> m;

//     int arr[n][m];

//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < m; j++)
//         {
//             cin >> arr[i][j];
//         }
//     }

//     int x;
//     cout << "Enter the number you wanna search: ";
//     cin >> x;
//     int r = 0, c = m - 1;
//     bool found = false;
//     while (r < n && c >= 0)
//     {
//         if (arr[r][c] == x)
//         {

//             found = true;
//         }
//         if (arr[r][c] > x)
//         {
//             c--;
//         }
//         else
//         {
//             r++;
//         }
//     }
//     if (found)
//     {
//         cout << "Element found";
//     }
//     else
//     {
//         cout << "Element not found";
//     }
//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main()
// {
//     int n;
//     cin >> n;
//     char arr[n + 1];
//     cin >> arr;

//     bool check = true;
//     for (int i = 0; i < n; i++)
//     {
//         if (arr[i] != arr[n - 1 - i])
//         {
//             check = false;
//         }
//     }
//     if (check)
//     {
//         cout << "palindrome";
//     }
//     else
//     {
//         cout << "not palindrome";
//     }
//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main()
// {

//     int n;
//     cin >> n;
//     cin.ignore();
//     char arr[n + 1];

//     cin.getline(arr, n);
//     cin.ignore();
//     int i = 0;
//     int curLength = 0;
//     int max = 0;
//     int st = 0, maxst = 0;
//     while (1)
//     {
//         if (arr[i] == ' ' || arr[i] == '\0')
//         {
//             if (curLength > max)
//             {
//                 max = curLength;
//                 maxst = st;
//             }
//             curLength = 0;
//             st = i + 1;
//         }
//         else
//         {
//             curLength++;
//         }

//         if (arr[i] == '\0')
//         {
//             break;
//         }
//         i++;
//     }

//     cout << max << endl;
//     for (int i = 0; i < max; i++)
//     {
//         cout << arr[i + maxst];
//     }
//     return 0;
// }

// #include <iostream>
// #include <string>

// using namespace std;

// int main()
// {
//     // getline(cin,s)
//     string s = "abc";
//     string a = "xyz";
//     cout << s.compare(a);
//     return 0;
// }

// #include <iostream>
// #include <string>
// #include <algorithm>

// using namespace std;

// int main()
// {

//     string s1 = "asdsadjknasd";
//     for (int i = 0; i < s1.size(); i++)
//     {
//         if (s1[i] >= 'a' && s1[i] <= 'z')
//         {
//             s1[i] -= 32;
//         }
//     }
//     cout << s1;
//     for (int i = 0; i < s1.size(); i++)
//     {
//         if (s1[i] >= 'A' && s1[i] <= 'Z')
//         {
//             s1[i] += 32;
//         }
//     }
//     cout << s1;
//     return 0;
// }

// #include <iostream>
// #include <string>
// #include <algorithm>
// using namespace std;
// int main()
// {
//     string s = "fassfsdasd";
//     transform(s.begin(), s.end(), s.begin(), ::toupper);
//     cout << s << endl;
//     transform(s.begin(), s.end(), s.begin(), ::tolower);
//     cout << s;
//     return 0;
// }

// #include <iostream>
// #include <string>
// #include <algorithm>

// using namespace std;

// int main()
// {
//     string s = "53214";
//     sort(s.begin(), s.end());
//     reverse(s.begin(), s.end());
//     cout << s;
//     return 0;
// }

// #include <iostream>
// #include <string>
// #include <algorithm>

// using namespace std;

// int main()
// {

//     string s = "asdsdsadkjashd";
//     int freq[26];

//     for (int i = 0; i < 26; i++)
//     {
//         freq[i] = 0;
//     }

//     for (int i = 0; i < s.size(); i++)
//     {
//         freq[s[i] - 'a']++;
//     }

//     char ans = 'a';
//     int maxFreq = 0;
//     for (int i = 0; i < 26; i++)
//     {
//         if (freq[i] > maxFreq)
//         {
//             maxFreq = freq[i];
//             ans = i + 'a';
//         }
//     }
//     cout << ans << ":" << maxFreq;
//     return 0;
// }

// #include <iostream>
// using namespace std;

// class student
// {
// public:
//     string name;
//     int age;
//     bool gender;

//     student(string s, int a, bool g)
//     {
//         name = s;
//         age = a;
//         gender = g;
//     }
//     void printInfo()
//     {
//         cout << "Name:" << name << endl;
//         cout << "Age:" << age << endl;
//         cout << "Gender:" << gender << endl;
//     }
// };
// int main()
// {
//     // student arr[3];
//     // a.name = "Shreesh";
//     // a.age = 23;
//     // a.gender = 0;

//     // for (int i = 0; i < 3; i++)
//     // {
//     //     cout << "Name=";
//     //     cin >> arr[i].name;
//     //     cout << "Age=";
//     //     cin >> arr[i].age;
//     //     cout << "Gender=";
//     //     cin >> arr[i].gender;
//     // }
//     // for (int i = 0; i < 3; i++)
//     // {
//     //     arr[i].printInfo();
//     // }

//     student a("Shreesh", 23, 0);
//     a.printInfo();
//     return 0;
// }

// #include <iostream>
// using namespace std;

// class base
// {
// public:
//     virtual void print()
//     {
//         cout << "This is base class's print function \n";
//     }
//     void display()
//     {
//         cout << "This is base class's display function \n";
//     }
// };

// class derived : public base
// {
// public:
//     void print()
//     {
//         cout << "This is derived class's print function \n";
//     }
//     void display()
//     {
//         cout << "This is derived class's display function \n";
//     }
// };
// int main()
// {
//     base *ptr;
//     derived d;
//     ptr = &d;

//     ptr->print();
//     ptr->display();
//     return 0;
// }

// #include <iostream>
// using namespace std;

// class node
// {
// public:
//     int data;
//     node *next;

//     node(int val)
//     {
//         data = val;
//         next = NULL;
//     }
// };

// void insertAtTail(node *&head, int val)
// {
//     node *n = new node(val);
//     if (head == NULL)
//     {
//         head = n;
//         return;
//     }
//     node *temp = head;
//     while (temp->next != NULL)
//     {
//         temp = temp->next;
//     }
//     temp->next = n;
// }

// void display(node *head)
// {
// }

// int main()
// {
//     return 0;
// }

// #include <iostream>
// using namespace std;

// class node
// {
// public:
//     int data;
//     node *next;

//     node(int val)
//     {
//         data = val;
//         next = NULL;
//     }
// };

// void insertIntoTail(node *&head, int val)
// {
//     node *n = new node(val);
//     if (head == NULL)
//     {
//         head = n;
//         return;
//     }

//     node *temp = head;
//     while (temp->next != NULL)
//     {
//         temp = temp->next;
//     }
//     temp->next = n;
// }

// void display(node *head)
// {
//     node *temp = head;
//     while (temp != NULL)
//     {
//         cout << temp->data << "->";
//         temp = temp->next;
//     }
//     cout << "NULL" << endl;
// }

// int main()
// {
//     node *head = NULL;
//     insertIntoTail(head, 1);
//     insertIntoTail(head, 2);
//     insertIntoTail(head, 3);
//     insertIntoTail(head, 4);
//     insertIntoTail(head, 5);
//     insertIntoTail(head, 6);
//     display(head);

//     return 0;
// }

// #include <iostream>
// using namespace std;

// class node
// {
// public:
//     int data;
//     node *next;

//     node(int val)
//     {
//         data = val;
//         next = NULL;
//     }
// };

// void insertAtTail(node *&head, int val)
// {
//     node *n = new node(val);
//     if (head == NULL)
//     {
//         head = n;
//         return;
//     }
//     node *temp = head;
//     while (temp->next != NULL)
//     {
//         temp = temp->next;
//     }
//     temp->next = n;
// }

// void display(node *head)
// {
//     node *temp = head;
//     while (temp != NULL)
//     {
//         cout << temp->data << "->";
//         temp = temp->next;
//     }
//     cout << "NULL" << endl;
// }

// void insertAtHead(node *&head, int val)
// {
//     node *n = new node(val);
//     n->next = head;
//     head = n;
// }

// bool search(node *head, int key)
// {
//     node *temp = head;

//     while (temp != NULL)
//     {
//         if (temp->data == key)
//         {
//             return true;
//         }
//         temp = temp->next;
//     }

//     return false;
// }

// int main()
// {
//     node *head = NULL;
//     insertAtTail(head, 1);
//     insertAtTail(head, 3);
//     insertAtTail(head, 4);
//     insertAtTail(head, 6);
//     insertAtTail(head, 2);
//     display(head);
//     insertAtHead(head, 10);
//     display(head);
//     if (search(head, 0) == true)
//     {
//         cout << "Number found" << endl;
//     }
//     else
//     {
//         cout << "Number not found" << endl;
//     }
//     return 0;
// }

// #include <iostream>
// using namespace std;

// class node
// {
// public:
//     int data;
//     node *next;

//     node(int val)
//     {
//         data = val;
//         next = NULL;
//     }
// };

// void insertAtTail(node *&head, int val)
// {
//     node *n = new node(val);
//     if (head == NULL)
//     {
//         head = n;
//         return;
//     }
//     node *temp = head;
//     while (temp->next != NULL)
//     {
//         temp = temp->next;
//     }
//     temp->next = n;
// }

// void display(node *head)
// {
//     node *temp = head;
//     while (temp != NULL)
//     {
//         cout << temp->data << "->";
//         temp = temp->next;
//     }
//     cout << "NULL" << endl;
// }

// void insertAtHead(node *&head, int val)
// {
//     node *n = new node(val);
//     n->next = head;
//     head = n;
// }

// bool search(node *head, int key)
// {
//     node *temp = head;
//     while (temp != NULL)
//     {
//         if (temp->data == key)
//         {
//             return true;
//         }
//         temp = temp->next;
//     }
//     return false;
// }

// void deleteAtHead(node *&head)
// {
//     node *toDelete = head;
//     head = head->next;
//     delete toDelete;
// }

// void deletion(node *&head, int val)
// {
//     if (head == NULL)
//     {
//         return;
//     }
//     if (head->next == NULL)
//     {
//         deleteAtHead(head);
//         return;
//     }
//     node *temp = head;
//     while (temp->next->data != val)
//     {
//         temp = temp->next;
//     }
//     node *toDelete = temp->next;
//     temp->next = temp->next->next;

//     delete toDelete;
// }
// int main()
// {
//     node *head = NULL;
//     insertAtTail(head, 1);
//     insertAtTail(head, 1);
//     insertAtTail(head, 1);
//     insertAtTail(head, 1);
//     insertAtTail(head, 1);
//     insertAtTail(head, 1);
//     display(head);
//     insertAtHead(head, 2);
//     display(head);
//     insertAtTail(head, 3);
//     insertAtTail(head, 4);
//     display(head);
//     deletion(head, 3);
//     display(head);
//     // if (search(head, 2) == true)
//     // {
//     //     cout << "Number found" << endl;
//     // }
//     // else
//     // {

//     //     cout << "Number not found" << endl;
//     // }
//     return 0;
// }

// #include <iostream>
// using namespace std;

// class node
// {
// public:
//     int data;
//     node *next;

//     node(int val)
//     {
//         data = val;
//         next = NULL;
//     }
// };

// void insertAtTail(node *&head, int val)
// {
//     node *n = new node(val);

//     if (head == NULL)
//     {
//         head = n;
//         return;
//     }
//     node *temp = head;
//     while (temp->next != NULL)
//     {
//         temp = temp->next;
//     }
//     temp->next = n;
// }

// void insertAtHead(node *&head, int val)
// {
//     node *n = new node(val);
//     n->next = head;
//     head = n;
// }

// void display(node *head)
// {
//     node *temp = head;
//     while (temp != NULL)
//     {
//         cout << temp->data << "->";
//         temp = temp->next;
//     }
//     cout << "NULL" << endl;
// }

// bool search(node *head, int key)
// {
//     node *temp = head;
//     while (temp != NULL)
//     {
//         if (temp->data == key)
//         {
//             return true;
//         }
//         temp = temp->next;
//     }
//     return false;
// }

// void deleteAtHead(node *&head)
// {
//     node *toDelete = head;
//     head = head->next;

//     delete toDelete;
// }

// void deletion(node *&head, int key)
// {
//     if (head == NULL)
//     {
//         return;
//     }

//     if (head->next == NULL)
//     {
//         deleteAtHead(head);
//         return;
//     }

//     node *temp = head;
//     while (temp->next->data != key)
//     {
//         temp = temp->next;
//     }
//     node *toDelete = temp->next;
//     temp->next = temp->next->next;
//     delete toDelete;
// }

// node *reverse(node *&head)
// {
//     node *prevptr = NULL;
//     node *curptr = head;
//     node *nextptr;

//     while (curptr != NULL)
//     {
//         nextptr = curptr->next;
//         curptr->next = prevptr;

//         prevptr = curptr;
//         curptr = nextptr;
//     }
//     return prevptr;
// }

// node *reverseRecursive(node *&head)
// {
//     if (head == NULL || head->next == NULL)
//     {
//         return head;
//     }
//     node *newHead = reverseRecursive(head->next);
//     head->next->next = head;
//     head->next = NULL;
// }

// int main()
// {
//     node *head = NULL;
//     insertAtTail(head, 2);
//     insertAtTail(head, 3);
//     insertAtTail(head, 4);
//     insertAtTail(head, 5);
//     display(head);
//     display(reverse(head));

//     return 0;
// }

// #include <iostream>
// using namespace std;

// #define n 100

// class stack
// {
//     int *arr;
//     int top;

// public:
//     stack()
//     {
//         arr = new int[n];
//         top = -1;
//     }

//     void push(int x)
//     {
//         if (top == n - 1)
//         {
//             cout << "Stack overflow" << endl;
//         }
//         top++;
//         arr[top] = x;
//     }

//     void pop()
//     {
//         if (top == -1)
//         {
//             cout << "No element to pop" << endl;
//         }

//         top--;
//     }

//     int Top()
//     {
//         if (top == -1)
//         {
//             cout << "No elements in stack" << endl;
//         }
//         return arr[top];
//     }

//     bool empty()
//     {
//         if (top == -1)
//         {
//             return true;
//         }
//         return false;
//     }
// };
// int main()
// {
//     stack st;
//     st.push(1);
//     st.push(2);
//     st.push(3);
//     st.pop();
//     st.pop();
//     st.pop();
//     st.pop();
//     st.push(2);
//     st.push(3);
//     st.push(9);
//     cout << st.Top() << endl;
//     cout << st.empty() << endl;

//     return 0;
// }

// #include <iostream>
// #include <stack>
// using namespace std;

// void insertAtBottom(stack<int> &st, int ele)
// {
//     if (st.empty())
//     {
//         st.push(ele);
//     }
//     int topele = st.top();
//     st.pop();
//     insertAtBottom(st, ele);

//     st.push(topele);
// }
// void reverse(stack<int> &st)
// {

//     if (st.empty())
//     {
//         return;
//     }
//     int ele = st.top();
//     st.pop();
//     reverse(st);
//     insertAtBottom(st, ele);
// }
// int main()
// {
//     stack<int> st;
//     st.push(1);
//     st.push(2);
//     st.push(3);
//     st.push(4);
//     st.push(5);
//     reverse(st);

//     // while (!st.empty())
//     // {
//     //     cout << st.top() << " ";
//     //     st.pop();
//     // }
//     // cout << endl;
//     return 0;
// }

// #include <iostream>
// #include <string>
// #include <algorithm>
// using namespace std;

// bool linearSearch(int arr[], int key, int n)
// {
//     for (int i = 0; i < n; i++)
//     {
//         if (arr[i] == key)
//         {

//             return true;
//             ;
//         }
//     }
//     return false;
// }

// bool binarySearch(int arr[], int key, int n)
// {
//     int start = 0;
//     int end = n;
//     int mid;
//     while (start < end)
//     {
//         mid = (start + end) / 2;
//         if (arr[mid] == key)
//         {
//             return true;
//         }
//         else if (arr[mid] < key)
//         {
//             start = mid + 1;
//         }
//         else
//         {
//             end = mid - 1;
//         }
//     }
//     return false;
// }

// void selectionSort(int arr[], int n)
// {
//     for (int i = 0; i < n - 1; i++)
//     {
//         for (int j = i + 1; j < n; j++)
//         {
//             if (arr[i] > arr[j])
//             {
//                 int temp = arr[j];
//                 arr[j] = arr[i];
//                 arr[i] = temp;
//             }
//         }
//     }

//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }
// }

// void bubbleSort(int arr[], int n)
// {
//     int counter = 1;
//     while (counter < n)
//     {

//         for (int i = 0; i < n - counter; i++)
//         {
//             if (arr[i] > arr[i + 1])
//             {
//                 int temp = arr[i + 1];
//                 arr[i + 1] = arr[i];
//                 arr[i] = temp;
//             }
//         }
//         counter++;
//     }
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }
// }

// void insertionSort(int arr[], int n)
// {
//     for (int i = 1; i < n; i++)
//     {
//         int current = arr[i];
//         int j = i - 1;
//         while (arr[j] > current && j >= 0)
//         {
//             arr[j + 1] = arr[j];
//             j--;
//         }
//         arr[j + 1] = current;
//     }
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }
// }

// int main()
// {
//     // int n;
//     // cin >> n;
//     // int arr[n];
//     // for (int i = 0; i < n; i++)
//     // {
//     //     cin >> arr[i];
//     // }

//     // int key;
//     // cin >> key;
//     // if (linearSearch(arr, key, n))
//     // {
//     //     cout << "found" << endl;
//     // }
//     // else
//     // {
//     //     cout << "not found" << endl;
//     // }
//     // if (binarySearch(arr, key, n))
//     // {
//     //     cout << "found" << endl;
//     // }
//     // else
//     // {
//     //     cout << "not found" << endl;
//     // }
//     // selectionSort(arr, n);
//     // bubbleSort(arr, n);
//     // insertionSort(arr, n);
//     // string s;
//     // getline(cin, s);
//     // cout << s << endl;
//     // s.erase(3, 3);
//     // cout << s << endl;
//     // s.insert(2, "lol");
//     // cout << s << endl;
//     // cout << s.substr(2, 5) << endl;
//     return 0;
// }

// #include <iostream>
// using namespace std;

// class node
// {
// public:
//     int data;
//     node *next;

//     node(int val)
//     {
//         data = val;
//         next = NULL;
//     }
// };

// void insertAtTail(node *&head, int val)
// {
//     node *n = new node(val);
//     if (head == NULL)
//     {
//         head = n;
//         return;
//     }
//     node *temp = head;
//     while (temp->next != NULL)
//     {
//         temp = temp->next;
//     }
//     temp->next = n;
// }

// void insertAtHead(node *&head, int val)
// {
//     node *n = new node(val);
//     n->next = head;
//     head = n;
// }

// void display(node *head)
// {
//     node *temp = head;
//     while (temp != NULL)
//     {
//         cout << temp->data << "->";
//         temp = temp->next;
//     }
//     cout << "NULL";
// }

// bool search(node *head, int key)
// {
//     node *temp = head;
//     while (temp != NULL)
//     {
//         if (temp->data == key)
//         {
//             return true;
//         }
//         temp = temp->next;
//     }
//     return false;
// }

// void deleteAtHead(node *&head)
// {
//     node *toDelete = head;
//     head = head->next;

//     delete toDelete;
// }

// void deletion(node *&head, int val)
// {
//     if (head == NULL)
//     {
//         return;
//     }
//     if (head->next == NULL)
//     {
//         deleteAtHead(head);
//         return;
//     }
//     node *temp = head;
//     while (temp->next->data != val)
//     {
//         temp = temp->next;
//     }

//     node *toDelete = temp->next;
//     temp->next = temp->next->next;
//     delete toDelete;
// }

// node *reverse(node *&head)
// {
//     node *prevptr = NULL;
//     node *curptr = head;
//     node *nextptr;
//     while (curptr != NULL)
//     {
//         nextptr = curptr->next;
//         curptr->next = prevptr;
//         prevptr = nextptr;
//     }
//     return prevptr;
// }

// int main()
// {
//     return 0;
// }

// #include <iostream>
// using namespace std;
// #define n 100
// class stack
// {
//     int *arr;
//     int top;

// public:
//     stack()
//     {
//         arr = new int[n];
//         top = -1;
//     }

//     void push(int x)
//     {
//         if (top > n - 1)
//         {
//             cout << "stack overflow";
//         }
//         top++;
//         arr[top] = x;
//     }
//     void pop()
//     {
//         if (top == -1)
//         {
//             cout << "No elements to pop";
//         }
//         top--;
//     }
//     int top()
//     {
//         if (top == -1)
//         {
//             cout << "Stack is empty";
//         }
//         return arr[top];
//     }
//     bool empty()
//     {
//         return top == -1;
//     }
// };

// int main()
// {
//     return 0;
// }

// #include <iostream>
// #include <stack>
// using namespace std;

// void insertAtBottom(stack<int> &st, int ele)
// {
//     if (st.empty())
//     {
//         st.push(ele);
//     }
//     int topele = st.top();
//     st.pop();
//     insertAtBottom(st, topele);

//     st.push(topele);
// }

// void reverse(stack<int> &st)
// {
//     if (st.empty())
//     {
//         return;
//     }
//     int ele = st.top();
//     st.pop();
//     reverse(st);
//     insertAtBottom(st, ele);
// }
// int main()
// {
//     return 0;
// }

// #include <iostream>
// using namespace std;
// #define n 100
// class queue
// {
//     int *arr;
//     int front;
//     int back;

// public:
//     queue()
//     {
//         arr = new int[n];
//         front = -1;
//         back = -1;
//     }

//     void push(int x)
//     {
//         if (back == n - 1)
//         {

//             cout << "Queue overflow";
//         }
//         back++;
//         arr[back] = x;

//         if (front == -1)
//         {
//             front++;
//         }
//     }

//     void pop()
//     {
//         if (front == -1 || front > back)
//         {
//             cout << "No elements in queue";
//             return;
//         }
//         front++;
//     }

//     bool empty()
//     {
//         if (front == -1 || front > back)
//         {
//             return true;
//         }
//         return false;
//     }

//     int peek()
//     {
//         if (front == -1 || front > back)
//         {
//             cout << "No elements to peek";
//             return -1;
//         }
//         return arr[front];
//     }
// };

// int main()
// {
//     queue q;
//     q.push(1);
//     q.push(2);
//     q.push(3);
//     q.push(4);
//     q.push(15);
//     q.push(9);
//     cout << q.peek() << endl;
//     q.pop();
//     q.pop();
//     cout << q.peek() << endl;
//     q.pop();
//     q.pop();
//     q.pop();
//     q.pop();
//     cout << q.peek() << endl;
//     cout << q.empty() << endl;
//     return 0;
// }

// #include <iostream>
// using namespace std;

// class node
// {
// public:
//     int data;
//     node *next;

//     node(int val)
//     {
//         data = val;
//         next = NULL;
//     }
// };

// class queue
// {
//     node *front;
//     node *back;

// public:
//     queue()
//     {
//         front = NULL;
//     }

//     void push(int x)
//     {
//         node *n = new node(x);
//         if (front == NULL)
//         {
//             back = n;
//             front = n;
//             return;
//         }
//         back->next = n;
//         back = n;
//     }

//     void pop()
//     {

//         if (front == NULL)
//         {
//             cout << "queue underflow";
//             return;
//         }

//         node *toDelete = front;
//         front = front->next;
//         delete toDelete;
//     }

//     int peek()
//     {
//         if (front == NULL)
//         {
//             cout << "queue underflow";
//             return -1;
//         }

//         return front->data;
//     }

//     bool empty()
//     {
//         if (front == NULL)
//         {
//             return true;
//         }
//         return false;
//     }
// };

// int main()
// {
//     queue q;
//     q.push(1);
//     q.push(2);
//     q.push(3);
//     q.push(4);
//     q.push(15);
//     q.push(9);
//     cout << q.peek() << endl;
//     q.pop();
//     q.pop();
//     cout << q.peek() << endl;
//     q.pop();
//     q.pop();
//     q.pop();
//     q.pop();
//     cout << q.peek() << endl;
//     cout << q.empty() << endl;
//     return 0;
// }

// #include <iostream>
// #include <stack>
// using namespace std;

// class queue
// {
//     stack<int> s1;
//     stack<int> s2;

// public:
//     void push(int x)
//     {
//         s1.push(x);
//     }

//     int pop()
//     {
//         if (s1.empty() && s2.empty())
//         {
//             return -1;
//         }
//         if (s2.empty())
//         {
//             while (!s1.empty())
//             {
//                 s2.push(s1.top());
//                 s1.pop();
//             }
//         }
//         int topVal = s2.top();
//         s2.pop();
//         return topVal;
//     }

//     bool empty()
//     {
//         if (s1.empty() && s2.empty())
//         {
//             return true;
//         }
//         return false;
//     }
// };

// int main()
// {
//     queue q;
//     q.push(17);
//     q.push(16);
//     q.push(15);
//     q.push(14);
//     q.push(13);
//     q.push(12);
//     cout << q.pop();
//     return 0;
// }

// #include <iostream>
// #include <stack>
// using namespace std;

// class queue
// {
//     stack<int> s1;

// public:
//     void push(int x)
//     {
//         s1.push(x);
//     }

//     int pop()
//     {
//         if (s1.empty())
//         {
//             return -1;
//         }
//         int x = s1.top();
//         s1.pop();
//         if (s1.empty())
//         {
//             return x;
//         }
//         int item = pop();
//         s1.push(x);
//         return item;
//     }

//     bool empty()
//     {
//         if (s1.empty())
//         {
//             return true;
//         }
//         return false;
//     }
// };

// int main()
// {
//     queue q;
//     q.push(17);
//     q.push(16);
//     q.push(15);
//     q.push(14);
//     q.push(13);
//     q.push(12);
//     cout << q.pop();
//     return 0;
// }

// #include <iostream>
// #include <queue>
// using namespace std;

// class Stack
// {
// public:
//     int N;
//     queue<int> q1;
//     queue<int> q2;

//     Stack()
//     {
//         N = 0;
//     }

//     void push(int x)
//     {
//         q2.push(x);
//         N++;
//         while (!q1.empty())
//         {
//             q2.push(q1.front());
//             q1.pop();
//         }
//         queue<int> temp = q1;
//         q1 = q2;
//         q2 = temp;
//     }

//     void pop()
//     {
//         q1.pop();
//         N--;
//     }

//     int top()
//     {
//         return q1.front();
//     }

//     int size()
//     {
//         return N;
//     }
// };

// int main()
// {
//     Stack st;
//     st.push(1);
//     st.push(4);
//     st.push(3);
//     st.push(2);
//     cout << st.top() << endl;
//     cout << st.size() << endl;
//     st.pop();
//     st.pop();
//     st.pop();
//     cout << st.top() << endl;
//     cout << st.size() << endl;
//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main()
// {
//     int n;
//     cin >> n;
//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }

//     int key;
//     cin >> key;
//     bool flag = false;
//     for (int i = 0; i < n; i++)
//     {
//         if (arr[i] == key)
//         {
//             flag = true;
//         }
//     }
//     if (flag == true)
//     {
//         cout << "element found";
//     }
//     else
//     {
//         cout << "element not found";
//     }
// }

// #include <iostream>
// using namespace std;

// int main()
// {
// int n;

// cin >> n;
// int arr[n];
// for (int i = 0; i < n; i++)
// {
//     cin >> arr[i];
// }

//     int key;
//     cin >> key;

//     int start = 0;
//     int end = n;

//     while (start <= end)
//     {
//         int mid = (start + end) / 2;
//         if (arr[mid] == key)
//         {

//             return mid;
//         }
//         else if (arr[mid] > key)
//         {
//             end = mid - 1;
//         }
//         else
//         {
//             start = mid + 1;
//         }
//     }

//     return 0;
// }

#include <iostream>
using namespace std;

// void selectionSort(int arr[], int n)
// {
//     for (int i = 0; i < n - 1; i++)
//     {
//         for (int j = i + 1; j < n; j++)
//         {
//             if (arr[j] < arr[i])
//             {
//                 int temp = arr[j];
//                 arr[j] = arr[i];
//                 arr[i] = temp;
//             }
//         }
//     }
// for (int k = 0; k < n; k++)
// {
//     cout << arr[k] << " ";
// }
// }

// void bubbleSort(int arr[], int n)
// {
//     int counter = 1;
//     while (counter < n)
//     {

//         for (int i = 0; i < n - counter; i++)
//         {
//             if (arr[i] > arr[i + 1])
//             {
//                 int temp = arr[i + 1];
//                 arr[i] = arr[i + 1];
//                 arr[i + 1] = temp;
//             }
//         }
//         counter++;
//     }
// }

// void insertionSort(int arr[], int n)
// {
//     for (int i = 1; i < n; i++)
//     {
//         int current = arr[i];
//         int j = i - 1;
//         while (arr[j] > current && j >= 0)
//         {
//             arr[j + 1] = arr[j];
//             j--;
//         }
//         arr[j + 1] = current;
//     }

//     for (int k = 0; k < n; k++)
//     {
//         cout << arr[k] << " ";
//     }
// }

// int main()
// {
//     int n;

//     cin >> n;
//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//     // selectionSort(arr, n);
//     insertionSort(arr, n);
//     return 0;
// }

// class node
// {
// public:
//     int data;
//     node *next;

//     node(int val)
//     {
//         data = val;
//         next = NULL;
//     }
// };
// void insertAtTail(node *&head, int val)
// {
//     node *n = new node(val);
//     if (head == NULL)
//     {
//         head = n;
//     }
//     node *temp = head;
//     while (temp->next != NULL)
//     {
//         temp = temp->next;
//     }
//     temp->next = n;
// }

// void insertAtHead(node *&head, int val)
// {
//     node *n = head;
//     n->next = head;
//     head = n;
// }

// void display(node *head)
// {
//     node *temp = head;
//     while (temp != NULL)
//     {
//         cout << temp->data << "->";
//         temp = temp->next;
//     }
//     cout << "NULL";
// }

// void deleteAtHead(node *&head)
// {
//     node *toDelete = head;
//     head = head->next;
//     delete toDelete;
// }

// void deletion(node *&head, int key)
// {
//     if (head == NULL)
//     {
//         return;
//     }
//     if (head->next == NULL)
//     {
//         deleteAtHead(head);
//         return;
//     }

//     node *temp = head;
//     while (temp->next->data != key)
//     {
//         temp = temp->next;
//     }
//     node *toDelete = temp->next;
//     temp->next = temp->next->next;
//     delete toDelete;
// }

// bool search(node *head, int val)
// {
//     node *temp = head;
//     while (temp != NULL)
//     {
//         if (temp->data == val)
//         {
//             return true;
//         }
//         temp = temp->next;
//     }
//     return false;
// }

// void reverse(node *&head)
// {
//     node *prevptr = NULL;
//     node *curptr = head;
//     node *nextptr;

//     while (curptr != NULL)
//     {
//         nextptr = curptr->next;
//         curptr->next = prevptr;

//         prevptr = curptr;
//         curptr = nextptr;
//     }
// }
// class stack
// {
//     int *arr;
//     int top;

// public:
//     stack()
//     {
//         arr = new int[n];
//         top = -1;
//     }

//     void push(int x)
//     {
//         if (top == n - 1)
//         {
//             cout << "stack overflow" << endl;
//             return;
//         }
//         top++;
//         arr[top] = x;
//     }

//     void pop()
//     {
//         if (top == -1)
//         {
//             cout << "stack empty" << endl;
//         }
//         top--;
//     }

//     int top()
//     {
//         if (top == -1)
//         {
//             cout << "stack empty" << endl;
//             return -1;
//         }
//         return arr[top];
//     }

//     bool empty()
//     {
//         return top == -1;
//     }
// };
// #include <iostream>
// #include <queue>
// using namespace std;

// class stack
// {
// public:
//     queue<int> q1;
//     queue<int> q2;
//     int N;

//     stack()
//     {
//         N = 0;
//     }

//     void push(int x)
//     {
//         q2.push(x);
//         N++;
//         while (!q1.empty())
//         {
//             q2.push(q1.front());
//             q1.pop();
//         }
//         queue<int> temp = q1;
//         q1 = q2;
//         q2 = temp;
//     }
// };

// #include <iostream>
// using namespace std;
// #define n 100

// class queue
// {
//     int *arr;
//     int front;
//     int back;

// public:
//     queue()
//     {
//         arr = new int[n];
//         front = -1;
//         back = -1;
//     }

//     void push(int x)
//     {
//         if (back == n - 1)
//         {
//             cout << "queue overflow";
//         }
//         back++;
//         arr[back] = x;
//         if (front == -1)
//         {
//             front++;
//         }
//     }

//     void pop()
//     {
//         if (front == -1 || front > back)
//         {
//             cout << "no element";
//         }
//         front++;
//     }
// };
// int main()
// {
//     return 0;
// }

// #include <iostream>
// using namespace std;

// class node
// {
// public:
//     node *next;
//     int data;

//     node(int val)
//     {
//         data = val;
//     }
// };

// class queue
// {
//     node *front;
//     node *back;

// public:
//     queue()
//     {
//         front = NULL;
//     }

//     void push(int x)
//     {
//         node *n = new node(x);
//         if (front == NULL)
//         {
//             back = n;
//             front = n;
//         }
//         back->next = n;
//         back = n;
//     }

//     void pop()
//     {
//         if (front == NULL)
//         {
//             cout << "queue underflow";
//             return;
//         }
//         node *toDelete = front;
//         front = front->next;
//         delete toDelete;
//     }
// };

// #include <iostream>
// using namespace std;

// int main()
// {
// int n;
// int arr[n];

// cin >> n;
// for (int i = 0; i < n; i++)
// {
//     cin >> arr[i];
// }

//     int key;
//     cin >> key;

//     for(int i=0;i<n;i++){
//         if(arr[i]==key}{
//             reti
//         }
//     }
// }

// #include <iostream>
// using namespace std;

// int main()
// {
// int n;
// int arr[n];

// cin >> n;
// for (int i = 0; i < n; i++)
// {
//     cin >> arr[i];
// }

//     int key;
//     cin >> key;

//     int start = 0;
//     int end = n;

//     while (start <= end)
//     {
//         int mid = (start + end) / 2;

//         if (arr[mid] == key)
//         {
//             return 1;
//         }
//         else if (arr[mid] < key)
//         {
//             start = mid + 1;
//         }
//         else
//         {
//             end = mid - 1;
//         }
//     }
// }

// Selection sort

// #include <iostream>
// using namespace std;

// int main()
// {
// int n;
// int arr[n];

// cin >> n;
// for (int i = 0; i < n; i++)
// {
//     cin >> arr[i];
// }

//     for (int i = 0; i < n - 1; i++)
//     {
//         for (int j = i + 1; j < n; j++)
//         {
//             if (arr[i] > arr[j])
//             {
//                 int temp = arr[j];
//                 arr[j] = arr[i];
//                 arr[i] = temp;
//             }
//         }
//     }
//     return 0;
// }

// Bubble sort
// #include <iostream>
// using namespace std;

// int main()
// {
// int n;
// int arr[n];

// cin >> n;
// for (int i = 0; i < n; i++)
// {
//     cin >> arr[i];
// }

//     int counter = 1;

//     while (counter < n)
//     {
//         for (int i = 0; i < n - counter; i++)
//         {
//             if (arr[i] > arr[i + 1])
//             {
//                 int temp = arr[i + 1];
//                 arr[i + 1] = arr[i];
//                 arr[i] = temp;
//             }
//         }
//         counter++;
//     }
// }

// insertion sort

// #include <iostream>
// using namespace std;

// int main()
// {
//     int n;
//     int arr[n];

//     cin >> n;
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }

//     for (int i = 1; i < n; i++)
//     {
//         int current = arr[i];
//         int j = i - 1;

//         while (arr[j] > current && j >= 0)
//         {
//             arr[j + 1] = arr[j];
//             j--;
//         }
//         arr[j+1]=current;
//     }
// }
// #include <iostream>
// using namespace std;

// int main()
// {
//     int n;
//     int arr[n];

//     cin >> n;
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }

//     for(int i=0;i<n-1;i++){
//         for(int j=i+1;j<n;j++){
//             if(arr[i]>arr[j]){
//                 int temp=arr[j];
//                 arr[j]=arr[i];
//                 arr[i]=temp;
//             }
//         }
//     }
//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main()
// {
//     int n;
//     int arr[n];

//     cin >> n;
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }

//     for (int i = 1; i < n; i++)
//     {
//         int current = arr[i];
//         int j = i - 1;

//         while (arr[j] > current && j >= 0)
//         {
//             arr[j + 1] = arr[j];
//             j--;
//         }
//         arr[j + 1] = current;
//     }
//     return 0;
// }

// #include <iostream>
// using namespace std;

// class student
// {
// public:
//     string name;
//     int age;
//     bool gender;

//     // student()
//     // { //this is a default constructor
//     //     cout << "Parameterised constructor";
//     // }

//     student(string s, int a, bool g) //this is a parameterised constructor
//     {
//         // cout << "Parameterised constructor";
//         name = s;
//         age = a;
//         gender = g;
//     }

//     // student(student &a)
//     // { //this is a copy constructor that we made
//     //     cout << "Copy constructor";
//     //     name = a.name;
//     //     age = a.age;
//     //     gender = a.gender;
//     // }

//     bool operator==(student &a)
//     { //This is operator overloading
//         if (name == a.name && age == a.age && gender == a.gender)
//         {
//             return true;
//         }
//         return false;
//     }

//     void printInfo()
//     {
//         cout << "Name:" << name << endl;
//         cout << "Age:" << age << endl;
//         cout << "Gender:" << gender << endl;
//     }
// };

// int main()
// {
//     student a("Shreesh", 23, 0); //constructor is created and the values are passed to it
//     // a.printInfo();
//     student b("Neha", 23, 1); //calls default constructor
//     student c = a;            //copy constructor - values of object a will be copied to c
//     // student c(a);  //copy constructor - values of object a will be copied to c
//     if (b == a)
//     {
//         cout << "equal";
//     }
//     else
//     {
//         cout << "not equal";
//     }
//     return 0;
// }

// #include <iostream>
// using namespace std;

// class node
// {
// public:
//     int data;
//     node *next;

//     node(int val)
//     {
//         data = val;
//         next = NULL;
//     }
// };

// void insertAtTail(node *&head, int val)
// {
//     node *n = new node(val);
//     if (head == NULL)
//     {
//         head = n;
//         return;
//     }

//     node *temp = head;
//     while (temp->next != NULL)
//     {
//         temp = temp->next;
//     }
//     temp->next = n;
// }

// void inserAtHead(node *&head, int val)
// {
//     node *n = new node(val);
//     if (head == NULL)
//     {
//         head = n;
//         return;
//     }

//     n->next = head;
//     head = n;
// }

// void deleteAtHead(node *&head)
// {
//     node *toDelete = head;
//     head = head->next;
//     delete toDelete;
// }

// void deletion(node *&head, int val)
// {
//     if (head == NULL)
//     {
//         return;
//     }
//     if (head->next == NULL)
//     {
//         deleteAtHead(head);
//     }
//     node *temp = head;
//     while (temp->next->data != val)
//     {
//         temp = temp->next;
//     }
//     node *toDelete = temp;
//     temp->next = temp->next->next;
//     delete toDelete;
// }

// void display(node *head)
// {
//     node *temp = head;

//     while (temp != NULL)
//     {
//         cout << temp->data << " ";
//         temp = temp->next;
//     }
// cout << "NULL" << endl;
// }

// void search(node *head, int key)
// {
//     node *temp = head;

//     while (temp != NULL)
//     {
//         if (temp->data != key)
//         {
//             return 0;
//         }
//         else
//         {
//             return 1;
//         }
//         temp = temp->next;
//     }
// }

// node *reverse(node *&head)
// {
//     node *prevptr = NULL;
//     node *curptr = head;
//     node *nextptr;
//     while (curptr != NULL)
//     {
//         nextptr = curptr->next;
//         curptr->next = prevptr;

//         prevptr = curptr;
//         curptr = nextptr;
//     }
//     return prevptr;
// }

// #include <iostream>
// using namespace std;
// #define n 100
// class stack
// {
//     int arr *;
//     int top;

// public:
//     stack()
//     {
//         arr = int[n];
//         top = -1;
//     }

//     void push(int x)
//     {
//         if (top == n - 1)
//         {
//             cout << "stack overflow";
//             return;
//         }
//         else
//         {
//             top++;
//             arr[top] = x;
//         }
//     }

//     void pop()
//     {
//         if (top == -1)
//         {
//             cout << "NO element" << endl;
//         }
//         else
//         {
//             top--;
//         }
//     }

//     bool empty()
//     {
//         return top == -1;
//     }

//     int top()
//     {
//         if (top == -1)
//         {
//             cout << "NO element" << endl;
//             return -1;
//         }
//         return arr[top];
//     }
// };

// #include <iostream>
// #include <queue>
// using namespace std;

// class stack
// {
// public:
//     queue<int> q1;
//     queue<int> q1;
//     int N;

//     stack()
//     {
//         N = 0;
//     }

//     void push(int x)
//     {
//         q2.push(x);
//         N++;

//         while (!q1.empty())
//         {
//             q2.push(q1.front());
//             q1.pop();
//         }

//         queue<int> temp = q2;
//         q2 = q1;
//         q1 = q2;
//     }
//     void pop()
//     {
//         q1.pop();
//         N--;
//     }

//     int top()
//     {
//         return q1.front();
//     }

//     int size()
//     {
//         return N;
//     }
// };

// #include <iostream>
// using namespace std;
// #define n 100

// class queue
// {
//     int *arr;
//     int front;
//     int back;

// public:
//     queue()
//     {
//         arr = int[n];
//         front = -1;
//         back = -1;
//     }

//     void push(int x)
//     {
//         if (back == n - 1)
//         {
//             cout << "overflow";
//         }
//         back++;
//         if (front == -1)
//         {
//             front++;
//         }
//         arr[back] = x;
//     }

//     void pop()
//     {
//         if (front == -1 || front > back)
//         {
//             cout << "No elements";
//         }
//         front++;
//     }

//     bool empty()
//     {
//         if (front == -1 || front > back)
//         {
//             return true;
//         }
//         return false;
//     }

//     int peek()
//     {
//         if (front == -1 || front > back)
//         {
//             cout << "No elements to peek";
//             return -1;
//         }
//         return arr[front];
//     }
// };

// #include <iostream>
// using namespace std;

// class node
// {
// public:
//     int data;
//     node *next;

//     node(int val)
//     {
//         data = val;
//         next = NULL;
//     }
// };

// class queue
// {
// public:
//     node *front;
//     node *back;

//     queue()
//     {
//         front = NULL;
//     }

//     void push(int x)
//     {
//         node *n = new node(x);

//         if (front == NULL)
//         {
//             front = n;
//             back = n;
//             return;
//         }
//         back->next = n;
//         back = n;
//     }
//     void pop()
//     {
//         if (front == NULL)
//         {
//             cout << "No elements";
//         }
//         node *toDelete = front;
//         front = front->next;
//         delete toDelete;
//     }

//     int top()
//     {
//         if (front == NULL)
//         {
//             cout << "No elements";
//             return -1;
//         }
//         return front->data;
//     }
// };

// #include <iostream>
// using namespace std;

// int main()
// {
//     int n;
//     cin >> n;
//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }

//     int key;
//     cin>>key;

//     for(int i=0;i<n;i++){
//         if(arr[i]==key){
//             return 1;
//     }

//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }

//     int key;
//     cin >> key;
//     int start = 0;
//     int end = n;

//     while (start <= end)
//     {
//         int mid = (start + end) / 2;

//         if (arr[mid] == key)
//         {
//             return 1
//         }
//         else if (arr[mid] > key)
//         {
//             end = mid - 1;
//         }
//         else
//         {
//             start = mid + 1;
//         }
//     }
//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main()
// {
//     int n;
//     cin >> n;
//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }

//     for (int i = 0; i < n - 1; i++)
//     {
//         for (j = i+1; j < n; j++)
//         {
//             if (arr[j] > arr[i])
//             {
//                 int temp = arr[j];
//                 arr[j] = arr[i];
//                 arr[i] = temp;
//             }
//         }
//     }
//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main()
// {
//     int n;
//     cin >> n;
//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }

//     for (int i = 0; i < n - 1; i++)
//     {
//         for (int j = i + 1; j < n; j++)
//         {
//             if (arr[j] > arr[i])
//             {
//                 int temp = arr[j];
//                 arr[j] = arr[i];
//                 arr[i] = temp;
//             }
//         }
//     }

// #include <iostream>
// using namespace std;

// int main()
// {
//     int n;
//     cin >> n;
//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }

//     int counter = 1;
//     while (counter < n)
//     {
//         for (int i = 0; i < n - counter; i++)
//         {
//             if (arr[i] > arr[i + 1])
//             {
//                 int temp = arr[i];
//                 arr[i] = arr[i + 1];
//                 arr[i + 1] = temp;
//             }
//         }
//         counter++;
//     }
// }

// #include <iostream>
// using namespace std;

// int main()
// {
//     int n;
//     cin >> n;
//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }

//     int counter = 1;
//     while (counter < n)
//     {
//         for (int i = 0; i < n - counter; i++)
//         {
//             if (arr[i] > arr[i + 1])
//             {
//                 int temp = arr[i];
//                 arr[i] = arr[i + 1];
//                 arr[i + 1] = temp;
//             }
//         }
//         counter++;
//     }
// }

// #include <iostream>
// using namespace std;

// int main()
// {
//     int n;
//     cin >> n;
//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }

//     for (int i = 1; i < n; i++)
//     {
//         int current = arr[i];
//         j = i - 1;
//         while (arr[j] > current && j >= 0)
//         {
//             arr[j + 1] = arr[j];
//             j--;
//         }
//         arr[j + 1] = current;
//     }
// }

// #include <iostream>
// using namespace std;

// class node
// {
// public:
//     int data;
//     node *next;

//     node(int val)
//     {
//         data = val;
//         next = NULL;
//     }
// };

// void insertAtTail(node *&head, int val)
// {
//     node *n = new node(val);
//     if (head == NULL)
//     {
//         head = n;
//         return;
//     }
//     node *temp = head;
//     while (temp->next != NULL)
//     {
//         temp = temp->next;
//     }
//     temp->next = n;
// }

// void insertAtHead(node *&head, int val)
// {
//     node *n = new node(val);
//     if (head == NULL)
//     {
//         head = n;
//         return;
//     }
//     n->next = head;
//     head = n;
// }

// void deleteAtHead(node *&head)
// {
//     node *&toDelete = head;
//     head = head->next;
//     delete toDelete;
// }
// void deletion(node *&head, int val)
// {
//     if (head == NULL)
//     {
//         return;
//     }
//     if (head->next == NULL)
//     {
//     }
//     node *&temp = head;

//     while (temp->next->data != val)
//     {
//         temp = temp->next;
//     }
//     node *&toDelete = temp->next;
//     temp->next = temp->next->next;
//     delete toDelete;
// }

// bool search(node *head, int key)
// {
//     node *temp = head;

//     while (temp != NULL)
//     {
//         if (temp->next == key)
//         {
//             return true;
//         }
//     }
//     return false;
// }

// node *reverse(node *&head)
// {
//     node *prevptr = NULL;
//     node *curptr = head;
//     node *nextptr;

//     while (curptr != NULL)
//     {
//         nextptr = curptr->next;
//         curptr->next = prevptr;

//         prevptr = curptr;
//         curptr = nextptr;
//     }

//     return prevptr;
// }

// #include <iostream>
// using namespace std;
// #define n 100
// class stack
// {
//     int *arr;
//     int top;

// public:
//     stack()
//     {
//         arr = new int[n];
//         top = -1;
//     }

//     void push(int x)
//     {
//         if (top == n - 1)
//         {
//             cout << "stack overflow";
//         }
//         top++;
//         arr[top] = x;
//     }

//     void pop()
//     {
//         if (top == -1)
//         {
//             cout << "No elements";
//         }
//         top--;
//     }

//     int top()
//     {
//         if (top == -1)
//         {
//             cout << "No elements";
//         }
//         return arr[top];
//     }

//     bool empty()
//     {
//         return top == -1;
//     }
// }

// #include <iostream>
// #include <queue>
// using namespace std;

// class stack
// {
//     queue<int> q1;
//     queue<int> q2;
//     int N;

// public:
//     stack()
//     {
//         N = 0;
//     }

//     void push(int x)
//     {
//         q2.push(x);
//         N++;

//         while (!q1.empty())
//         {
//             q2.push(q1.front());
//             q1.pop();
//         }

//         queue<int> temp = q1;
//         q1 = q2;
//         q2 = temp;
//     }
// };

// #include <iostream>
// using namespace std;
// #define n 100

// class queue
// {
//     int *arr;
//     int front;
//     int back;

// public:
//     queue()
//     {
//         arr = new int[n];
//         front = -1;
//         back = -1;
//     }

//     void push(int x)
//     {
//         if (back == n - 1)
//         {
//             cout << "queue overflow";
//         }
//         back++;
//         arr[back] = x;
//         if (front == -1)
//         {
//             front++;
//         }
//     }

//     void pop()
//     {
//         if (front == -1 || front > back)
//         {
//             cout << "No elements";
//         }

//         front++;
//     }

//     int peek()
//     {
//         if (front == -1 || front > back)
//         {
//             cout << "No elements";
//         }
//         return arr[front];
//     }
// };

// class node
// {
// public:
//     int data;
//     node *next;

//     node(int val)
//     {
//         data = val;
//         next = NULL;
//     }
// };

// class queue
// {
// public:
//     node *front;
//     node *back;

//     queue()
//     {
//         front = NULL;
//     }

//     void push(int val)
//     {
//         node *n = new node(val);

//         if (front == NULL)
//         {
//             front = n;
//             back = n;
//             return;
//         }

//         back->next = n;
//         back = n;
//     }
//     void pop()
//     {
//         if (front == NULL)
//         {

//             return;
//         }
//         node *toDelete = front;
//         front = front->next;
//         delete toDelete;
//     }

//     int peek()
//     {
//         if (front == NULL)
//         {

//             return -1;
//         }
//         return front->data;
//     }

//     bool empty()
//     {
//         if (front == NULL)
//         {
//             return true;
//         }
//         else
//         {
//             return false;
//         }
//     }
// };

// #include<iostream>
// using namespace std;

// int main(){
// int n;
// cin>>n;
// int arr[n];

// for(int i=0;i<n;i++){
//     cin>>arr[n];
// }

// int key;
// cin>>key;

//     for(int i=0;i<n;i++){
//         if(arr[i]==key){
//             return 1;
//         }
//         return 0;
//     }

// }

// #include <iostream>
// using namespace std;

// int main()
// {
//     int n;
//     cin >> n;
//     int arr[n];

//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[n];
//     }

//     int key;
//     cin >> key;

//     int start = 0;
//     int end = n;

//     while (start <= end)
//     {
//         int mid = (start + end) / 2;
//         if (arr[mid] == key)
//         {
//             return;
//         }
//         else if (arr[mid] < key)
//         {
//             start = mid + 1;
//         }
//         else
//         {
//             end = mid - 1;
//         }
//     }
//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main()
// {
//     int n;
//     cin >> n;
//     int arr[n];

//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[n];
//     }

//     for (int i = 0; i < n - 1; i++)
//     {
//         for (int j = i + 1; j < n; j++)
//         {
//             if (arr[i] > arr[j])
//             {
//                 int temp = arr[j];
//                 arr[j] = arr[i];
//                 arr[i] = temp;
//             }
//         }
//     }
// }

// #include <iostream>
// using namespace std;

// int main()
// {
//     int n;
//     cin >> n;
//     int arr[n];

//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[n];
//     }

//     int counter = 1;
//     while (counter < n)
//     {
//         for (int i = 0; i < n - counter; i++)
//         {
//             if (arr[i] > arr[i + 1])
//             {
//                 int temp = arr[i + 1];
//                 arr[i + 1] = arr[i];
//                 arr[i] = temp;
//             }
//         }
//         counter++;
//     }
// }

// #include <iostream>
// using namespace std;

// int main()
// {
//     int n;
//     cin >> n;
//     int arr[n];

//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[n];
//     }

//     for (int i = 1; i < n; i++)
//     {
//         int current = arr[i];
//         int j = i - 1;

//         while (arr[j] > current && j >= 0)
//         {
//             arr[j + 1] = arr[j];
//             j--;
//         }
//         arr[j + 1] = current;
//     }
// }

// #include <iostream>
// using namespace std;

// class node
// {
// public:
//     int data;
//     node *next;

//     node(int val)
//     {
//         data = val;
//         next = NULL;
//     }
// };

// void insertAtTail(node *&head, int val)
// {
//     node *n = new node(val);

//     if (head == NULL)
//     {
//         head = n;
//         return;
//     }
//     node *temp = head;
//     while (temp->next != NULL)
//     {
//         temp = temp->next;
//     }

//     temp->next = n;
// }

// void insertAtHead(node *&head, int val)
// {
//     node *n = new node(val);
//     if (head == NULL)
//     {
//         head = n;
//         return;
//     }
//     n->next = head;
//     head = n;
// }

// void deleteAtHead(node *&head)
// {
//     node *toDelete = head;
//     head = head->next;
//     delete toDelete;
// }

// void deletion(node *&head, int val)
// {
//     if (head == NULL)
//     {
//         return;
//     }

//     if (head->next == NULL)
//     {
//         deleteAtHead(head);
//         return;
//     }

//     node *temp = head;
//     while (temp->next->data != val)
//     {
//         temp = temp->next;
//     }
//     node *toDelete = temp;
//     temp->next = temp->next->next;
//     delete toDelete;
// }

// bool search(node *head, int key)
// {
//     node *temp = head;
//     bool flag;
//     while (temp != NULL)
//     {
//         if (temp->data == key)
//         {
//             return true;
//         }

//         temp = temp->next;
//     }
//     return false;
// }

// void display(node *head)
// {
//     node *temp = head;

//     while (temp != NULL)
//     {
//         cout << temp->data << " ";
//         temp = temp->next;
//     }
//     cout << "NULL";
// }

// node *reverse(node *&head)
// {
//     node *prevptr = NULL;
//     node *curptr = head;
//     node *nextptr;

//     while (curptr != NULL)
//     {
//         nextptr = curptr->next;
//         curptr->next = prevptr;

//         prevptr = curptr;
//         curptr = nextptr;
//     }
//     return prevptr;
// }

// #include <iostream>
// using namespace std;
// #define n 100

// class stack
// {
//     int *arr;
//     int top;

// public:
//     stack()
//     {
//         arr = new int[n];
//         top = -1;
//     }

//     void push(int x)
//     {
//         if (top == n - 1)
//         {
//             cout << "Full" << endl;
//             return;
//         }
//         top++;
//         arr[top] = x;
//     }

//     void pop()
//     {
//         if (top == -1)
//         {
//             cout << "No element";
//         }

//         top--;
//     }

//     int top()
//     {
//         if (top == -1)
//         {
//             cout << "No element";
//         }
//         return arr[top];
//     }

//     bool empty()
//     {
//         return top == -1;
//     }
// }

// #include <iostream>
// #include <queue>
// using namespace std;

// class stack
// {
//     queue<int> q1;
//     queue<int> q2;
//     int N;

// public:
//     stack()
//     {
//         N = 0;
//     }

//     void push(int x)
//     {
//         q2.push(x);
//         N++;
//         while (!q1.empty())
//         {
//             q2.push(q1.front());
//             q1.pop();
//         }
//         queue<int> temp = q1;
//         q1 = q2;
//         q2 = temp;
//     }
// };

// Linked list
// #include <iostream>
// using namespace std;

// class node
// {
// public:
//     int data;
//     node *next;
//     node *prev;

//     node(int val)
//     {
//         data = val;
//         next = NULL;
//         prev = NULL;
//     }
// };

// void insertAtTail(node *&head, int val)
// {
//     node *n = new node(val);

//     if (head == NULL)
//     {
//         head = n;
//         return;
//     }
//     node *temp = head;
//     while (temp->next != NULL)
//     {
//         temp = temp->next;
//     }
//     temp->next = n;
//     n->prev = temp;
// }

// void insertAtHead(node *&head)
// {
//     node *n = new node(val);

//     if (head == NULL)
//     {
//         head = n;
//         return;
//     }
//     n->next = head;
//     head->prev = n;
//     head = n;
// }

// void deletion(node *&head, int pos)
// {

//     node *temp = head;
// int count=1;
//     while (temp != NULL && count != pos)
//     {
//         temp = temp->next;
//         count++;
//     }

//     temp->prev->next = temp->next;
//     if (temp->next != NULL)
//     {

//         temp->next->prev = temp->prev;
//     }
//     node *toDelete = temp;
// }

// #include <iostream>
// #define n 100;
// using namespace std;

// class stack
// {
//     int *arr;
//     int front;
//     int back;

// public:
//     stack()
//     {
//         arr = new int[n];
//         front = -1;
//         back = -1;
//     }

//     void push(int x)
//     {
//         if (back == n - 1)
//         {
//             cout << "full";
//             return;
//         }
//         back++;
//         arr[back] = x;
//         if (front = -1)
//         {
//             front++;
//         }
//     }

//     void pop()
//     {
//         if (front == -1 || front > back)
//         {
//             cout << "No elements";
//         }
//         top++;
//     }

//     int top()
//     {
//         if (front == -1 || front > back)
//         {
//             cout << "No elements";
//         }
//         return arr[front];
//     }

//     bool empty(){
//          if (front == -1 || front > back)
//         {
//             return true;
//         }
//         return false;
//     }
// };

// class node
// {
// public:
//     int data;
//     node *next;

//     node(int val)
//     {
//         data = val;
//         next = NULL;
//     }
// };

// class queue
// {
//     node *front;
//     node *back;

// public:
//     queue()
//     {
//         front = NULL;
//     }

//     void push(int x)
//     {
//         node *n = new node(x);

//         if (front == NULL)
//         {
//             front = n;
//             back = n;
//         }

//         back->next = n;
//         back = n;
//     }

//     void pop()
//     {
//         if (front == NULL)
//         {
//             cout << "No elements";
//         }
//         node *toDelete = front;
//         front = front->next;
//         delete toDelete;
//     }

//     int top()
//     {
//         if (front == NULL)
//         {
//             cout << "No elements";
//         }
//         return front->data;
//     }
// };

// #include <iostream>
// using namespace std;

// int main()
// {
//     int n;
//     cin >> n;

//     int arr[n];

//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }

//     int key;
//     cin >> key;

//     for (int i = 0; i < n; i++)
//     {
//         if (arr[i] == key)
//         {
//             return true;
//         }
//     }
//     return false;
// }

// #include <iostream>
// using namespace std;

// int main()
// {
//     int n;
//     cin >> n;

//     int arr[n];

//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }

//     int key;
//     cin >> key;

//     int start = 0;
//     int end = n;

//     while (start <= end)
//     {
//         int mid = (start + end) / 2;

//         if (arr[mid] == key)
//         {
//             return true;
//         }
//         else if (arr[mid] < key)
//         {
//             end = mid - 1;
//         }
//         else
//         {
//             start = mid + 1;
//         }
//     }
// }

// #include <iostream>
// using namespace std;

// int main()
// {
//     int n;
//     cin >> n;

//     int arr[n];

//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }

//     for (int i = 0; i < n - 1; i++)
//     {
//         for (int j = i + 1; i < n; j++)
//         {
//             if (arr[i] > arr[j])
//             {
//                 int temp = arr[i];
//                 arr[i] = arr[j];
//                 arr[j] = temp;
//             }
//         }
//     }
// }

// #include <iostream>
// using namespace std;

// int main()
// {
//     int n;
//     cin >> n;

//     int arr[n];

//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }

//     int counter = 1;
//     while (counter < n)
//     {
//         for (int i = 0; i < n - 1; i++)
//         {
//             if (arr[i] > arr[i + 1])
//             {
//                 int temp = arr[i];
//                 arr[i] = arr[i + 1];
//                 arr[i + 1] = temp;
//             }
//         }
//         counter++;
//     }
// }

// #include <iostream>
// using namespace std;

// int main()
// {
//     int n;
//     cin >> n;

//     int arr[n];

//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }

//     for (int i = 1; i < n; i++)
//     {
//         int current = arr[i];
//         j = i - 1;
//         while (arr[j] > current && j >= 0)
//         {
//             arr[j + 1] = arr[j];
//             j--;
//         }
//         arr[j + 1] = current;
//     }

// #include <iostream>
// using namespace std;

// class node
// {
// public:
//     int data;
//     node *next;

//     node(int val)
//     {
//         data = val;
//         next = NULL;
//     }
// };

// void insertAtTail(node *&head, int val)
// {
//     node *n = new node(val);

//     if (head == NULL)
//     {
//         head = n;
//         return;
//     }
//     node *temp = head;

//     while (temp->next != NULL)
//     {
//         temp = temp->next;
//     }
//     temp->next = n;
// }

// void insertAtHead(node *&head, int val)
// {
//     node *n = new node(val);
//     if (head == NULL)
//     {
//         head = n;
//         return;
//     }
//     n->next = head;
//     head = n;
// }

// void deletion(node *&head, int val)
// {
//     if (head == NULL)
//     {
//         return;
//     }
//     if (head->next == NULL)
//     {
//         deleteAtHead(head);
//     }
//     node *temp = head;

//     while (temp->next->data != val)
//     {
//         temp = temp->next;
//     }

//     node *toDelete = temp->next;
//     temp->next = temp->next->next;

//     delete toDelete;
// }

// void deleteAtHead(node *&head)
// {
//     node *toDelete = head;
//     head = head->next;
//     delete toDelete;
// }

// void search(node *head, int val)
// {
//     node *temp = head;
//     while (temp != NULL)
//     {
//         if (temp->data == val)
//         {
//             return true;
//         }
//         temp = temp->next;
//     }
// }

// void display(node *head)
// {
//     node *temp = head;
//     while (temp != NULL)
//     {
//         cout << temp->data << " ";
//         temp = temp->next;
//     }
//     cout << "NULL" << endl;
// }

// node *reverse(node *&head)
// {
//     node *prevptr = NULL;
//     node *curptr = head;
//     node *nextptr;
//     while (curptr != NULL)
//     {
//         nextptr = curptr->next;
//         curptr->next = prevptr;

//         prevptr = curptr;
//         curptr = nextptr;
//     }
//     return prevptr;
// }

// // doubly linked list
// class node
// {
// public:
//     int data;
//     node *next;
//     node *prev;

//     node(int val)
//     {
//         data = val;
//         prev = NULL;
//         next = NULL;
//     }
// };

// void insertAtTail(node *&head, int val)
// {
//     node *n = new node(val);
//     if (head == NULL)
//     {
//         head = n;
//     }
//     node *temp = head;

//     while (temp->next != NULL)
//     {
//         temp = temp->next;
//     }
//     temp->next = n;
//     n->prev = temp;
// }

// void insertAtHead(node *&head, int val)
// {
//     node *n = new node(val);
//     if (head == NULL)
//     {
//         head = n;
//     }
//     n->next = head;
//     head->prev = n;
//     head = n;
// }

// void deletion(node *&head, int pos)
// {

//     if (head == NULL)
//     {
//         return;
//     }
//     int count = 1;
//     node *temp = head;
//     while (temp != NULL && count != pos)
//     {
//         temp = temp->next;
//         count++;
//     }

//     temp->prev->next = temp->next;
//     if (temp->next != NULL)
//     {

//         temp->next->prev = temp->prev;
//     }

//     delete temp;
// }

// #include <iostream>
// using namespace std;
// #define n 100

// class stack
// {
//     int *arr;
//     int top;

// public:
//     stack()
//     {
//         arr = new int[n];
//         top = -1;
//     }

//     void push(int x)
//     {
//         if (top == n - 1)
//         {
//             cout << "stack overflow";
//             return;
//         }

//         top++;
//         arr[top] = x;
//     }

//     void pop()
//     {
//         if (top == -1)
//         {
//             cout << "no element";
//             return;
//         }
//         top--;
//     }

//     int top()
//     {
//         if (top == -1)
//         {
//             cout << "no element";
//             return
//         }
//         return arr[top];
//     }

//     bool empty(){
//         return top==-1;
//     }
// };

// #include <iostream>
// #include <queue>
// using namespace std;

// class stack
// {
//     queue<int> q1;
//     queue<int> q2;
//     int N;

// public:
//     stack()
//     {
//         N = 0;
//     }

//     void push(int x)
//     {
//         q2.push(x);
//         N++;

//         while (!q1.empty())
//         {
//             q2.push(q1.top());
//             q1.pop();
//         }

//         queue<int> temp = q2;
//         q2 = q1;
//         q1 = temp;
//     }

//     void pop()
//     {
//         q1.pop();
//         N--;
//     }

//     int top()
//     {
//         q1.front();
//     }
// }

// #include <iostream>
// using namespace std;
// #define n 100

// class queue
// {
//     int *arr;
//     int front;
//     int back;

// public:
//     queue()
//     {
//         arr = new int[n];
//         front = -1;
//         back = -1;
//     }

//     void push(int x)
//     {
//         if (back > n - 1)
//         {
//             cout << "overflow";
//             return;
//         }
//         back++;
//         arr[back] = x;
//         if (front == -1)
//         {
//             front++;
//         }
//     }

//     void pop()
//     {
//         if (front == -1 || front > back)
//         {
//             cout << "No elements";
//             return;
//         }
//         front++;
//     }

//     int top()
//     {
//         if (front == -1)
//         {
//             cout << "No elements";
//             return;
//         }
//         return arr[front];
//     }

//     bool empty()
//     {
//         if (front == -1 || front > back)
//         {
//             return true;
//         }
//         return false;
//     }
// };

// class node
// {
// public:
//     int data;
//     node *next;

//     node(int val)
//     {
//         data = val;
//         next = NULL;
//     }
// };

// class queue
// {
//     node *front;
//     node *back;

// public:
//     queue()
//     {
//         front = NULL;
//     }

//     void push(int val)
//     {
//         node *n = new node(val);
//         if (front == NULL)
//         {
//             front = n;
//             back = n;
//         }
//         back->next = n;
//         back = n;
//     }

//     void pop()
//     {
//         if (front == NULL)
//         {
//             return;
//         }

//         node *toDelete = front;
//         front = front->next;
//         delete toDelete;
//     }

//     int top()
//     {
//         if (front == NULL)
//         {
//             return -1;
//         }

//         return front->data;
//     }

//     bool empty()
//     {
//         if (front == NULL)
//         {
//             return true;
//         }
//         return false;
//     }
// };

// #include<iostream>

// using namespace std;

// int main(){
//     int n;
//     cin>>n;

//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[n];
//     }

//     int key;
//     cin>>key;
//     bool flag=0;
//     for(int i=0;i<n;i++){
//         if(arr[i]==key){
//             flag=1;
//         }
//     }
// }

// #include <iostream>
// using namespace std;

// int main()
// {
// int n;
// cin >> n;

// int arr[n];
// for (int i = 0; i < n; i++)
// {
//     cin >> arr[n];
// }

// int key;
// cin >> key;

//     int start = 0;
//     int end = n;
//     while (start < end)
//     {
//         int mid = (start + end) / 2;

//         if (arr[mid] == key)
//         {
//             return 0;
//         }
//         else if (arr[mid] > key)
//         {
//             end=mid-1;
//         }
//         else{
//             start=mid+1;
//         }
//     }
// }

// #include <iostream>
// using namespace std;

// int main()
// {
//     int n;
//     cin >> n;

//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[n];
//     }

//     for (int i = 0; i < n - 1; i++)
//     {
//         for (int j = i + 1; j < n; j++)
//         {
//             if (arr[i] > arr[j])
//             {
//                 int temp = arr[j];
//                 arr[j] = arr[i];
//                 arr[i] = temp;
//             }
//         }
//     }

// #include <iostream>
// using namespace std;

// int main()
// {
//     int n;
//     cin >> n;

//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[n];
//     }

//     int counter = 1;
//     while (counter < n)
//     {
//         for (int i = 0; i < n - counter; i++)
//         {
//             if (arr[i] > arr[i + 1])
//             {
//                 int temp = arr[i + 1];
//                 arr[i + 1] = arr[i];
//                 arr[i] = temp;
//             }
//         }
//         counter++;
//     }
// }

// #include <iostream>
// using namespace std;

// int main()
// {
//     int n;
//     cin >> n;

//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[n];
//     }

//     for (int i = 1; i < n; i++)
//     {
//         int curr = arr[i];
//         int j = i - 1;
//         while (arr[j] > curr && j >= 0)
//         {
//             arr[j + 1] = arr[j];
//             j--;
//         }
//         arr[j + 1] = curr;
//     }
// }

// #include <iostream>
// using namespace std;

// class node
// {
// public:
//     int data;
//     node *next;

//     node(int val)
//     {
//         data = val;
//         next = NULL;
//     }
// };

// void insertAtTail(node *&head, int val)
// {
//     node *n = new node(val);
//     if (head == NULL)
//     {
//         head = n;
//     }
//     node *temp = head;
//     while (temp->next != NULL)
//     {
//         temp = temp->next;
//     }
//     temp->next = n;
// }

// void insertAtHead(node *&head, int val)
// {
//     node *n = new node(val);
//     n->next = head;
//     head = n;
// }

// void deleteAtHead(node *&head)
// {
//     node *toDelete = head;
//     head = head->next;
//     delete toDelete;
// }

// void deletion(node *&head, int val)
// {
//     if (head == NULL)
//     {
//         return;
//     }

//     if (head->next == NULL)
//     {
//         deleteAtHead(head);
//     }
//     node *temp = head;
//     while (temp->next->data != val)
//     {
//         temp = temp->next;
//     }
//     node *toDelete = temp->next;
//     temp->next = temp->next->next;
//     delete toDelete;
// }

// bool search(node *head, int val)
// {
//     node *temp = head;

//     while (temp != NULL)
//     {
//         if (temp->data == val)
//         {
//             return true;
//         }
//         temp = temp->next;
//     }
//     return false;
// }

// void display(node *head)
// {
//     node *temp = head;
//     while (temp != NULL)
//     {
//         cout << temp->data << " ";
//         temp = temp->next;
//     }
//     cout << "NULL" << endl;
// }

// node *reverse(node *&head)
// {
//     node *prevptr = NULL;
//     node *curptr = head;
//     node *nextptr;

//     while (curptr != NULL)
//     {
//         nextptr = curptr->next;
//         curptr->next = prevptr;

//         prevptr = curptr;
//         curptr = nextptr;
//     }
//     return prevptr;
// }

// #include <iostream>
// using namespace std;

// class node
// {
// public:
//     int data;
//     node *prev;
//     node *next;

//     node(int val)
//     {
//         data = val;
//         prev = NULL;
//         next = NULL;
//     }
// };

// void insertAtTail(node *&head, int val)
// {
//     node *n = new node(val);

//     if (head == NULL)
//     {
//         head = n;
//     }
//     node *temp = head;
//     while (temp->next != NULL)
//     {
//         temp = temp->next;
//     }

//     temp->next = n;
//     n->prev = temp;
// }

// void insertAtHead(node *&head, int val)
// {
//     node *n = new node(val);
//     n->next = head;
//     head->prev = n;
//     head = n;
// }

// void deletion(node *&head, int pos)
// {
//     int count = 1;
//     if (head == NULL)
//     {
//         return;
//     }
//     node *temp = head;
//     while (temp != NULL && count != pos)
//     {
//         temp = temp->next;
//         count++;
//     }

//     temp->prev->next = temp->next;
//     if (temp->next != NULL)
//     {
//         temp->next->prev = temp->prev;
//     }
//     delete temp;
// }

// stack using array
// #include <iostream>
// using namespace std;
// #define n 100

// class stack
// {
//     int *arr;
//     int top;

// public:
//     stack()
//     {
//         arr = new int[n];
//         top = -1;
//     }

//     void push(int x)
//     {
//         if (top == n - 1)
//         {
//             cout << "overflow";
//         }
//         top++;
//         arr[top] = x;
//     }

//     void pop()
//     {
//         if (top == -1)
//         {
//             cout << "no elements";
//         }
//         top--;
//     }

//     int top()
//     {
//         if (top == -1)
//         {
//             cout << "no elements";
//         }
//         return arr[top];
//     }

//     bool empty()
//     {
//         return top == -1;
//     }
// };

// stack using queue
// #include <iostream>
// using namespace std;
// #include <queue>

// class stack
// {
//     queue<int> q1;
//     queue<int> q2;
//     int N;

// public:
//     stack()
//     {
//         N = 0;
//     }

//     void push(int x)
//     {
//         q2.push(x);
//         N++;
//         while (!q1.empty())
//         {
//             q2.push(q1.front());
//             q1.pop();
//         }
//         queue<int> temp = q2;
//         q2 = q1;
//         q1 = q2;
//     }

//     void pop()
//     {
//         q1.pop();
//     }

//     int top()
//     {
//         q1.front();
//     }
// };

//  Queue using array
// #include <iostream>
// using namespace std;
// #define n 100

// class queue
// {
//     int *arr;
//     int front;
//     int back;

// public:
//     queue()
//     {
//         arr = new int[n];
//         front = -1;
//         back = -1;
//     }

//     void push(int x)
//     {
//         if (back == n - 1)
//         {
//             cout << "overflow";
//         }
//         back++;
//         arr[back] = x;
//         if (front == -1)
//         {
//             front++;
//         }
//     }

//     void pop()
//     {
//         if (front == -1 || front > back)
//         {
//             cout << "No elements";
//         }
//         front++;
//     }

//     int top()
//     {
//         if (front == -1)
//         {
//             cout << "No elements";
//         }
//         return arr[front];
//     }

//     bool empty()
//     {
//         if (front == -1 || front > back)
//         {
//             return true;
//         }
//         return false;
//     }
// };

// #include <iostream>
// using namespace std;

// class node
// {
// public:
//     int data;
//     node *next;

//     node(int val)
//     {
//         data = val;
//         next = NULL;
//     }
// };

// class queue
// {
//     node *front;
//     node *back;

// public:
//     queue()
//     {
//         front = NULL;
//     }

//     void push(int x)
//     {
//         node *n = new node(x);
//         if (front == NULL)
//         {
//             front = n;
//             back = n;
//         }
//         back->next = n;
//         back = n;
//     }

//     void pop()
//     {
//         if (front == NULL)
//         {
//             return;
//         }
//         node *toDelete = front;
//         front = front->next;
//         delete toDelete;
//     }

//     bool empty()
//     {
//         if (front == NULL)
//         {
//             return true;
//         }
//         return false;
//     }

//     int top()
//     {
//         if (front == NULL)
//         {
//             return -1;
//         }
//         return front->data;
//     }
// };
// #include <iostream>
// using namespace std;
// class b
// {

// public:
//     b()
//     {
//         cout << "base";
//     }
// };

// class d : public b
// {
// public:
//     d()
//     {
//         cout << "derived";
//     }
// };

// int main()
// {
//     d obj;
//     cout << sizeof(d);
//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main()
// {
//     int n;
//     cin >> n;

//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[n];
//     }

//     int key;
//     cin >> key;

//     for(int i=0;i<n;i++){
//         if(arr[i]==key){
//             return true;
//         }
//     }
//     return false;
// }

// #include <iostream>
// using namespace std;

// int main()
// {
//     int n;
//     cin >> n;

//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[n];
//     }

//     int key;
//     cin >> key;

//     int start = 0;
//     int end = 0;
//     while (start <= end)
//     {
//         int mid = (start + end) / 2;
//         if (arr[mid] == key)
//         {
//             return true;
//         }
//         else if (arr[mid] < key)
//         {
//             end = mid - 1;
//         }
//         else
//         {
//             start = mid + 1;
//         }
//     }
// }

// #include <iostream>
// using namespace std;

// int main()
// {
//     int n;
//     cin >> n;

//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[n];
//     }

//     for(int i=0;i<n-1;i++){
//         for(int j=i+1;j<n;j++){
//             if(arr[i]>arr[j]){
//                 int temp=arr[i];
//                 arr[i]=arr[j];
//                 arr[j]=temp;
//             }
//         }
//     }
// }

// #include <iostream>
// using namespace std;

// int main()
// {
//     int n;
//     cin >> n;

//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[n];
//     }

//     int counter = 1;
//     while (counter < n)
//     {
//         for (int i = 0; i < n - counter; i++)
//         {
//             if (arr[i] > arr[i + 1])
//             {
//                 int temp = arr[i];
//                 arr[i] = arr[i + 1];
//                 arr[i + 1] = temp;
//             }
//         }
//         counter++;
//     }
// }

// #include <iostream>
// using namespace std;

// int main()
// {
//     int n;
//     cin >> n;

//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[n];
//     }

//     for (int i = 1; i < n; i++)
//     {
//         int cur = arr[i];
//         int j = i - 1;

//         while (arr[j] > cur && j >= 0)
//         {
//             arr[j + 1] = arr[j];
//             j--;
//         }
//         arr[j + 1] = cur;
//     }
// }

// #include <iostream>
// using namespace std;
// class node
// {
// public:
//     int data;
//     node *next;
//     node *prev;

//     node(int val)
//     {
//         data = val;
//         next = NULL;
//         prev = NULL;
//     }
// };

// void insertAtTail(node *&head, int val)
// {
//     node *n = new node(val);
//     if (head == NULL)
//     {
//         head = n;
//         return;
//     }
//     node *temp = head;
//     while (temp->next != NULL)
//     {
//         temp = temp->next;
//     }
//     temp->next = n;
//     n->prev = temp;
// }

// void insertAtHead(node *&head, int val)
// {
//     node *n = new node(val);
//     if (head == NULL)
//     {
//         head = n;
//         return;
//     }
//     n->next = head;
//     head->prev = n;
//     head = n;
// }

// void deletion(node *&head, int pos)
// {
//     if (head == NULL)
//     {
//         return;
//     }
//     int count = 1;
//     node *temp = head;

//     while (temp != NULL && count != pos)
//     {
//         temp = temp->next;
//         count++;
//     }
//     temp->prev->next = temp->next;
//     if (temp->next != NULL)
//     {

//         temp->next->prev = temp->prev;
//     }
//     delete temp;
// }

// #include <iostream>
// using namespace std;
// #define n 100

// class stack
// {
//     int *arr;
//     int top;

// public:
//     stack()
//     {
//         arr = new int[n];
//         top = -1;
//     }

//     void push(int x)
//     {
//         if (top == n - 1)
//         {
//             cout << "overflow";
//             return;
//         }
//         top++;
//         arr[top] = x;
//     }

//     void pop()
//     {
//         if (top == -1)
//         {
//             cout << "no element";
//         }
//         top--;
//     }
//     int top(){
//         if (top == -1)
//         {
//             cout << "no element";
//             return -1;
//         }
//         return arr[top];
//     }

//     bool empty(){
//         return top==-1;
//     }
// };

// #include <iostream>
// using namespace std;
// #include <queue>

// class stack
// {
//     queue<int> q1;
//     queue<int> q2;
//     int N;

// public:
//     stack()
//     {
//         N = 0;
//     }

//     void push(int x)
//     {
//         q2.push(x);
//         N++;
//         while (!q1.empty())
//         {
//             q2.push(q1.front());
//             q1.pop();
//         }
//         queue<int> temp = q2;
//         q2 = q1;
//         q1 = temp;
//     }
// };

// #include <iostream>
// using namespace std;
// #define n 100
// class queue
// {
//     int *arr;
//     int front;
//     int back;

// public:
//     queue()
//     {
//         arr = new int[n];
//         front = -1;
//         back = -1;
//     }

//     void push(int x)
//     {
//         if (back == n - 1)
//         {
//             cout << "overflow";
//             return;
//         }
//         back++;
//         arr[back] = x;
//         if (front == -1)
//         {
//             front++;
//         }
//     }

//     void pop()
//     {
//         if (front == -1 || front > back)
//         {
//             cout << "No elements";
//             return;
//         }
//         front++;
//     }

//     int top()
//     {
//         if (front == -1)
//         {
//             cout << "No elements";
//             return;
//         }
//         return arr[front];
//     }

// };

// #include <iostream>
// using namespace std;
// class node
// {
// public:
//     int data;
//     node *next;

//     node(int val)
//     {
//         data = val;
//         next = NULL;
//     }
// };

// class queue
// {
//     node *front;
//     node *back;

// public:
//     queue()
//     {
//         front = NULL;
//         back = NULL;
//     }

//     void push(int x)
//     {
//         node *n = new node(x);
//         if (front == NULL)
//         {
//             front = n;
//             back = n;
//         }
//         back->next = n;
//         back = n;
//     }

//     void pop()
//     {
//         if (front == NULL)
//         {
//             return;
//         }
//         node *toDelete = front;
//         front = front->next;
//         delete toDelete;
//     }
// };

// #include <iostream>
// using namespace std;

// class base
// {
// public:
//     void show()
//     {
//         cout << "base" << endl;
//     }
// };

// class derived : public base
// {
// public:
//     void show()
//     {
//         cout << "derived" << endl;
//     }
// };

// int main()
// {
//     base *bptr;
//     derived d;
//     bptr = &d;

//     bptr->show();
//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main()
// {
//     int n;
//     cin >> n;

//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }

//     int key;
//     cin >> key;

//     for (int i = 0; i < n; i++)
//     {
//         if (arr[i] == key)
//         {
//             return true;
//         }
//         return false;
//     }
// }

// #include <iostream>
// using namespace std;

// int main()
// {
//     int n;
//     cin >> n;

//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }

//     int key;
//     cin >> key;

//     int start = 0;
//     int end = n;

//     while (start <= end)
//     {
//         int mid = (start + end) / 2;
//         if (arr[mid] == key)
//         {
//             return 1;
//         }
//         else if (arr[mid] > key)
//         {
//             end = mid - 1;
//         }
//         else
//         {
//             start = mid + 1;
//         }
//     }
// }

// #include <iostream>
// using namespace std;

// int main()
// {
//     int n;
//     cin >> n;

//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }

//     for (int i = 0; i < n - 1; i++)
//     {
//         for (int j = i + 1; j < n; j++)
//         {
//             if (arr[i] > arr[j])
//             {
//                 int temp = arr[j];
//                 arr[j] = arr[i];
//                 arr[i] = temp;
//             }
//         }
//     }
// }

// #include <iostream>
// using namespace std;

// int main()
// {
//     int n;
//     cin >> n;

//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }

//     int counter = 1;
//     while (counter < n)
//     {
//         for (int i = 0; i < n - 1; i++)
//         {
//             if (arr[i] > arr[i + 1])
//             {
//                 int temp = arr[i];
//                 arr[i] = arr[i + 1];
//                 arr[i + 1] = temp;
//             }
//         }
//         counter++;
//     }
// }

// #include <iostream>
// using namespace std;

// int main()
// {
//     int n;
//     cin >> n;

//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }

//     for (int i = 1; i < n; i++)
//     {
//         int cur = arr[i];
//         int j = i - 1;
//         while (arr[j] > cur && j >= 0)
//         {
//             arr[j + 1] = arr[j];
//             j--;
//         }
//         arr[j + 1] = cur;
//     }
// }

// #include <iostream>
// using namespace std;

// class node
// {
// public:
//     int data;
//     node *next;

//     node(int val)
//     {
//         data = val;
//         next = NULL;
//     }
// };

// void insertAtTail(node *&head, int val)
// {
//     node *n = new node(val);
//     if (head == NULL)
//     {
//         head = n;
//         return;
//     }
//     node *temp = head;
//     while (temp->next != NULL)
//     {
//         temp = temp->next;
//     }
//     temp->next = n;
// }

// void insertAtHead(node *&head, int val)
// {
//     node *n = new node(val);
//     if (head == NULL)
//     {
//         head = n;
//         return;
//     }
//     n->next = head;
//     head = n;
// }

// void deleteAtHead(node *&head, int val)
// {
//     node *toDelete = head;
//     head = head->next;
//     delete toDelete;
// }
// void deletion(node *&head, int val)
// {
//     if (head == NULL)
//     {
//         return;
//     }
//     if (head->next == NULL)
//     {
//     }
//     node *temp = head;
//     while (temp->next->data != val)
//     {
//         temp = temp->next;
//     }
//     node *toDelete = temp->next;
//     temp->next = temp->next->next;
//     delete toDelete;
// }

// bool search(node *head, int val)
// {
//     node *temp = head;
//     while (temp != NULL)
//     {
//         if (temp->data == val)
//         {
//             return true;
//         }
//         temp = temp->next;
//     }
//     return false;
// }

// void display(node *&head)
// {
//     node *temp = head;
//     while (temp != NULL)
//     {
//         cout << temp->data << " ";
//         temp = temp->next;
//     }
//     cout << "NULL" << endl;
// }

// node *reverse(node *&head)
// {
//     node *prevptr = NULL;
//     node *curptr = head;
//     node *nextptr;
//     while (curptr != NULL)
//     {
//         nextptr = curptr->next;
//         curptr->next = prevptr;

//         prevptr = curptr;
//         curptr = nextptr;
//     }
//     return prevptr;
// }

// int main()
// {
//     node *head = NULL;
//     insertAtTail(head, 2);
//     insertAtTail(head, 4);
//     insertAtTail(head, 5);
//     insertAtTail(head, 6);
//     insertAtTail(head, 7);
//     insertAtHead(head, 1);
//     display(head);
//     if (search(head, 7))
//     {
//         cout << "Found" << endl;
//     }
//     else
//     {
//         cout << "Not found" << endl;
//     }
//     node *newHead = reverse(head);
//     display(newHead);
// }

// #include <array>
// #include <iostream>
// using namespace std;

// int main()
// {
//     array<int, 4> a = {1, 3, 4, 5};
//     int size = a.size();
//     for (int i = 0; i < size; i++)
//     {
//         cout << a[i] << endl;
//     }

//     cout << "Element at 2nd index" << a.at(2) << endl;
//     cout << "Empty or not" << a.empty() << endl;
//     cout << "First element of array" << a.front() << endl;
//     cout << "Last Element of array" << a.back() << endl;
//     return 0;
// }

// #include <vector>
// #include <iostream>
// using namespace std;

// int main()
// {
//     vector<int> v;

//     vector<int> a(5, 1); //5- size of vector, 1- initialize all of them with 1
//     cout << "print a" << endl;
//     for (int i = 0; i < a.size(); i++)
//     {
//         cout << a[i] << " ";
//     }
//     vector<int> last(a); //copies the elements of a in last
//     cout << "Capacity->" << v.capacity() << endl;

//     v.push_back(1);
//     cout << "Capacity->" << v.capacity() << endl;
//     v.push_back(2);
//     cout << "Capacity->" << v.capacity() << endl;
//     v.push_back(3);
//     cout << "Capacity->" << v.capacity() << endl;
//     cout << "Size->" << v.size() << endl;

//     cout << "Element at 2nd index" << v.at(2) << endl;

//     cout << "Element at front" << v.front() << endl;
//     cout << "Element at back" << v.back() << endl;
//     v.pop_back();
//     v.clear(); //clears the vector and size becomes 0 but the capacity doesnt change
//     return 0;
// }

// #include <iostream>
// #include <deque>

// int main()
// {
//     deque<int> q;
//     q.push_back(2);
//     q.push_front(3);
//     q.push_back(4);
//     q.push_front(5);
//     q.push_front(6);
//     for (int i = 0; i < q.size(); i++)
//     {
//         cout << q[i] << " ";
//     }
//     cout << endl;
//     q.pop_front();
//     q.pop_back();
//     for (int i = 0; i < q.size(); i++)
//     {
//         cout << q[i] << " ";
//     }
//     cout << endl;

//     cout << "Element at 2nd index" << q.at(2) << endl;
//     cout << "Front element" << q.front() << endl;
//     cout << "Back element" << q.back();
//     cout << "Empty or not" << q.empty() << endl;
//     q.erase(q.begin(), q.begin() + 1);
//     q.erase(q.begin(), q.end()); //erases the whole deque
//     return 0;
// }

// #include <iostream>
// #include <list>

// using namespace std;

// int main()
// {
//     list<int> l;
//     list<int> n(5, 100); //initialize 5 elements and all of them should be 100
//     list<int> n2(l);     //copy list l in n
//     l.push_back(1);
//     l.push_front(2);
//     l.push_back(1);
//     l.push_front(2);
//     l.push_back(1);
//     l.push_front(2);
//     for (int i : l)
//     {
//         cout << i << " ";
//     }
//     cout << endl;

//     l.erase(l.begin());
//     cout << "Remove from back" << endl;
//     l.pop_back();
//     cout << "Remove from front" << endl;
//     l.pop_front();
//     cout << "size of list" << l.size() << endl;
//     for (int i : l)
//     {
//         cout << i << " ";
//     }
// }

// #include <iostream>
// #include <stack>

// using namespace std;

// int main()
// {
//     stack<string> s;
//     s.push("Shreesh");
//     s.push("Arya");
//     s.push("Charu Chandra");

//     cout << "Top Element " << s.top() << endl;
//     s.pop();
//     cout << "Top Element " << s.top() << endl;
//     cout << "Size of stack " << s.size() << endl;
//     cout << "Empty or not " << s.empty() << endl;

//     return 0;
// }

// #include <iostream>
// #include <queue>

// using namespace std;

// int main()
// {
//     queue<string> q;
//     q.push("Shreesh");
//     q.push("Charu Chandra");
//     q.push("Arya");
//     cout << "Size before pop " << q.size() << endl;
//     cout << "First Element " << q.front() << endl;
//     q.pop();
//     cout << "First Element " << q.front() << endl;

//     cout << "Size after pop " << q.size() << endl;
//     q.push("Shreesh");
//     q.push("Charu Chandra");
//     q.push("Arya");
//     cout << "Empty or not" << q.empty() << endl;
//     cout << q.back();

//     return 0;
// }

// #include <queue>
// #include <iostream>

// using namespace std;

// int main()
// {
//     // max heap
//     priority_queue<int> maxi;
//     // min heap
//     priority_queue<int, vector<int>, greater<int> > mini;

//     maxi.push(1);
//     maxi.push(3);
//     maxi.push(2);
//     maxi.push(0);

//     int n = maxi.size();
//     for (int i = 0; i < n; i++)
//     {
//         cout << maxi.top() << " ";
//         maxi.pop();
//     }
//     cout << endl;

//     mini.push(1);
//     mini.push(3);
//     mini.push(2);
//     mini.push(0);

//     int m = mini.size();
//     for (int i = 0; i < m; i++)
//     {
//         cout << mini.top() << " ";
//         mini.pop();
//     }
//     cout << endl;
//     cout << "Empty or not " << mini.empty() << endl;

//     return 0;
// }

// #include <iostream>
// #include <set>

// using namespace std;

// int main()
// {
//     set<int> s;

//     s.insert(5);
//     s.insert(1);
//     s.insert(6);
//     s.insert(0);

//     for (int i : s)
//     {
//         cout << i << " ";
//     }
//     cout << endl;

//     set<int>::iterator it = s.begin();
//     it++;

//     s.erase(it);
//     for (int i : s)
//     {
//         cout << i << " ";
//     }
//     cout << endl;

//     cout << "Count checks if the particular element is present in the set or not(returns boolean value) " << s.count(2) << endl;

//     set<int>::iterator itr = s.find(5); //finds the iterator of that particular element
//     cout << "Value present at iterator " << *itr << endl;
//     cout << "Empty or not" << s.empty() << endl;
//     cout << "Size of set" << s.size();
//     return 0;
// }

// #include <iostream>
// #include <map>

// using namespace std;

// int main()
// {
//     map<int, string> m;
//     m[1] = "Shreesh";
//     m[2] = "Arya";
//     m[3] = "Love";
//     m[3] = "Love";
//     m[4] = "Babbar";
//     m.insert(pair<int, string>(0, "Charu"));

//     map<int, string>::iterator itr;

//     for (itr = m.begin(); itr != m.end(); ++itr)
//     {
//         cout << itr->first << endl;
//         cout << itr->second << endl;
//     }

//     cout << "Size of map " << m.size() << endl;
//     cout << "Maximum size of a map " << m.max_size() << endl;
//     cout << "Map empty or not " << m.empty() << endl;
//     m.erase(m.begin());
//     m.erase(2);
//     for (itr = m.begin(); itr != m.end(); ++itr)
//     {
//         cout << itr->first << endl;
//         cout << itr->second << endl;
//     }
//     cout << m.count(3) << endl;

//     m.clear();
//     cout << "Map empty or not " << m.empty() << endl;
//     return 0;
// }

// #include <iostream>
// #include <algorithm>
// #include <vector>

// using namespace std;

// int main()
// {
//     vector<int> v;
//     v.push_back(1);
//     v.push_back(2);
//     v.push_back(3);
//     v.push_back(4);
//     v.push_back(5);

//     cout << "Binary search :" << binary_search(v.begin(), v.end(), 5) << endl;
//     cout << "Lower bound : " << lower_bound(v.begin(), v.end(), 5) - v.begin() << endl;
//     cout << "Upper bound : " << upper_bound(v.begin(), v.end(), 5) - v.begin() << endl;

//     int a = 5;
//     int b = 6;

//     cout << "max :" << max(a, b) << endl;
//     cout << "min :" << min(a, b) << endl;
//     swap(a, b);
//     cout << "a :" << a << endl;
//     cout << "b :" << b << endl;

//     string s = "abscd";
//     reverse(s.begin(), s.end());
//     cout << "s " << s << endl;

//     rotate(v.begin(), v.begin() + 1, v.end());
//     cout << "After rotating" << endl;
//     for (int i = 0; i < v.size(); i++)
//     {
//         cout << v[i] << " ";
//     }
//     cout << endl;
//     sort(v.begin(), v.end());
//     for (int i = 0; i < v.size(); i++)
//     {
//         cout << v[i] << " ";
//     }
//     cout << endl;
//     return 0;
// }
