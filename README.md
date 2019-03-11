Prime-With-Wasm
====

## Why so wasm(or awesome)?

WebAssembly have been rising as a  technology and does not seem to stop any soon.
The way it has optimised writing code for the browsers is really awesome. The compiled binary format it provides for low-level languages like C, C++, Rust etc is just wow!
Being a performance loving person I tried to explore this very beautiful effort of the various tech-giants like Google, Microsoft, Mozilla and many more and this project is a part of it.

In this simple project I have tried to show the difference between the time taken by running a simple prime_number counter program that counts number of prime numbers upto a certain limit, when written in pure, plain vanilla JS and one written in C compiled with Webassembly.

Give it a try and feel the real power of how fast WASM can be!!


## Installation

Clone the repository by :

`git clone https://www.github.com/Divy123/prime-with-wasm.git`

Install Emscripten (in case you don't already have it) by following the official documentation:

https://emscripten.org/docs/getting_started/downloads.html

Install node packages by doing npm start

And you are all set to go!!

## Quick Usage

Navigate to prime-with-wasm directory

and run the following command:

`emcc lib/prime.c -s WASM=1 -s EXPORTED_FUNCTIONS="['_numPrimes']" -o public/prime.js`

After this is done start up your express server by running npm start,and 
HIT open your localhost:2222

On opening the dev-console you feel see the output with the following description

The first line will be like this:
js 17984 9.679
and the second line just its sibling:
C 17894 7.911
which gives us the information like this "where I am from   number of primes   time taken"

Actually the code from C has been compiled with emscripten to wasm and utilized by out JS inside index.html.

Also you can play around by changing the limit upto which you want to find the number of primes by editing line #34 inside public/index.html and have more comparisons.


Thanks for playing around :smile:
