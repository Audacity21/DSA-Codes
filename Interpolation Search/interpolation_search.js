//-----------------------------------
//FUNCTION: Implements Interpolation Search
function interpolationSearch(arr, lo, hi, x) {
	let pos;
	if (lo <= hi && x >= arr[lo] && x <= arr[hi]) {
		pos = lo + Math.floor(((hi - lo) / (arr[hi] - arr[lo])) * (x - arr[lo]));
		if (arr[pos] == x) return pos;
		if (arr[pos] < x) return interpolationSearch(arr, pos + 1, hi, x);
		if (arr[pos] > x) return interpolationSearch(arr, lo, pos - 1, x);
	}
	return -1;
}
//VARIABLE DECLARATIONS
let arr = [];
let len = 0;
let lo = 0;
let hi = 0;
let x = 0;
let index = -1;
//-----------------------------------
//EXAMPLE 1
arr = [10, 12, 13, 16, 18, 19, 20, 21, 22, 23, 24, 33, 35, 42, 47];
len = arr.length;
lo = 0;
hi = len - 1;
x = 18;
index = interpolationSearch(arr, lo, hi, x);
console.log("Searching for " + x + " in Array: " + arr);
if (index !== -1) console.log("Element Found at Index: " + index);
else console.log("Element Not Found: " + index);
console.log("\n");
//-----------------------------------
//EXAMPLE 2
arr = [2, 3, 6, 8, 10, 13, 16, 18];
len = arr.length;
lo = 0;
hi = len - 1;
x = 13;
index = interpolationSearch(arr, lo, hi, x);
console.log("Searching for " + x + " in array: " + arr);
if (index !== -1) console.log("Element Found at Index: " + index);
else console.log("Element Not Found: " + index);
console.log("\n");
//-----------------------------------
//EXAMPLE 3
arr = [0, 4, 8, 8, 15, 18, 23, 31];
len = arr.length;
lo = 0;
hi = len - 1;
x = 16;
index = interpolationSearch(arr, lo, hi, x);
console.log("Searching for " + x + " in array: " + arr);
if (index !== -1) console.log("Element Found at Index: " + index);
else console.log("Element Not Found: " + index);
console.log("\n");
//-----------------------------------
