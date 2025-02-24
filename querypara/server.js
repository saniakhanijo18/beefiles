const express = require("express");
const app = express();
app.get("/profile", (req, res) => {
    const { username, age, address } = req.query;
    res.send("profile page of" + " " + username + " " + age + " " + address)
})
app.listen(5678, () => {
    console.log("server started")
})

const { application } = require("express")

// })
let userData = [{
    id: 1,
    name: "Sania",
    address: "kaithal"
}, {
    id: 2,
    name: "Samya",
    address: "Ferozepur"
}, {
    id: 3,
    name: "Siya",
    address: "Panipat"
}, {
    id: 4,
    name: "Sneha",
    address: "Panipat"
}, ]
app.get("/allusers", (req, res) => {
    res.send(userData)
})
app.get("/getuserbyID", (req, res) => {
    let { id } = req.query;
    for (let i = 0; i < userData.length; i++) {
        if (userData[i].id == id) {
            return res.send(userData[i])
        }
    }
    res.send("user not found")
})
app.get("/deleteuserbyid", (req, res) => {
    let { id } = req.query;
    for (let i = 0; i < userData.length; i++) {
        if (userData[i].id == id) {
            userData.splice(i, 1);
            return res.send("user deleted")
        }
    }
    res.send("No user found to delete")
})
app.get("/adduser",(req,res)=>{
    let{id,name,address}=req.query;
    let newUser={
        id:id,
        name:name,
        address:address
    }
    usersData.push(newUser);
    res.send("New user added")
    
    

})