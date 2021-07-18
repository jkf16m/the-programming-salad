const p5 = require('p5');

function main():void{
  console.log("Hola mundo");
}
main();


let parentDiv:HtmlDivElement = document.getElementById('myp5game');
const sketch =(s)=>{
  s.setup=()=>{
    s.createCanvas(10,);
  }
  s.draw=()=>{
    s.background(0);
  }
}

let sketchInstance = new p5(sketch, parentDiv);