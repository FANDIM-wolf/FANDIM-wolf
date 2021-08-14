let currentDate = new Date();
 
global.date = currentDate;

function tutu (){
 return "Hello My user";
}

 
module.exports.getMessage = function(){
    let hour = currentDate.getHours();
    if(hour >16)
        return "Good Evnning, " + global.name;
    else if(hour >10)
        return "Good afternoon, " + name;
    else
        return "Good morning, " + name;
}

module.exports.tutu;