from bs4 import BeautifulSoup
import requests
import random 

global random_song 

data_of_songs={
    'random_song':""
}

url = "https://www.esquire.com/entertainment/music/g36135549/best-songs-2021/"
list_songs = []



class robot:
#choice random song 
    name = "None"
    # constructor
    def __init__(self, name):
        self.name = name  # set name
    @staticmethod    
    def random_song():
        

        req =  requests.get(url)
        src =  BeautifulSoup(req.text,'lxml')
        songs = src.find_all('span',class_='listicle-slide-hed-text')

        for el in songs:
            list_songs.append(el.text)
        random_song = random.choice(list_songs)
        
        return random_song
        



print()