#include <iostream>
using namespace std;

const int n = 200;

class HashNode
{

public:
    int key;
    int value;

    HashNode(int key, int value)
    {
        this->key = key;
        this->value = value;
    }
};

class HashTable
{
    HashNode **arr;

public:
    HashTable()
    {
        arr = new HashNode *[n];
        for (int i = 0; i < n; i++)
        {
            arr[i] = NULL;
        }
    }

    int hashFunc(int key)
    {
        return key % n;
    }

    void insert(int key, int value)
    {
        int h = hashFunc(key);
        while (arr[h] != NULL && arr[h]->key != key)
        {
            h = hashFunc(h + 1);
        }
        if (arr[h] != NULL) // if the key is already present then delete the (key, value) pair
        {
            delete arr[h];
        }
        arr[h] = new HashNode(key, value);
    }

    int get(int key)
    {
        int h = hashFunc(key);
        while (arr[h] != NULL && arr[h]->key != key)
        {
            h = hashFunc(key) + 1;
        }
        if (arr[h] == NULL)
        {
            return -1;
        }
        else
        {
            return arr[h]->value;
        }
    }

    void remove(int key)
    {
        int h = hashFunc(key);
        // if (arr[h] == NULL)
        // {
        //     cout << "No Element Found" << endl;
        //     return;
        // }
        while (arr[h] != NULL)
        {
            if (arr[h]->key == key)
            {
                break;
            }
            h = hashFunc(h + 1);
        }

        if (arr[h] == NULL)
        {
            cout << "No Element Found" << endl;
            return;
        }
        else
        {
            delete arr[h];
            // cout << arr[h]->value << endl;
        }
        cout << "Element Deleted" << endl;
    }

    void display()
    {
        for (int i = 0; i < n; i++)
        {
            if (arr[i] != NULL)
            {
                cout << arr[i]->key << "->" << arr[i]->value << endl;
            }
        }
    }
};
int main()
{
    HashTable h;
    h.insert(1, 1);
    h.insert(2, 2);
    h.insert(2, 3);
    h.insert(2, 8); // note then when displayed the value of key->2 should be only 8.
    h.insert(12, 21);

    h.display();

    cout << h.get(2) << endl;
    h.remove(2);
    h.display();
    cout << h.get(2) << endl;
    return 0;
}