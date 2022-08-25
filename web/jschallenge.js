const subscriptionMessage = [
    {   subscription: "Free",
        subscriprionMessage: "Solo puedes tomar los cursos gratis."},
    {   subscription: "Basic",
        subscriprionMessage: "Puedes tomar casi todos los cursos de Platzi durante un mes."},
    {   subscription: "Expert",
        subscriprionMessage: "Puedes tomar casi todos los cursos de Platzi durante un año."},
    {   subscription: "Expert+",
        subscriprionMessage: "Tú y alguien más pueden tomar TODOS los cursos de Platzi durante un año."},
]

function findSubscription (chossenSubscription) {
    if (subscriptionMessage.some((sub) => sub.subscription  === chossenSubscription)){
        let subscription = subscriptionMessage.find((sub) => sub.subscription === chossenSubscription);
        let message = subscription.subscriprionMessage;
        return message;
    }
    else{
        return "Opcion incorrecta."
    }
}

let userSubscription = prompt("Cuál es tu suscripción?");

console.log(findSubscription(userSubscription));