# 2253A
# The only way a card can beat all others is if it's the greatest and prime
def best_card(num_cards):
    card = num_cards + 1
    for i in range(2, int(card**0.5) + 1):
        if card % i == 0:
            print('NO')
            return
    print('YES')

def main():
    tests = input()
    for _ in range(int(tests)):
        num_cards = int(input())
        best_card(num_cards)

if __name__ == '__main__':
    main()