1.  Vektor konteinerio funkcionalumas patikrinamas _functionality.cpp_ faile.  
    Žemiau galite matyti gautus rezultatus

        **.reserve(10)**        
        original capacity = 10  
        custom capacity = 10  
        [PASSED]

        **.push_back(1, 2, 3)**  
        original items: 1 2 3  
        custom items: 1 2 3  
        [PASSED]

        **.size()**  
        original size = 3  
        custom size = 3  
        [PASSED]

        **.capacity()**  
        original capacity = 10  
        custom capacity = 10  
        [PASSED]

        **.empty()**  
        original is empty = 0  
        custom is empty = 0  
        [PASSED]

        **.front()**  
        original front = 1  
        custom front = 1  
        [PASSED]

        **.back()**  
        original back = 3  
        custom back = 3  
        [PASSED]

        **.at(2)**  
        original at 2 = 3  
        custom at 2 = 3  
        [PASSED]

        **.pop_back()**  
        original before = 1 2 3  
        custom before = 1 2 3  
        original after = 1 2  
        custom after = 1 2  
        [PASSED]

        **.clear()**  
        original after =  
        custom after =  
        [PASSED]


2. Spartos analizė (pushback funckija)

   | **container \ size** | 10.000     | 100.000     | 1.000.000  | 10.000.000 | 100.000.000 |
   | -------------------- | ---------- | ----------- | ---------- | ---------- | ----------- |
   | std::vector          | 6.6391e-05 | 0.000552403 | 0.00573948 | 0.0725521  | 0.574865    |
   | Vector               | 2.9248e-05 | 0.000296445 | 0.00325145 | 0.0372436  | 0.472925    |
   |                      |            |             |            |            |             |
   | **Time Improvement** | -55.9458%  | -46.3354%   | -43.3494%  | -48.6664%  | -17.7329%   |

3. Atminties perskirstymai užpildant 100.000.000 elementų

   |                         | std::vector | Vector |
   | ----------------------- | ----------- | ------ |
   | Atminties perskirstymai | 28          | 28     |

4. https://github.com/Zeromskas/Objektinis-programavimas2/releases/tag/V2.1

   |                                      | std::vector | Vector     |
   | ------------------------------------ | ----------- | ---------- |
   | 100.000 studentų apdorojimo laikas   | _0.858510_  | _0.786196_ |
   | 1.000.000 studentų apdorojimo laikas | _7.42245_   | _7.39369_  |
