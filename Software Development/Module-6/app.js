// alert("Javascript is connected")

const h1=document.getElementsByTagName('h1');
// console.log(h1);

const header=document.getElementById('header').style.color='red'
// console.log(header)


const title=document.getElementsByClassName('title');
// console.log(title);

const name=document.getElementById('name').innerText;
// console.log(name);
const input=document.getElementById('input').value;
// console.log(input);

const img=document.getElementById('img');
img.setAttribute('alt','Picture');

// console.log(img);

var newdiv  = document.getElementById('newdiv')
var p=document.createElement('p');
p.innerText="New Paragraph";
newdiv.appendChild(p);



document.getElementById('submit-btn').addEventListener("click",function(e){
    // console.log('Hi,THis is shawmitra');
    var inputValue=document.getElementById("input").value;
    console.log(inputValue);
})
