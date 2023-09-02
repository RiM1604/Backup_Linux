const greet = (name)=>{
    console.log(`hello , ${name}`);
}

greet('mario');
greet('ritesh');

setTimeout(()=>{
    console.log('This took 3 secs');
    clearInterval(int);
},3000);
const int=setInterval(()=>{
    console.log('this took 2 secs');
},2000)
console.log(__dirname);
console.log(__filename);

const people= ['ritesh','satish','nitesh','indira'];
const age= [2,3,4,5];
module.exports = {
    people,age
}