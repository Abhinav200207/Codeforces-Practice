// simple get request in nodejs ?
var options = {
    host: 'localhost',
    port: 7474,
    path: '/db/data',
    method: 'GET',
    headers: {
        accept: 'application/json'
    }
};

console.log("Start");
var x = http.request(options,function(res){
    console.log("Connected");
    res.on('data',function(data){
        console.log(data);
    });
});

x.end();


// simple post request in nodejs ?
var options = {
    host: 'localhost',
    port: 7474,
    path: '/db/data',
    method: 'GET',
    headers: {
        accept: 'application/json'
    }
};

console.log("Start");
var x = http.request(options,function(res){
    console.log("Connected");
    res.on('data',function(data){
        console.log(data);
    });
});

x.end();


