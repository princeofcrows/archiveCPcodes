import pygame, sys, random

pygame.init()
delay = 100
interval = 50
pygame.key.set_repeat(delay, interval)

class Player(pygame.sprite.Sprite):
    def __init__(self, image_file, location):
        pygame.sprite.Sprite.__init__(self)
        self.image = pygame.image.load(image_file[0])
        self.attackImg = pygame.image.load(image_file[1])
        self.QSImg = pygame.image.load(image_file[2])
        self.QSImg2 = pygame.image.load(image_file[3])
        self.fireImg = pygame.image.load(image_file[4])
        self.fireImg2 = pygame.image.load(image_file[5])
        self.zoomImg = pygame.image.load(image_file[6])
        self.zoomImg2 = pygame.image.load(image_file[7])
        self.rect = self.image.get_rect()
        self.rect.left, self.rect.top = location
        screen.blit(self.image, self.rect)
        pygame.display.flip()
        self.point = 0
        self.speed = 10
        self.temp = 0

    def move(self):
        pygame.draw.rect(screen, [255, 255, 255], self.rect, 0)
        if self.rect.left < 0:
            self.rect.left = 0
        elif self.rect.right > width:
            self.rect.right = width
        elif self.rect.top < 0:
            self.rect.top = 0
        elif self.rect.bottom > height:
            self.rect.bottom = height

        if event.key == pygame.K_UP:
            self.rect.top -= self.speed
            if(collide(group, playerOne)):
                self.rect.top += self.speed

        elif event.key == pygame.K_DOWN:
            self.rect.top += self.speed
            if(collide(group, playerOne)):
                self.rect.top -= self.speed

        elif event.key == pygame.K_RIGHT:
            self.rect.right += self.speed
            if(collide(group, playerOne)):
                self.rect.right -= self.speed

        elif event.key == pygame.K_LEFT:
            self.rect.left -= self.speed
            if(collide(group, playerOne)):
                self.rect.left += self.speed

        screen.blit(self.image, self.rect)
        pygame.display.flip()

    def attack(self):
        screen.blit(self.attackImg, self.rect)
        pygame.display.flip()
        pygame.time.delay(16)
        screen.blit(self.image, self.rect)
        pygame.display.flip()
        if ((self.rect.top >= enemy.rect.top) and (self.rect.top <= enemy.rect.bottom)) or ((self.rect.bottom >= enemy.rect.top) and (self.rect.bottom <= enemy.rect.bottom)):
            if abs(enemy.rect.right-self.rect.left)<=self.speed or abs(enemy.rect.left-self.rect.right)<=self.speed:
                enemy.getattack()

    def fireAttack(self):
        if self.rect.right - enemy.rect.right <= 0:
            fireBre = fire([self.rect.top + 20, self.rect.right+5])
            group.add(fireBre)
            while fireBre.rect.right <= width:
                if fireBre.firecollide():
                    if enemy.rect.left-fireBre.rect.right<=20 and enemy.rect.top<=fireBre.rect.top<=enemy.rect.bottom:
                        enemy.getattack()
                    break
                else:
                    pygame.draw.rect(screen, [255, 255, 255], fireBre.rect, 0)
                    fireBre.rect.left += 1
            group.remove(fireBre)

        elif self.rect.left - enemy.rect.left >=0:
            fireBre = fire([self.rect.top + 20, self.rect.left-17])
            group.add(fireBre)
            while fireBre.rect.left >= 0:
                if fireBre.firecollide():
                    if fireBre.rect.left-enemy.rect.right<=20 and enemy.rect.top<=fireBre.rect.top<=enemy.rect.bottom:
                        enemy.getattack()
                    break
                else:
                    pygame.draw.rect(screen, [255, 255, 255], fireBre.rect, 0)
                    fireBre.rect.left -= 1
            group.remove(fireBre)

    def shadowing(self):
        t = 20
        g = 1
        while t >= -20:
            pygame.draw.rect(screen, [255, 255, 255], self.rect, 0)
            self.rect.top -= g * t
            screen.blit(self.shadowImg, self.rect)
            pygame.display.flip()
            pygame.time.delay(10)
            t -= 1


class Enemy(pygame.sprite.Sprite):
    def __init__(self, image_file, location):
        pygame.sprite.Sprite.__init__(self)
        self.image = pygame.image.load(image_file[0])
        self.addictImg = pygame.image.load(image_file[1])
        self.nightCrawlImg = pygame.image.load(image_file[2])
        self.rect = self.image.get_rect()
        self.rect.left, self.rect.top = location
        screen.blit(self.image, self.rect)
        pygame.display.flip()
        self.speed = 10

    def getattack(self):
        playerOne.point+= 1
        screen.blit(self.addictImg, self.rect)
        pygame.display.flip()
        pygame.time.delay(60)
        screen.blit(self.image, self.rect)
        pygame.display.flip()
        blackboard.refresh()

    def moveAhead(self):
        pygame.draw.rect(screen, [255, 255, 255], self.rect, 0)
        self.rect.right -= self.speed
        if collide(group, enemy):
            self.rect.right += self.speed
            return False
        screen.blit(self.image, self.rect)
        pygame.display.flip()
        pygame.time.delay(20)
        return True

    def moveUp(self):
        pygame.draw.rect(screen, [255, 255, 255], self.rect, 0)
        self.rect.top -= self.speed
        if collide(group, enemy):
            self.rect.top += self.speed
            return False
        screen.blit(self.image, self.rect)
        pygame.display.flip()
        pygame.time.delay(20)
        return True

    def moveBehind(self):
        pygame.draw.rect(screen, [255, 255, 255], self.rect, 0)
        self.rect.right += self.speed
        if collide(group, enemy):
            self.rect.right -= self.speed
            return False
        screen.blit(self.image, self.rect)
        pygame.display.flip()
        pygame.time.delay(20)
        return True

    def moveDown(self):
        pygame.draw.rect(screen, [255, 255, 255], self.rect, 0)
        self.rect.top += self.speed
        if collide(group, enemy):
            self.rect.top -= self.speed
            return False
        screen.blit(self.image, self.rect)
        pygame.display.flip()
        pygame.time.delay(20)
        return True

    def moveUpAhead(self):
        pygame.draw.rect(screen, [255, 255, 255], self.rect, 0)
        self.rect.top += self.speed
        self.rect.right -= self.speed
        if collide(group, enemy):
            self.rect.top -= self.speed
            self.rect.right += self.speed
            return False
        screen.blit(self.image, self.rect)
        pygame.display.flip()
        pygame.time.delay(20)
        return True

    def moveDownAhead(self):
        pygame.draw.rect(screen, [255, 255, 255], self.rect, 0)
        self.rect.top -= self.speed
        self.rect.right -= self.speed
        if collide(group, enemy):
            self.rect.top += self.speed
            self.rect.right += self.speed
            return False
        screen.blit(self.image, self.rect)
        pygame.display.flip()
        pygame.time.delay(20)
        return True

    def moveUpBehind(self):
        pygame.draw.rect(screen, [255, 255, 255], self.rect, 0)
        self.rect.top += self.speed
        self.rect.right += self.speed
        if collide(group, enemy):
            self.rect.top -= self.speed
            self.rect.right -= self.speed
            return False
        screen.blit(self.image, self.rect)
        pygame.display.flip()
        pygame.time.delay(20)
        return True

    def moveDownBehind(self):
        pygame.draw.rect(screen, [255, 255, 255], self.rect, 0)
        self.rect.top -= self.speed
        self.rect.right += self.speed
        if collide(group, enemy):
            self.rect.top += self.speed
            self.rect.right -= self.speed
            return False
        screen.blit(self.image, self.rect)
        pygame.display.flip()
        pygame.time.delay(20)
        return True

    def edge(self):
        pygame.draw.rect(screen, [255, 255, 255], self.rect, 0)
        if self.rect.left < 0:
            self.rect.left = 0
            return False
        elif self.rect.right > width:
            self.rect.right = width
            return False
        elif self.rect.top < 0:
            self.rect.top = 0
            return False
        elif self.rect.bottom > height:
            self.rect.bottom = height
            return False
        else:
            return True

    def move(self, n):
        pygame.time.delay(20)
        a = False
        if self.edge():
            if n == 0:
                a = self.moveAhead()
            elif n == 1:
                a = self.moveBehind()
            elif n == 2:
                a = self.moveDown()
            elif n == 3:
                a = self.moveUp()
            elif n == 4:
                a = self.moveUpAhead()
            elif n == 5:
                a = self.moveUpBehind()
            elif n == 6:
                a = self.moveDownAhead()
            elif n == 7:
                a = self.moveDownBehind()
            return a
        else:
            return a

    def nightCrawl(self):
        screen.blit(self.nightCrawlImg, self.rect)
        pygame.display.flip()
        pygame.time.delay(500)
        pygame.draw.rect(screen, [255, 255, 255], self.rect, 0)
        while True:
            xCo = random.randint(300, 301)
            yCo = random.randint(1, 639)
            self.rect.top, self.rect.left = [yCo, xCo]

            if not collide(group, enemy) and self.edge():
                print(xCo, yCo)
                screen.blit(self.image, self.rect)
                pygame.display.flip()
                break

class object(pygame.sprite.Sprite):
    def __init__(self, location):
        pygame.sprite.Sprite.__init__(self)
        self.image = pygame.image.load("bench.png")
        self.rect = self.image.get_rect()
        self.rect.top, self.rect.left = location
        screen.blit(self.image, self.rect)
        pygame.display.flip()

class blackboard(pygame.sprite.Sprite):
    def __init__(self):
        pygame.sprite.Sprite.__init__(self)
        self.image = pygame.image.load("black.png")
        self.rect = self.image.get_rect()
        self.rect.top, self.rect.left = [0,325]
        screen.blit(self.image, self.rect)
        pygame.display.flip()

    def refresh(self):
        screen.blit(self.image, self.rect)
        pygame.display.flip()

class fire(pygame.sprite.Sprite):
    def __init__(self, fireLoc):
        pygame.sprite.Sprite.__init__(self)
        self.image = pygame.image.load("fire.png")
        self.rect = self.image.get_rect()
        self.rect.top, self.rect.left = fireLoc
        screen.blit(self.image, self.rect)
        pygame.display.flip()

    def firecollide(self):
        if not collide(group, self):
            screen.blit(self.image, self.rect)
            pygame.display.flip()
            return False
        else:
            screen.blit(pygame.image.load("fireScat.png"), self.rect)
            pygame.display.flip()
            return True

class powers(pygame.sprite.Sprite):
    def __init__(self, image):
        pygame.sprite.Sprite.__init__(self)
        self.image = pygame.image.load(image)
        self.rect = self.image.get_rect()
        self.rect.top, self.rect.left = random.randint(90,580), random.randint(310, 510)
        screen.blit(self.image, self.rect)
        pygame.display.flip()

    def powDslvr(self):
        if (self.rect.top<=playerOne.rect.top<=self.rect.bottom ) or (self.rect.top<=playerOne.rect.bottom<=self.rect.bottom ):
            if abs(self.rect.right-playerOne.rect.left)<=playerOne.speed or abs(self.rect.left-playerOne.rect.right)<=playerOne.speed:
                return True
        elif (self.rect.left<=playerOne.rect.right<=self.rect.right ) or (self.rect.left<=playerOne.rect.left<=self.rect.right):
            if abs(self.rect.top-playerOne.rect.bottom)<=playerOne.speed or abs(self.rect.bottom-playerOne.rect.top)<=playerOne.speed:
                return True
        else:
            return False


    def quicksilver(self):
        global powSpec
        if self.powDslvr():
            pygame.draw.rect(screen, [255, 255, 255], self.rect, 0)
            t = 0
            while t != 500:
                screen.blit(playerOne.QSImg, playerOne.rect)
                pygame.display.flip()
                pygame.time.delay(10)
                screen.blit(playerOne.QSImg2, playerOne.rect)
                pygame.display.flip()
                pygame.time.delay(10)
                t += 10
            screen.blit(playerOne.image, playerOne.rect)
            pygame.display.flip()
            group.remove(prize)
            playerOne.speed += 5
            powSpec = False

    def fireBreath(self):
        global powSpec, fires
        if self.powDslvr():
            pygame.draw.rect(screen, [255, 255, 255], self.rect, 0)
            t = 0
            while t != 500:
                screen.blit(playerOne.fireImg, playerOne.rect)
                pygame.display.flip()
                pygame.time.delay(10)
                screen.blit(playerOne.fireImg2, playerOne.rect)
                pygame.display.flip()
                pygame.time.delay(10)
                t += 10
            screen.blit(playerOne.image, playerOne.rect)
            pygame.display.flip()
            fires += 7
            blackboard.refresh()
            group.remove(prize)
            powSpec = False

    def Zoom(self):
        global powSpec, zoomings
        if self.powDslvr():
            pygame.draw.rect(screen, [255, 255, 255], self.rect, 0)
            t = 0
            while t != 500:
                screen.blit(playerOne.zoomImg, playerOne.rect)
                pygame.display.flip()
                pygame.time.delay(10)
                screen.blit(playerOne.zoomImg2, playerOne.rect)
                pygame.display.flip()
                pygame.time.delay(10)
                t += 10
            screen.blit(playerOne.image, playerOne.rect)
            pygame.display.flip()
            group.remove(prize)
            zoomings += 2
            blackboard.refresh()
            powSpec = False

def collide(group, player):
    group.remove(player)
    if pygame.sprite.spritecollide(player, group, False):
        group.add(player)
        return True
    else:
        group.add(player)
        return False

def levels(level):
    global prize, levSpec, powSpec, powNum
    if level >= 2 and levSpec and not powSpec:
        powNum = random.randint(0,2)
        powerList = ["quicksilver.png", "fireBreath.png", "zoom.png"]
        prize = powers(powerList[powNum])
        group.add(prize)
        powSpec = True
        levSpec = False
    if level >= 2 and powSpec:
        if powNum == 1:
            prize.fireBreath()
        elif powNum == 2:
            prize.Zoom()
        elif powNum == 0:
            prize.quicksilver()


size = width, height = 900, 640
screen = pygame.display.set_mode(size)
screen.blit(pygame.image.load("demo1.jpg"), [0,0])
pygame.display.flip()
pygame.time.delay(500)

screen.fill([255, 255, 255])
img_file = ["flash.png", "attack.png", "flashLgt.png", "flashLgt2.png", "flashFr.png", "flashFr2.png", "flashZoom.png", "flashZoom2.png"]
img_file2 = ["rev.png", "revAttack.png", "shadow.png"]
playerOne = Player(img_file, [10, 340])
enemy = Enemy(img_file2, [310, 310])
group = pygame.sprite.Group()
group.add(playerOne)
group.add(enemy)
blackboard = blackboard()
group.add(blackboard)

def benchCreator():
    bench = 0
    location = [201, 131]
    benchs = []
    while bench <= 4:
        benchs.append(object(location))
        group.add(benchs[bench])
        bench +=1
        location[1] += 449
        benchs.append(object(location))
        group.add(benchs[bench])
        bench +=1
        location[1] -= 449
        location[0] += 159

n = random.randint(0,7)
enemy.speed = 5
b = enemy.move(n)
count = 0
level = 1
levSpec = False
powSpec = False
fires = 5
zoomings = 1
benchCreator()

while True:
    levels(level)
    font = pygame.font.Font(None, 25)
    score_text = font.render("Score " + str(playerOne.point), 0, (255, 255, 120))
    fireNum = font.render("Shits " + str(fires), 0, (255, 255, 120))
    zoomNum = font.render("Zoomings " + str(zoomings), 0, (255, 255, 120))
    ScorePosition = [345, 12]
    firePos = [345, 32]
    zoomPos = [345, 52]
    screen.blit(score_text, ScorePosition)
    screen.blit(fireNum, firePos)
    screen.blit(zoomNum, zoomPos)
    if not b or count > 20:
        n = random.randint(0,7)
        count = 0
    b = enemy.move(n)
    count += 1
    if playerOne.point != 0 and playerOne.point%10 == 0:
        levSpec = True
        level += 1
        levels(level)
        enemy.nightCrawl()
        playerOne.point += 1
        blackboard.refresh()
        enemy.speed += 5
    for event in pygame.event.get():
        if event.type == pygame.KEYDOWN:
            playerOne.move()
            if event.key == pygame.K_a:
                playerOne.attack()
            elif event.key == pygame.K_s and fires:
                screen.blit(playerOne.fireImg, playerOne.rect)
                pygame.display.flip()
                playerOne.fireAttack()
                fires -= 1
                blackboard.refresh()
                screen.blit(playerOne.image, playerOne.rect)
                pygame.display.flip()
            elif event.key == pygame.K_d and zoomings:
                screen.blit(playerOne.fireImg, playerOne.rect)
                pygame.display.flip()
                enemy.speed = 5
                temp = playerOne.point
                zoomings -= 1
                blackboard.refresh()
                screen.blit(playerOne.image, playerOne.rect)
                pygame.display.flip()
        if event.type == pygame.QUIT:
            sys.exit()