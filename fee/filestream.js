console.log("file is being created..")
fs.writefile("file2.txt","this is  file 2",(err,result)=>{
    if(err){
        console.log(err);

    }
    else{
        console.log("file2 is created..");
    }
});
console.log("file is created successfully..");
const data=fs.readFileSync("file2.txt");
console.log(data);
fs.name("file2.txt","file3.txt",(err)=>){
    if(err){
        comnsole.log(err);

    }
    else{
        console.log("file renmae succesfully");
    }
}