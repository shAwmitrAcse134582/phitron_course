var n=[1,2,3,4,5,6,67,7,9,0,12,34,20];
// console.log(n.sort(function(a,b){
//     return a-b;
// }));
// using loop
for(var i=0;i<n.length;i++){
    for(var j=i+1;j<n.length;j++){
        if(n[i]>n[j]){
            var temp=n[j];
            n[j]=n[i];
            n[i]=temp;
        }
        
    }
}
for(var i=0;i<n.length;i++){
    console.log(n[i]);
}