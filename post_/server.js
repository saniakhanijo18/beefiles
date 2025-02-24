const express=require("express");
const app=express();
app.use(express.urlencoded({extended:true}));

app.get("/adduser",(req,res)=>{
    res.sendFile(__dirname + "/register.html");
})
app.post("/adduser",(req,res)=>{
    let{username,useremail,userpassword}=req.body;
    console.log(username,useremail,userpassword);
    let newUser={
        name:username,
        email:useremail,
        password:userpassword
    }
    userData.push(newUser);
    res.send(userData);

})


app.listen(5010,()=>{
    console.log("server started");
})