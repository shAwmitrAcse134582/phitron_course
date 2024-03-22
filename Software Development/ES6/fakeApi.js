fetch('https://fakestoreapi.com/products/1')
.then(res=>res.json())
.then(data=>console.log(data))

.catch(err=>{
    console.log(err)
})

// const getData=new Promise(function(resolve,reject){
//     return resolve(20);
// });

// getData.then(data=>console.log(data))

