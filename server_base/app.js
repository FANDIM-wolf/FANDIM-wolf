const express = require("express");
const fs = require("fs");
    
const app = express();
const jsonParser = express.json();
 
const filePath = "users.json";

app.get("/api/users", function(req, res){
       
    const content = fs.readFileSync(filePath,"utf8");
    const users = JSON.parse(content);
    res.send(users);
});

app.post("/user", jsonParser, function (request, response) {
    console.log(request.body);
    if(!request.body) return response.sendStatus(400);
     
    response.json(request.body); // отправляем пришедший ответ обратно
});


app.get("/", function(request, response){
      
    response.sendFile(__dirname + "/index.html");
});

app.listen(3001);