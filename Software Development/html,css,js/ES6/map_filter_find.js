const num=[1,2,3,4];
const square=num.map(x=>{
   return x*x;
});

console.log(square);

const products=[
    {
        name:'samsung',
        price:12000,
        color:'golden'
    },

    {
        name:'Xiaomi',
        price:22000,
        color:'golden'
    },

    {
        name:'Nokia',
        price:32000,
        color:'black'
    }
]
const res=products.filter(p=>{
    if(p.color=='black'){
        return p;
    }
})

console.log(...res);

const finds=products.find(p=>{
  if(p.color=='golden'){
    return p;
  }
})

console.log(finds);




