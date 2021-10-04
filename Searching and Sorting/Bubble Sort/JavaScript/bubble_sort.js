//Created an array of n-elements and assigned them random values between (-100, 100)
let n=10;
let array = new Array(n);
for(let i=0;i<n;i++){
    array[i] = Math.floor(Math.random()*Math.pow(-1,i)*100);
}
console.log("Unsorted Array: " + array);


//Created a function for swaping values in ascending order
function swap(arr,i,j){
    if(arr[i]>arr[j]){
        let temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
    }
}

//Writing the Bubble Sort Algorithm
function BubbleSort(arr) {
    for(let i=0;i<arr.length;i++){
        for(let j=0;j<arr.length-i-1;j++){
            swap(arr,j,j+1);
        }
    }
}

//The results
BubbleSort(array);
console.log("Sorted Array: " + array);