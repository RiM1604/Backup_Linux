const express= require('express');
//getting expresss int
const app = express();
//an instance of express i.e a server
app.listen(9000);
//setting it to listen to a port


app.set('view engine', 'ejs');

app.set('views','viewengineviews');

app.get('/',(req,res)=>{
    res.render('index');
})
//sending res based on the requested url
app.get('/webpages', (req,res)=>{
    res.render('webpage');
}) 

app.get('/about', (req,res)=>{
    res.render('about');
})

app.get('/homei',(req,res)=>{
    res.redirect('/about');
})

app.use((req,res)=>{
    res.render('404');
})