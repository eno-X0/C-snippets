### Array tips
- initialize the value of array member to be 0 `int a[10] = {0};`
- [c99 only] {2,4,0,0,0,5} `int a[6] = {[1]=2,4,[5]=5}`
- count the length of array
	+ sizeof() : calculate the size of the content of a variable, and the unit is byte.
	+ if there is a array named a, then sizeof(a) will get the size of the whole array, and sizeof(a[0]) will get the size of the first member about a, then you can get the length of a just use `sizeof(a)/sizeof(a[0])`

