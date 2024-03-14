var friends=['shawmitra','ashik','kawshik','sharif','soheb'];

var mx=0;
var ind=-1;
for(var i=0;i<friends.length;i++){
    if(friends[i].length>mx){
        mx=friends[i].length;
        ind=i;
    }

}
console.log(mx);
console.log(friends[ind]);