1. 
---
.reserve(10)
   original capacity = 10
   custom capacity = 10
[PASSED]
---

---
.push_back(1, 2, 3)
   original items: 1 2 3 
   custom   items: 1 2 3 
[PASSED]
---

---
.size()
   original size = 3
   custom   size = 3
[PASSED]
---

---
.capacity()
   original capacity = 10
   custom   capacity = 10
[PASSED]
---

---
.empty()
   original is empty = 0
   custom   is empty = 0
[PASSED]
---

---
.front()
   original front = 1
   custom   front = 1
[PASSED]
---

---
.back()
   original back = 3
   custom   back = 3
[PASSED]
---

---
.at(2)
   original at 2 = 3
   custom   at 2 = 3
[PASSED]
---

---
.pop_back()
   original before = 1 2 3 
   custom   before = 1 2 3 
   original after = 1 2 
   custom   after = 1 2 
[PASSED]
---

---
.clear()
   original after = 
   custom   after = 
[PASSED]
---

2. 
| **container \ size** | 10.000     | 100.000     | 1.000.000  | 10.000.000 | 100.000.000 |
|----------------------|------------|-------------|------------|------------|-------------|
| std::vector          | 6.6391e-05 | 0.000552403 | 0.00573948 | 0.0725521  | 0.574865    |
| Vector               | 2.9248e-05 | 0.000296445 | 0.00325145 | 0.0372436  | 0.472925    |
|                      |            |             |            |            |             |
| **Time Improvement** | -55.9458%  | -46.3354%   | -43.3494%  | -48.6664%  | -17.7329%   |

3.
Perskirtymas atliekamas po 28 kartus