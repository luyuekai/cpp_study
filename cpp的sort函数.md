# cpp sort函数的自定义排序

## 使用lambda表达式

```cpp
#include <algorithm>
#include <vector>

using namespace std;

class Solution {
 public:
  static bool myfunction(const vector<int>& a, const vector<int>& b) {
    return a[1] > b[1];
  }

  int maximumUnit(vector<vector<int>>& boxTypes, int truckSize) {
    // 使用lambda表达式
    sort(boxTypes.begin(), boxTypes.end(),
         [&](const auto& L, const auto& R) { return L[1] > R[1]; });
    //  使用自定义函数
    sort(boxTypes.begin(), boxTypes.end(), myfunction);
    return 0;
  }
};

int main() { return 0; }
```

主要是lambda 表达式。 lambda表达式 在c++ 11及以后引入；
在lambda 表达式中使用auto， 需要在 c++ 14及以后， 因此上面编译命令

```shell
g++ -g -Wall -std=c++14 sort_lambda.cc
```
## 使用自定义函数
