import random
import time
import datetime


class Register:

    def __init__(self, name, attempts, timer):
        self.name = name
        self.attempts = attempts
        self.timer = timer


def run():

    header = '''
    ****************************************************************************
        Adivina el número lo antes posible y con el menor número de intentos
    ****************************************************************************\n\n
    '''
    print(header)

    player_list = add_players()

    max_number = add_max_number()

    game = start_game(player_list, max_number)

    rank = ranking(game)

    print(f"\n\n{(rank[0].name).upper()} ganó!!!\n")

    position(rank)


def position(_rank):

    print("\nNOMBRE\t\t\tINTENTOS\t\tTIEMPO\n")

    for i in _rank:
        print(f"{i.name}\t\t\t{i.attempts}\t\t\t{datetime.timedelta(milliseconds = i.timer, )}")


def ranking(game_is_list):

    _ranking = sorted(game_is_list, key=lambda object: object.attempts)

    return _ranking


def start_game(player_list, max_number):

    players_list = []

    for player in player_list:
        player_registration = guess_number(player, max_number)
        players_list.append(player_registration)

    return players_list


def guess_number(Player, maxNumber):

    random_number = random.randrange(1, (maxNumber + 1))

    attempts_amount = 1

    start_time = time.time()

    chosen_number = input(f"\n{Player}, adivina el número: ")

    while True:

        if is_a_number(chosen_number):

            chosen_number = int(chosen_number)

            if chosen_number < 1:

                attempts_amount += 1
                chosen_number = input("\nIngrese un número mayor o igual que 1: ")

            else:
                if chosen_number > random_number:

                    attempts_amount += 1
                    chosen_number = input("NO! Ingrese un número menor: ")

                    continue

                if chosen_number < random_number:

                    attempts_amount += 1
                    chosen_number = input("NO! Ingrese un número mayor: ")

                    continue

                else:

                    lap_time_miliseconds = (time.time() - start_time) * 1000
                    format_time = datetime.timedelta(milliseconds = lap_time_miliseconds)
                    print(f"Felicidades {Player}, adivinaste el numero.\n")
                    time.sleep(1)
                    print(f"Número: {random_number}\t\tIntentos: {attempts_amount}\t\tTiempo: {format_time}.\n")
                    time.sleep(2)
                    break

        else:

            error = '''\n
                Valor incorrecto:
                    -Debe ingresar valores numericos y mayores  o iguales que 1
                    -Debe utilizar "." en lugar de ","\n\n
            '''
            print(error)

            chosen_number = input("\nIngrese un número mayor o igual que 1: ")
            attempts_amount += 1

    dates_player = Register(Player, attempts_amount, lap_time_miliseconds)

    return dates_player 


def is_a_number(chosen_number):

    try:

        chosen_number = int(chosen_number)

        return True

    except ValueError:

        return False


def add_max_number():

    while True:

        try:

            maxNumber = int(input("\nIngrese el número máximo(Mayor o igual que 1): "))

            if maxNumber > 1:
                break
            else:
                print("\nValor incorrecto: El número debe ser mayor o igual que 1.\n")
                continue

        except ValueError:
            error = '''
                Valor incorrecto:
                    -Debe ingresar valores numericos y mayores  o iguales que 1
                    -Debe utilizar "." en lugar de ","
            '''
            print(error)

    return maxNumber


def add_players():

    add_player = 'y'
    players = []

    while add_player.lower() == 'y':
        player_name = input("Ingrese el nombre del jugador: ")
        players.append(player_name)
        while True:
            add_player = input("\nDesea agregar otro jugador? [y/n]: ")
            if (add_player.strip().lower()) == 'y' or (add_player.strip().lower()) == 'n':
                break
            else:
                print("\nValueType: Valor incorrecto.\n")
                continue
    return players


if __name__=='__main__':
    run()