var a = 10; // Attached to globalThis

function printData() {
     let a = 5;
     console.log(a);            // 5
     console.log(globalThis.a); // 10
}

printData();