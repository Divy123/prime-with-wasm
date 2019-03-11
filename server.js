var express = require('express');

var app = express();

app.use(express.static('public',{
    setHeaders: (res, path, stat)=>{
        if(path.endsWith('.wasm'))
        res.set('Content-type', 'application/wasm')
    }
}))

app.listen(2222,()=>console.log("Server up on port 2222"));