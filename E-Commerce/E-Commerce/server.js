const express = require('express')
const mongoose = require('mongoose')
const path = require('path')
const port = 3000

const app = express();
app.use(express.static(__dirname))
app.use(express.urlencoded({ extended: true }));


mongoose.connect('mongodb://127.0.0.1:27017/reviews')
const db = mongoose.connection
db.once('open',()=>{
    console.log("Mongodb connection successful")
})

const userSchema=new mongoose.Schema({
    name:String,
    email:String,
    rating:Number,
    review:String,
    recommend:String

})

const Users=mongoose.model("data",userSchema)

app.get('/',(req,res)=>{
    res.sendFile(path.join(__dirname,'E-Commerce.html'))
})


app.post('/post',async(req,res)=>{
    const { name, email, rating, review, recommend } = req.body;
    const user=new Users({
        name,
        email,
        rating,
        review,
        recommend
    })
    await user.save()
    console.log(user)
    res.send("Reviews Submission Successful")
})
app.listen(port,()=>{
    console.log("Server started")
})