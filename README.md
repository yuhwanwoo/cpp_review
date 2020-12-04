### vector

```c++
vector<int> v1(3,5); // {5,5,5};
cout<<v1.size()<<'\n'; //3
v1.push_back(7); // {5,5,5,7};

vector<int> v2(2); // {0,0}
v2.insert(v2.begin()+1,3); // {0,3,0}

vector<int> v3={1,2,3,4};
v3.erase(v3.begin()+2); // {1,2,4};

vector<int> v4; // {}
v4=v3; //{1,2,4}
cout<<v4[0]<<v4[1]<<v4[2]<<'\n'; //124
v4.pop_back();
v4.clear(); // {}
```



### vector - for

```cpp
int main(){
    vector<int> v1={1,2,3,4,5,6};

    // 1. range-based for loop (since C++11)
    for(int e:v1)
        cout<<e<<' ';
    
    cout<<"\n";

    // 2. not bad
    for(int i=0;i<v1.size();i++)
        cout<<v1[i]<<' ';
    
}
```



### 배열과 연결리스트 차이

|                                  | 배열 | 연결리스트 |
| :------------------------------: | :--: | :--------: |
|        k 번째 원소의 접근        | O(1) |    O(k)    |
|    임의 위치에 원소 추가/제거    | O(N) |    O(1)    |
|         메모리 상의 배치         | 연속 |   불연속   |
| 추가적으로 필요한 공간(Overhead) |  -   |    O(N)    |

### 연결리스트

임의의 위치에 있는 원소를 확인/변경=O(N)

임의의 위치에 원소를 추가/임의 위치의 원소 제거=O(1)

```cpp
int main(){
    list<int> L={1,2}; // 1 2
    list<int>::iterator t=L.begin(); // t는 1을 가리키는 중
    L.push_front(10); // 10 1 2
    cout<<*t<<'\n'; // t가 가리키는 값 =1을 출력
    L.push_back(5); // 10 1 2 5
    L.insert(t,6); // t가 가리키는 곳 앞에 6을 삽입, 10 6 1 2 5
    t++; // t를 1칸 앞으로 전진, 현재 t가 가리키는 값은 2
    t=L.erase(t); // t가 가리키는 값을 제거, 그 다음 원소인 5의 위치를 반환
                    // 10 6 1 5, t가 가리키는 값은 5
    cout<<*t<<'\n'; // 5
    for(auto i:L) cout<<i<<' ';
    cout<<'\n';			// 10 6 1 5
    for(list<int>::iterator it=L.begin(); it!=L.end();it++)
        cout<<*it<<' ';			// 10 6 1 5
}
```

