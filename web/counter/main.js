const number = {
    value: null,
    add: function(){
        this.value++;
        return this.value;
    },
    substract: function(){
        this.value--;
        return this.value;
    }
}

const displayedNumber = document.getElementById('displayedNumber');
const plusOneButton = document.getElementById('plusOneButton');
const minusOneButton = document.getElementById('minusOneButton');

number.value = Number(displayedNumber.textContent);

function plusOneAction(){
    displayedNumber.innerHTML = number.add().toString();
}

function minusOneAction(){
    displayedNumber.innerHTML = number.substract().toString();
}

function identifyKey(event){
    if(event.keyCode === 38){
        plusOneAction();
    }
    if(event.keyCode === 40){
        minusOneAction();
    }
}

function main(){
    plusOneButton.addEventListener('click', plusOneAction);
    minusOneButton.addEventListener('click', minusOneAction);
    document.addEventListener('keyup', identifyKey)
}

window.addEventListener('load', main)