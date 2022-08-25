function newGame(select){
    let playerSelection = select.srcElement.value
    let playerEmoji = ""
    let playerScore = parseInt(document.getElementById("player-score").innerHTML)

    let botSelection = chooseRobotOption()
    let botEmoji = ""
    let botScore = parseInt(document.getElementById("bot-score").innerHTML)

    if(playerSelection === "rock"){
        playerEmoji = "✊"
    }
    if(playerSelection === "scissor"){
        playerEmoji = "✌"
    }
    if(playerSelection === "paper"){
        playerEmoji = "✋"
    }
    if(botSelection === "rock"){
        botEmoji = "✊"
    }
    if(botSelection === "scissor"){
        botEmoji = "✌"
    }
    if(botSelection === "paper"){
        botEmoji = "✋"
    }

    if(playerSelection === botSelection){
        document.getElementById("player-selection").innerHTML = playerEmoji
        document.getElementById("bot-selection").innerHTML = botEmoji
        document.getElementById("message").innerHTML = "DRAW"
    }
    if(playerSelection === "rock" && botSelection === "scissor"){
        document.getElementById("player-selection").innerHTML = playerEmoji
        document.getElementById("bot-selection").innerHTML = botEmoji
        document.getElementById("message").innerHTML = "WIN"
        document.getElementById("player-score").innerHTML = (playerScore + 1).toString()
    }
    if(playerSelection === "scissor" && botSelection === "paper"){
        document.getElementById("player-selection").innerHTML = playerEmoji
        document.getElementById("bot-selection").innerHTML = botEmoji
        document.getElementById("message").innerHTML = "WIN"
        document.getElementById("player-score").innerHTML = (playerScore + 1).toString()
    }
    if(playerSelection === "paper" && botSelection === "rock"){
        document.getElementById("player-selection").innerHTML = playerEmoji
        document.getElementById("bot-selection").innerHTML = botEmoji
        document.getElementById("message").innerHTML = "WIN"
        document.getElementById("player-score").innerHTML = (playerScore + 1).toString()
    }
    if(playerSelection === "rock" && botSelection === "paper"){
        document.getElementById("player-selection").innerHTML = playerEmoji
        document.getElementById("bot-selection").innerHTML = botEmoji
        document.getElementById("message").innerHTML = "LOST"
        document.getElementById("bot-score").innerHTML = (botScore + 1).toString()
    }
    if(playerSelection === "scissor" && botSelection === "rock"){
        document.getElementById("player-selection").innerHTML = playerEmoji
        document.getElementById("bot-selection").innerHTML = botEmoji
        document.getElementById("message").innerHTML = "LOST"
        document.getElementById("bot-score").innerHTML = (botScore + 1).toString()
    }
    if(playerSelection === "paper" && botSelection === "scissor"){
        document.getElementById("player-selection").innerHTML = playerEmoji
        document.getElementById("bot-selection").innerHTML = botEmoji
        document.getElementById("message").innerHTML = "LOST"
        document.getElementById("bot-score").innerHTML = (botScore + 1).toString()
    }
}

function chooseRobotOption(){
    let options = ["rock", "scissor", "paper"]
    let choosenRobotOption = options[Math.floor((Math.random() * 3))]
    return choosenRobotOption
}

function gameStart(){
    let rockButton = document.getElementById("rock-button")
    rockButton.addEventListener('click', newGame)
    let scissorButton = document.getElementById("scissor-button")
    scissorButton.addEventListener('click', newGame)
    let paperButton = document.getElementById("paper-button")
    paperButton.addEventListener('click', newGame)
}

window.addEventListener('load', gameStart)