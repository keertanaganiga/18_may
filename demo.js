var http=require('http');
http.createServer(function(req,res){
    res.write("Hello world!! keertana....");
    res.end();
}).listen(8080);