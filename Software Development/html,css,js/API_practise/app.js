const loadData=()=>{
    fetch('https://www.themealdb.com/api/json/v1/1/search.php?f=b')
    .then(res=>res.json())
    .then(data=>console.log(data))
}