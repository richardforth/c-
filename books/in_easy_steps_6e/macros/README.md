# regarding define1.cpp

BOOK and NUM definitions were removed.

Values added at compile time:

```bash
> c++ -DNUM=50 -DBOOK=\""Java in easy steps"\" define1.cpp -o define1.exe
```

Output:

```bash
*****************************
Java in easy steps
*****************************
NUM is: 50
Double NUM: 100
```
