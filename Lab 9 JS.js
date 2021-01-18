'use strict'

const f = a => {
    const string = 'Javascript Programming Python C++ 126 2567'
    const spl = string.split(' ')
    for (let i in spl) {
        let val = spl[i]
        if (val.length > a) {
            console.log(val)
        }
    } 
}
f(6)
