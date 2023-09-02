const fs= require('fs');
const http= require('http');
const _= require('lodash');

const server = http.createServer((req,res)=>{
    //loadash
    const num =_.random(0,20);
    console.log(num); 
    res.setHeader('Content-Type','text/html');

    let path ='./';
    switch(req.url){
        case '/html2':
            path+='index2.html';
            res.statusCode=200;
            break;
        case '/html3':
            path+='index3.html';
            res.statusCode=200;
            break;
        case '/html6':
            res.statusCode=301;
            res.setHeader('Location','/html3');
            res.end();
            break;
        default:
            path+='404.html';
            res.statusCode=404;
            break;

    }

    fs.readFile(path,(err,data)=>{
        if(err){
            console.log(err);
            res.end();
        }else{
            res.end(data);
        }
    })
    //res.write("this is sending a response");
    //res.end();
});

server.listen(3000, 'localhost', ()=>{
    console.log("listening to requests made");
});