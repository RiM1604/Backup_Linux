const fs= require('fs');

fs.readFile('./new.txt',(err,data)=>{
    if(err){
        console.log(err);
    }
    console.log(data);
})

if(!fs.existsSync('./fscreate.txt')){
    fs.writeFile('./fscreate.txt','this is a new file created by fs method',(err)=>{
        if(err){
            console.log(err);
        }
    })
}else{
    console.log('fscreate.txt does not exists');
}

const readstreampipe= fs.createReadStream('./fscreate.txt',{encoding:'utf8'});
const writestreampipe= fs.createWriteStream('./new.txt');

readstreampipe.pipe(writestreampipe);


const readstream = fs.createReadStream('./new.txt',{ encoding : 'utf8'});
fs.writeFile('./new2.txt','this is a new file',(err)=>{
    if(err){
        console.log(err);
    }
    console.log('new file created');
})
const writestream = fs.createWriteStream('./new2.txt');



readstream.on('data',(chunk)=>{
    console.log('NEW CHUNK');
    console.log(chunk );
    writestream.write('NEW CHUNK');
    writestream.write(chunk);
});



