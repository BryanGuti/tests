const number = document.getElementById('number');
const searchOutButton = document.getElementById('searchOut');

searchOutButton.addEventListener('click', searchOut);

function searchOut(){
    let intNumber = parseInt(number.value);

    for (let i = 2; i <= intNumber; i++) {
        if (parseInt(intNumber % i) > 0) {
            continue;
        }
        if (parseInt(intNumber % i) === 0 && intNumber === i ) {
            console.log("Es primo");
            break;
        }
        console.log("No es primo");
        break;
    }
}